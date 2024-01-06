# pushswap_checker

Ce script en Haskell vérifie si une liste de commandes de tri, appliquée à une liste donnée, conduit à une liste triée. Les commandes possibles sont "sa", "sb", "sc", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr".

## Fonctionnalités

### Fonctions

#### `isSorted :: [String] -> Bool`

- **Arguments :** Prend en entrée une liste de chaînes de caractères.
- **Fonction :** Vérifie si une liste de chaînes de caractères est triée.
- **Retour :** Renvoie `True` si la liste est triée, sinon `False`.

#### `output :: [String] -> [String] -> IO ()`

- **Arguments :** Prend en entrée deux listes de chaînes de caractères.
- **Fonction :** Gère la sortie pour les cas où le tri n'est pas valide.
- **Action :** Affiche "KO" et termine le programme avec un code d'erreur si le tri n'est pas valide.

#### `ifSorted :: [String] -> [String] -> IO ()`

- **Arguments :** Prend en entrée deux listes de chaînes de caractères.
- **Fonction :** Vérifie et affiche si la liste est triée ou non.
- **Action :** Affiche "OK" si la liste est triée, sinon "KO" et termine le programme avec un code d'erreur.

#### `suitSort :: [String] -> [String] -> [String] -> IO ()`

- **Arguments :** Prend en entrée trois listes de chaînes de caractères.
- **Fonction :** Trie les éléments en fonction des commandes spécifiées.
- **Action :** Exécute les opérations de tri selon les commandes spécifiées.

#### `sortAlgo :: [String] -> [String] -> [String] -> IO ()`

- **Arguments :** Prend en entrée trois listes de chaînes de caractères.
- **Fonction :** Applique les commandes de tri sur la liste pour vérification.
- **Action :** Effectue les opérations de tri et vérifie si la liste est triée à la fin du processus.

#### `printAll :: [String] -> [String] -> IO ()`

- **Arguments :** Prend en entrée deux listes de chaînes de caractères.
- **Fonction :** Vérifie et affiche si la liste est triée ou non après les opérations de tri.
- **Action :** Affiche "OK" si la liste est triée, sinon effectue les opérations de tri pour vérification.

#### `main :: IO ()`

- **Arguments :** Aucun.
- **Fonction :** Fonction principale.
- **Action :** Récupère les arguments et les commandes de tri, puis effectue la vérification.

### Utilisation

#### Prérequis

- GHC (Glasgow Haskell Compiler)
- Clonez ou téléchargez ce dépôt

#### Exécution

1. Ouvrez un terminal.
2. Naviguez jusqu'au répertoire contenant le script `pushswap_checker.hs`.
3. Compilez le script : `ghc -o pushswap_checker pushswap_checker.hs`.
4. Exécutez le script avec une liste à trier et les commandes de tri : `./pushswap_checker <liste à trier>`.
   Par exemple : `./pushswap_checker "5 2 3 1 4" "sa pb ra"`.

## Auteurs

Ce script a été développé par [ALfred] dans le cadre d'un projet à l'Ecole [EPITECH].

---

# pushswap_checker

This Haskell script verifies if a list of sorting commands, applied to a given list, results in a sorted list. The possible commands are "sa", "sb", "sc", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr".

## Features

### Functions

#### `isSorted :: [String] -> Bool`

- **Arguments:** Takes a list of strings as input.
- **Function:** Checks if a list of strings is sorted.
- **Return:** Returns `True` if the list is sorted, else `False`.

#### `output :: [String] -> [String] -> IO ()`

- **Arguments:** Takes two lists of strings as input.
- **Function:** Handles output for cases where sorting is not valid.
- **Action:** Prints "KO" and exits the program with an error code if the sorting is invalid.

#### `ifSorted :: [String] -> [String] -> IO ()`

- **Arguments:** Takes two lists of strings as input.
- **Function:** Checks and prints if the list is sorted or not.
- **Action:** Prints "OK" if the list is sorted, else "KO" and exits the program with an error.

#### `suitSort :: [String] -> [String] -> [String] -> IO ()`

- **Arguments:** Takes three lists of strings as input.
- **Function:** Sorts elements based on the specified commands.
- **Action:** Executes sorting operations as per the specified commands.

#### `sortAlgo :: [String] -> [String] -> [String] -> IO ()`

- **Arguments:** Takes three lists of strings as input.
- **Function:** Applies sorting commands to the list for verification.
- **Action:** Performs sorting operations and checks if the list is sorted at the end of the process.

#### `printAll :: [String] -> [String] -> IO ()`

- **Arguments:** Takes two lists of strings as input.
- **Function:** Checks and prints if the list is sorted or not after sorting operations.
- **Action:** Prints "OK" if the list is sorted, else performs sorting operations for verification.

#### `main :: IO ()`

- **Arguments:** None.
- **Function:** Main function.
- **Action:** Retrieves arguments and sorting commands, then performs verification.

### Usage

#### Prerequisites

- GHC (Glasgow Haskell Compiler)
- Clone or download this repository

#### Execution

1. Open a terminal.
2. Navigate to the directory containing the `pushswap_checker.hs` script.
3. Compile the script: `ghc -o pushswap_checker pushswap_checker.hs`.
4. Run the script with a list to sort and sorting commands: `./pushswap_checker <list to sort>`.
   For example: `./pushswap_checker "5 2 3 1 4" "sa pb ra"`.

## Authors

This script was developed by [Alfred] as part of a project at [EPITECH].

---
# pushswap_checker

Este script en Haskell verifica si una lista de comandos de ordenamiento, aplicada a una lista dada, resulta en una lista ordenada. Los comandos posibles son "sa", "sb", "sc", "pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr".

## Funciones

### Funciones

#### `isSorted :: [String] -> Bool`

- **Argumentos:** Toma una lista de cadenas como entrada.
- **Función:** Verifica si una lista de cadenas está ordenada.
- **Retorno:** Devuelve `True` si la lista está ordenada, sino `False`.

#### `output :: [String] -> [String] -> IO ()`

- **Argumentos:** Toma dos listas de cadenas como entrada.
- **Función:** Maneja la salida para casos en los que el ordenamiento no es válido.
- **Acción:** Imprime "KO" y sale del programa con un código de error si el ordenamiento no es válido.

#### `ifSorted :: [String] -> [String] -> IO ()`

- **Argumentos:** Toma dos listas de cadenas como entrada.
- **Función:** Verifica e imprime si la lista está ordenada o no.
- **Acción:** Imprime "OK" si la lista está ordenada, sino "KO" y sale del programa con un error.

#### `suitSort :: [String] -> [String] -> [String] -> IO ()`

- **Argumentos:** Toma tres listas de cadenas como entrada.
- **Función:** Ordena elementos en función de los comandos especificados.
- **Acción:** Ejecuta operaciones de ordenamiento según los comandos especificados.

#### `sortAlgo :: [String] -> [String] -> [String] -> IO ()`

- **Argumentos:** Toma tres listas de cadenas como entrada.
- **Función:** Aplica comandos de ordenamiento a la lista para verificar.
- **Acción:** Realiza operaciones de ordenamiento y verifica si la lista está ordenada al final del proceso.

#### `printAll :: [String] -> [String] -> IO ()`

- **Argumentos:** Toma dos listas de cadenas como entrada.
- **Función:** Verifica e imprime si la lista está ordenada o no después de operaciones de ordenamiento.
- **Acción:** Imprime "OK" si la lista está ordenada, sino realiza operaciones de ordenamiento para verificar.

#### `main :: IO ()`

- **Argumentos:** Ninguno.
- **Función:** Función principal.
- **Acción:** Obtiene argumentos y comandos de ordenamiento, luego realiza la verificación.

### Uso

#### Requisitos

- GHC (Glasgow Haskell Compiler)
- Clonar o descargar este repositorio

#### Ejecución

1. Abrir una terminal.
2. Navegar al directorio que contiene el script `pushswap_checker.hs`.
3. Compilar el script: `ghc -o pushswap_checker pushswap_checker.hs`.
4. Ejecutar el script con una lista a ordenar y comandos de ordenamiento: `./pushswap_checker <lista a ordenar>`.
   Por ejemplo: `./pushswap_checker "5 2 3 1 4" "sa pb ra"`.

## Autores

Este script fue desarrollado por [Alfred] como parte de un proyecto en [EPITECH].

---
