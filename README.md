# Worldle_solver_Mickael_Valisoa

# Wordle Solver

## 📖 Présentation du projet
Ce projet est un **solver pour le jeu Wordle**, réalisé dans le cadre du TP de Systèmes d’Exploitation.  
Le programme permet de filtrer une base de mots (`bdd_wordle.txt`) afin de réduire progressivement la liste et trouver la solution du Wordle.

---

## 📂 Structure du projet
- `bin/` → exécutable compilé (`solver`)  
- `src/` → sources `.c` (`main.c`, `filters.c`)  
- `include/` → en-têtes `.h` (`filters.h`)  
- `ressource/` → base de mots (`bdd_wordle.txt`)  
- `README.md` → documentation  

---

## ⚙️ Installation
Cloner le projet :
```bash
git clone https://github.com/nom1/wordle_solver_nom1_nom2.git
cd wordle_solver_nom1_nom2

Pour compiler : 
gcc -Iinclude src/*.c -o bin/solver

Pour exécuter : 
./bin/solver
