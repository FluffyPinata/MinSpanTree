#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <string>

struct Edge {
	int source, destination, weight, numEdges;
};

std::vector<Edge> readEdges();

int minKey(std::vector<int> key, std::vector<bool> mstSet, int V);