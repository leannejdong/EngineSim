#include <iostream>
#include "SimpleSolve/include/ESolve.h"
#include "HydraulicNetwork/HydraulicNetLib/include/Timer.h"
#include "HydraulicNetwork/HydraulicNetLib/include/NetworkSolve.h"
int main()
{  // Demo: SimpleSolve for page13 in https://orca.cardiff.ac.uk/57830/1/2014LiuXPhD.pdf
    HydraulicNetwork::Timer timer;
    std::cerr << "Measure time taken for solving massflow\n";
    try {
      SimpleSolve::ESolve();
    } catch (const std::exception &exception){
        std::cerr << exception.what() << "\n";
        throw;
    }
   // Demo: HydraulicNetwork Solver on Verona data
    HydraulicNetwork::Timer t2;
    std::cerr << "Measure time taken for solving massflow\n";
    try {
        HydraulicNetwork::NetworkSolve();
    } catch (const std::exception &exception) {
        std::cerr << exception.what() << '\n';
        throw;
    }
    return 0;

}
