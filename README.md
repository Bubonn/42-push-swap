# Projet Push Swap - École 42

Bienvenue dans le projet Push Swap ! Ce projet a été réalisé dans le cadre du cursus de l'école 42 et consiste à trier une pile d'entiers en utilisant un ensemble limité d'opérations de manipulation.

## Table des matières

1. [Introduction](#introduction)
2. [Règles du projet](#règles-du-projet)
3. [Installation](#installation)
4. [Utilisation](#utilisation)
5. [Algorithme de tri](#algorithme-de-tri)

## Introduction

Le but de ce projet est de trier efficacement une pile d'entiers en utilisant deux piles et un ensemble d'opérations prédéfinies. Vous devrez implémenter un algorithme de tri qui minimise le nombre total d'opérations nécessaires pour trier la pile.

## Règles du projet

Les règles du jeu sont simples :
- Vous disposez de deux piles, A et B.
- Au début, la pile A contient un ensemble d'entiers non triés, et la pile B est vide.
- Vous devez trier la pile A en plaçant les entiers dans l'ordre croissant dans la pile B.
- Vous pouvez utiliser les opérations suivantes : 
    - `sa`: swap A - échanger les deux premiers éléments de la pile A.
    - `sb`: swap B - échanger les deux premiers éléments de la pile B.
    - `ss`: swap A et B - échanger les deux premiers éléments de chaque pile.
    - `pa`: push A - déplacer le premier élément de la pile B vers la pile A.
    - `pb`: push B - déplacer le premier élément de la pile A vers la pile B.
    - `ra`: rotate A - déplacer le premier élément de la pile A à la fin.
    - `rb`: rotate B - déplacer le premier élément de la pile B à la fin.
    - `rr`: rotate A et B - effectuer un `ra` et un `rb` en même temps.
    - `rra`: reverse rotate A - déplacer le dernier élément de la pile A au début.
    - `rrb`: reverse rotate B - déplacer le dernier élément de la pile B au début.
    - `rrr`: reverse rotate A et B - effectuer un `rra` et un `rrb` en même temps.

L'objectif est de trier la pile A avec le moins d'opérations possibles.

## Installation

1. Clonez ce dépôt sur votre machine locale.
2. Compilez le projet en utilisant le Makefile fourni.

   ```bash
   make

## Utilisation

Pour utiliser le programme, exécutez la commande suivante :

```
./push_swap [liste d'entiers]
```

- [liste d'entiers] est la liste des entiers que vous souhaitez trier, par exemple : ./push_swap 3 2 1 5 4

Le programme générera la liste des opérations nécessaires pour trier la pile A et les affichera à l'écran. 

## Algorithme de tri

Pour trier efficacement les entiers dans le projet Push Swap, j'ai choisi d'implémenter l'algorithme de tri radix LSD (Least Significant Digit Radix Sort). Ce tri se base d'abord sur le chiffre le moins significatif, puis sur le chiffre suivant, et ainsi de suite jusqu'au chiffre le plus significatif.

L'algorithme se déroule en plusieurs étapes, triant les éléments de la pile en fonction de chaque chiffre de manière séquentielle. À chaque étape, un tri stable est effectué pour garantir que l'ordre relatif des éléments reste préservé.

Néanmoins, le tri radix LSD peut devenir inefficace lorsque les entiers ont un grand nombre de chiffres significatifs ou lorsqu'un petit nombre d'éléments doit être trié.

L'utilisation de l'algorithme de tri radix LSD permet d'obtenir des performances optimales pour trier efficacement la pile d'entiers dans le cadre des contraintes du projet Push Swap.
