# pushswap_checker

Ce script en Haskell vérifie si une liste de commandes de tri, appliquée à une liste donnée, conduit à une liste triée. Les commandes possibles sont "sa", "sb", "sc", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr".

## Fonctionnalités

Le script contient plusieurs fonctions :

- `isSorted :: [String] -> Bool` : Vérifie si une liste de chaînes de caractères est triée.
- `output :: [String] -> [String] -> IO ()` : Gère la sortie pour les cas où le tri n'est pas valide.
- `ifSorted :: [String] -> [String] -> IO ()` : Vérifie et affiche si la liste est triée ou non.
- `suitSort :: [String] -> [String] -> [String] -> IO ()` : Trie les éléments en fonction des commandes spécifiées.
- `sortAlgo :: [String] -> [String] -> [String] -> IO ()` : Applique les commandes de tri sur la liste pour vérification.
- `printAll :: [String] -> [String] -> IO ()` : Vérifie et affiche si la liste est triée ou non après les opérations de tri.
- `main :: IO ()` : Fonction principale : récupère les arguments et les commandes de tri, puis effectue la vérification.

## Utilisation

### Prérequis

- GHC (Glasgow Haskell Compiler)
- Clonez ou téléchargez ce dépôt

### Exécution

1. Ouvrez un terminal.
2. Naviguez jusqu'au répertoire contenant le script `pushswap_checker.hs`.
3. Compilez le script : `ghc -o pushswap_checker pushswap_checker.hs`.
4. Exécutez le script avec une liste à trier et les commandes de tri : `./pushswap_checker <liste à trier>`.
   Par exemple : `./pushswap_checker "5 2 3 1 4" "sa pb ra"`.

## Auteurs

Ce script a été développé par [votre_nom] dans le cadre d'un projet à l'Ecole [nom_de_l'école].

---
