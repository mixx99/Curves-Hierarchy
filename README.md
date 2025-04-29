# Curves Hierarchy
This project was developed as a test task for [CAD Exchanger](https://cadexchanger.com/).
# Task
#### Main task
- [x] Support a few types of 3D geometric curves – circles, ellipses and 3D helixes. (Simplified
definitions are below). Each curve should be able to return a 3D point and a first derivative (3D
vector) per parameter t along the curve.  
- [x] Populate a container (e.g. vector or list) of objects of these types created in random manner with
random parameters.  
- [x] Print coordinates of points and derivatives of all curves in the container at t=PI/4.
- [x] Populate a second container that would contain only circles from the first container. Make sure the
second container shares (i.e. not clones) circles of the first one, e.g. via pointers.
- [x] Sort the second container in the ascending order of circles’ radii. That is, the first element has the
smallest radius, the last - the greatest.
- [x] Compute the total sum of radii of all curves in the second container  
#### *Additional optional requirements:
- [x] Split implementation into a library of curves (.dll or .so) and executable which uses API of this
library.
- [ ] Implement computation of the total sum of radii using parallel computations (e.g. OpenMP or Intel
TBB library).

# Building
Development is done using [CMake](https://cmake.org) to compile the project. Most popular IDEs are supported through their respective CMake integration.  

First you need to clone this project:
```PowerShell
git clone https://github.com/mixx99/Curves-Hierarchy
```
**You can get a copy of the code either using "git clone," or using the repo's download button to obtain a [.ZIP archive](https://github.com/mixx99/Curves-Hierarchy/archive/refs/heads/main.zip).**

Then use CMake to generate project build files:
```PowerShell
cmake -B build -DCMAKE_BUILD_TYPE=Release/Debug
cmake --build build
```
Build tested with:
- GNU/Linux
- MSVC 2022
- MinGW

# Run  
You can run example with:  
```PowerShell
#Linux
./build/bin/FirstApp

#Windows
.\build\bin\Debug\FirstApp.exe
```
# Example output
We can run the program with special parameters in functions that filling containters and we will get something like this:
```Text
Size of the first container: 5
[1]Circle: Radius = 7.2
  Point:      x = 5.09117       y = 5.09117     z = 0
  Derivative: x = -5.09117      y = 5.09117     z = 0
[2]Circle: Radius = 2.33333
  Point:      x = 1.64992       y = 1.64992     z = 0
  Derivative: x = -1.64992      y = 1.64992     z = 0
[3]Ellipse: a = 1.16667 b = 6.125
  Point:      x = 0.824958      y = 4.33103     z = 0
  Derivative: x = -0.824958     y = 4.33103     z = 0
[4]Ellipse: a = 2.5 b = 7.11111
  Point:      x = 1.76777       y = 5.02831     z = 0
  Derivative: x = -1.76777      y = 5.02831     z = 0
[5]Helix: R = 6.25 Step = 6.5
  Point:      x = 4.41942       y = 4.41942     z = 0.8125
  Derivative: x = -4.41942      y = 4.41942     z = 1.03451
Size of the second container: 2
Sum of radii in the second container: 9.53333
```
**Note:** Default container generation uses 10 random curves with max radius = 10 and max step = 10. You can pass custom parameters to fillFirstContainer().
