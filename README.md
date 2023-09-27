# README is for reading

This is a two part assignment. 

The folder PackageDelivery contains resources for the first part.

The folder HUMania contains resources for the second part.

Relevant instructions for each part are found in the Assignment03.pdf file as well as instructions in the respective folders.

# For brave cmake users:
Since there are effectively two different tasks, there is a `CMakeLists.txt` file in each of the two folders namely `HUMania` and `PackageDelivery`. The process is exactly the same for you. To build `PackageDelivery` project:
- `cd PackageDelivery` (please ensure you are in a directory where this `PackageDelivery` exists)
- `mkdir build` (creates a build directory inside `PackageDelivery`)
- `cd build` (navigate to the newly created build director)
- On Linux use `cmake ..`. On windows use `cmake -G "MinGW Makefiles" ..` if you install gcc via MSYS2. If you installed gcc via strawberry perl, use `cmake -G "Unix Makefiles" ..`
- Run `make` or `make -j4`

You can repeat the same instructions as above for HUMania. More explicitly:
- `cd HUMania` (please ensure you are in a directory where this `HUMania` exists)
- `mkdir build` (creates a build directory inside `HUMania`)
- `cd build` (navigate to the newly created build director)
- On Linux use `cmake ..`. On windows use `cmake -G "MinGW Makefiles" ..` if you install gcc via MSYS2. If you installed gcc via strawberry perl, use `cmake -G "Unix Makefiles" ..`
- Run `make` or `make -j4`


# For non-cmake users
- There is `How to Compile.txt` in `HUMania` folder, please following the instructions in there
