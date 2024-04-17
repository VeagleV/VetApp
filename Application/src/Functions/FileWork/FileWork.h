#include <iostream>
#include <vector>
#include <fstream>
#include "../../Service/Service.h"



vector<Service>  ReadFile(string filename);
void SaveFile( string filename, vector<Service>& services);
