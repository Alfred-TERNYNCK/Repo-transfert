const { Client, GatewayIntentBits } = require('discord.js');
const { token, prefix, logChannelId } = require('./config.json');

const client = new Client({
    intents: [
        GatewayIntentBits.Guilds,
        GatewayIntentBits.GuildMembers,
        GatewayIntentBits.GuildMessages,
        GatewayIntentBits.MessageContent,
        GatewayIntentBits.DirectMessages,
    ],
});
// Utilisation d'une Map pour stocker les clés d'authentification associées à chaque utilisateur
const userKeys = new Map();

client.once('ready', () => {
    console.log(`Ready! Logged in as ${client.user.tag}`);

    // Récupérer le canal de logs par ID
    const logChannel = client.channels.cache.get(logChannelId);

    // Vérifier si le canal de logs existe
    if (logChannel) {
        logChannel.send('Je suis maintenant en ligne!');
    } else {
        console.error('Le canal de logs est introuvable. Assurez-vous que le canal log_bot existe et que le bot a les autorisations nécessaires.');
    }
});

client.on('messageCreate', async message => {
    // Vérifier si le message provient d'un utilisateur (pas un bot)
    if (message.author.bot) {
        return;
    }

    // Vérifier si le message est une commande dans le chat général
    if (message.content.startsWith(prefix)) {
        // Séparer la commande et les arguments
        const args = message.content.slice(prefix.length).trim().split(/ +/);
        const command = args.shift().toLowerCase();

        // Vérifier si la commande est "!stat"
        if (command === 'stat') {
            // Récupérer le pseudo mentionné dans la commande
            const mentionedUser = message.mentions.users.first();
            
            // Vérifier si le pseudo a été mentionné
            if (!mentionedUser) {
                return message.channel.send('Vous devez mentionner un utilisateur');
            }

            // Vérifier si le pseudo mentionné est un bot
            if (mentionedUser.bot) {
                return message.channel.send('Vous ne pouvez pas utiliser cette commande sur un bot');
            }

            // Vérifier si l'utilisateur a envoyé sa clé en message privé
            const userKey = userKeys.get(mentionedUser.id);

            if (userKey) {
                message.channel.send(`L'utilisateur ${mentionedUser.username} a envoyé sa clé d'authentification.`);
            } else {
                message.channel.send(`L'utilisateur ${mentionedUser.username} n'a pas encore envoyé sa clé d'authentification.`);
            }

            // Vérifier si l'utilisateur est dans la guilde
            if (mentionedUser) {
                return message.channel.send(`L'utilisateur ${mentionedUser.username} est bien dans la guilde`);
            }
        }

    }
});

// help command

client.on('messageCreate', async message => {
    if (message.author.bot) {
        return;
    }

    if (message.content.startsWith(prefix)) {
        const args = message.content.slice(prefix.length).trim().split(/ +/);
        const command = args.shift().toLowerCase();

        if (command === 'help') {
            const helpEmbed = {
                color: 0x0099ff,
                title: 'Help',
                description: 'Liste des commandes',
                fields: [
                    {
                        name: 'Commandes',
                        value: '!help : Affiche la liste des commandes\n!stat : Affiche les informations de l\'utilisateur mentionné',
                    },
                ],
            };

            return message.channel.send({ embeds: [helpEmbed] });
        }
    }

}
);



client.login(token);
