#include "headers/sense.h"

using namespace std;

// OPTIMIZATION: Pass larger variables by reference
vector< vector <float> > sense(char color, vector< vector <char> > grid, vector< vector <float> > beliefs,  float p_hit, float p_miss) 
{
	// OPTIMIZATION: Is the newGrid variable necessary?
  	// Could the beliefs input variable be updated directly?
  	vector< vector <float> > newGrid;
	vector<float> row, newRow;

	float prior, p;

	char cell;

	int i, j, height, width;
	height = grid.size();
	width = grid.size();

	for (i=0; i<grid.size(); i++) {
		newRow.clear();
		for (j=0; j<grid[0].size(); j++) {
          	// OPTIMIZATION: Which of these variables are 					needed?
			prior = beliefs[i][j];
			cell = grid[i][j];
			if (cell == color) {
				p = prior * p_hit;
			}
            // OPTIMIZATION: if else statements might be 
          	// 	faster than two if statements
			if (cell != color) {
				p = prior * p_miss;
			}
			newRow.push_back(p);
		}
		newGrid.push_back(newRow);
	}
	return newGrid;
}
