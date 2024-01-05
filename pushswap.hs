{-
-- EPITECH PROJECT, 2024
-- Rush1
-- File description:
-- pushswap_checker
-}

import System.Environment
import System.Exit

isSorted :: [String] -> Bool
isSorted [] = True
isSorted [_] = True
isSorted (x:y:xs) = x <= y && isSorted (y:xs)

output :: [String] -> [String] -> IO ()
output _ l_b = case l_b of
    (_:_) -> putStr "KO" >> exitWith (ExitFailure 84)
    _ -> putStr "KO" >> exitWith (ExitFailure 84)

ifSorted :: [String] -> [String] -> IO ()
ifSorted _ l_b
    | not (null l_b) = output [] l_b
ifSorted l_a _
    | isSorted l_a = putStrLn "OK" >> return ()
    | otherwise = putStr "KO" >> exitWith (ExitFailure 84)

suitSort :: [String] -> [String] -> [String] -> IO ()
suitSort [] l_a l_b = ifSorted l_a l_b
suitSort (x:xs) l_a l_b = case x of
    "ra" -> suitSort xs (drop 1 l_a ++ take 1 l_a) l_b
    "rb" -> suitSort xs l_a (drop 1 l_b ++ take 1 l_b)
    "rr" -> suitSort xs (drop 1 l_a ++ take 1 l_a) (drop 1 l_b ++ take 1 l_b)
    "rra" -> suitSort xs (last l_a : init l_a) l_b
    "rrb" -> suitSort xs l_a (last l_b : init l_b)
    "rrr" -> suitSort xs (last l_a : init l_a) (last l_b : init l_b)
    _ -> output l_a l_b

sortAlgo :: [String] -> [String] -> [String] -> IO ()
sortAlgo [] l_a l_b = ifSorted l_a l_b
sortAlgo (x:xs) l_a l_b = case x of
    "sa" -> sortAlgo xs (swapFirstTwo l_a) l_b
    "sb" -> sortAlgo xs l_a (swapFirstTwo l_b)
    "sc" -> sortAlgo xs (swapFirstTwo l_a) (swapFirstTwo l_b)
    "pa" -> sortAlgo xs (addToFirst l_a l_b) (drop 1 l_b)
    "pb" -> sortAlgo xs (drop 1 l_a) (addToFirst l_b l_a)
    _ -> suitSort (x:xs) l_a l_b

printAll :: [String] -> [String] -> IO ()
printAll listToVerify listToSort
    | isSorted listToSort = putStrLn "OK"
    | otherwise = sortAlgo listToVerify listToSort []

main :: IO ()
main = do
    listToSort <- getArgs
    listToVerify <- getLine
    if null listToSort || null listToVerify
        then exitWith (ExitFailure 84)
        else printAll (concatMap words (words listToVerify)) listToSort

swapFirstTwo :: [a] -> [a]
swapFirstTwo [] = []
swapFirstTwo (x:y:xs) = y : x : xs

addToFirst :: [a] -> [a] -> [a]
addToFirst l_a [] = l_a
addToFirst l_a (x:_) = x : l_a