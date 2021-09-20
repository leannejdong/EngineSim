# EngineSim - A simple simulation engine for various networks 

- [HydraulicNetwork](https://github.com/leannejdong/HydraulicNetwork) is our specialized solver for hydraulic and thermal network in the project of District Heating Network

- [SimpleSolve](https://github.com/leannejdong/EngineSim/tree/master/SimpleSolve) is a [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page)-based solver for low dimensional nonlinear equation system

## Build instruction

* [README.md, SimpleSolve](https://github.com/leannejdong/EngineSim/blob/master/SimpleSolve/README.md)
* [README.md, HydraulicNetworkLib](https://github.com/leannejdong/HydraulicNetwork/blob/5a73bfbb8c96f7b338a823e93dcd01365861a897/README.md)

### Guide for the end-user who want to try our solvers without modification of code

We recommend student users to install CLION IDE for C++. (Or MSVC, VS codes)
This would configure your build without extra headaches.

Otherwise, follow the usual cmake instruction to try for instance 
```cpp
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
}

```
```
cd build
cmake ..
make
./executable
```
## Contribution

Welcome any of your 

* favorite simulation solver prototypes

* demand data (electrical, thermal)

* Anything else, feel free to send PR or  [email](leanne.dong@concordia.ca).