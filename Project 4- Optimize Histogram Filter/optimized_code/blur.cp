#include "headers/blur.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector < vector <float> > blur(vector < vector < float> > grid, float blurring) {

	// OPTIMIZATION: window, DX and  DY variables have the 
    // same value each time the function is run.
  	// It's very inefficient to recalculate the vectors
    // every time the function runs. 
    // 
    // The const and/or static operator could be useful.
  	// Define and declare window, DX, and DY using the
    // bracket syntax: vector<int> foo = {1, 2, 3, 4} 
    // instead of calculating these vectors with for loops 
    // and push back
  	vector < vector <float> > window;
	vector < vector <float> > newGrid;
	vector <float> row;
	vector <float> newRow;

	int height;
	int width;
	float center, corner, adjacent;

	height = grid.size();
	width = grid[0].size();

	center = 1.0 - blurring;
	corner = blurring / 12.0;
	adjacent = blurring / 6.0;

	int i, j;
	float val;

	for (i=0; i<3; i++) {
		row.clear();
		for (j=0; j<3; j++) {
			switch (i) {
				case 0: 
				switch (j) {
					case 0: 
					val = corner;
					break;

					case 1: 
					val = adjacent;
					break;

					case 2: 
					val = corner;
					break;
				}
				break; 

				case 1:
				switch (j) {
					case 0: 
					val = adjacent;
					break;

					case 1: 
					val = center;
					break;
					
					case 2: 
					val = adjacent;
					break;
				}
				break;

				case 2:
				switch(j) {
					case 0: 
					val = corner;
					break;

					case 1: 
					val = adjacent;
					break;
					
					case 2: 
					val = corner;
					break;
				}
				break;
			}
			row.push_back(val);
		}
		window.push_back(row);
	}


	vector <int> DX;
	vector <int> DY;

	DX.push_back(-1); DX.push_back(0); DX.push_back(1);
	DY.push_back(-1); DY.push_back(0); DY.push_back(1);

	int dx;
	int dy;
	int ii;
	int jj;
	int new_i;
	int new_j;
	float multiplier;
	float newVal;

	// OPTIMIZATION: Use your improved zeros function
	for (i=0; i<height; i++) {
		newRow.clear();
		for (j=0; j<width; j++) {
			newRow.push_back(0.0);
		}
		newGrid.push_back(newRow);
	}

	for (i=0; i< height; i++ ) {
		for (j=0; j<width; j++ ) {
			val = grid[i][j];
			newVal = val;
			for (ii=0; ii<3; ii++) {
				dy = DY[ii];
				for (jj=0; jj<3; jj++) {
					dx = DX[jj];
					new_i = (i + dy + height) % height;
					new_j = (j + dx + width) % width;
					multiplier = window[ii][jj];
					newGrid[new_i][new_j] += newVal * multiplier;
				}
			}
		}
	}

	return newGrid;
}
