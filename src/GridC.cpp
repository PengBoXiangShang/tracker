#include "GridC.h"
#include <stdlib.h>

#include <list>

using namespace std;

GridC::GridC(void) {

};

GridC::GridC(int width, int height) {
	int x, y;
	//Calculate the width and height in cells
	xcells = width/GRID_CELLSIZE + 1;
	ycells = width/GRID_CELLSIZE + 1;
	//Allocate enough memory to store height times width pointers
	grid = (list<Candidate> * *)malloc(sizeof(list<Candidate> *)*xcells*ycells);
	//Initialise all cell entries with NULL pointers
	for(x=0; x<xcells; x++) {
		for(y=0; y<ycells; y++) {
			grid[xcells*y+x] = NULL;
		}
	}
};

list<Candidate> * GridC::GetEntry(int x, int y) {
	//Return the cell entry or NULL if the coordinates are out of range
	if(((x < xcells)&&(y < ycells))&&((x >= 0)&&(y >= 0)))
		return grid[xcells*y+x];
	else
		return NULL;
}

void GridC::SetEntry(int x, int y, list<Candidate> * entry) {
	//Set the cell entry to  new pointer
	if((x < xcells)&&(y < ycells))
		grid[xcells*y+x] = entry;
}

