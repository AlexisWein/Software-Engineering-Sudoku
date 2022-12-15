#pragma once
#include "Puzzle.hpp"
#include "Cell.hpp"

bool CheckVal(Puzzle * puzzle, int row, int col);
bool SolveBruteForce(Puzzle* puzzle);
bool CheckPuzzle(Puzzle* puzzle);
void PrintPuzzle(Puzzle* puzzle);  
 