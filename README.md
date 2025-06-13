# vscode_cpp_template
vscode+vcpkg+cmake bare minimum template

Install vcpkg : 

https://github.com/microsoft/vcpkg

Install cmake :

https://cmake.org/download/

Remember to add vcpkg and cmake's path to env variables.

Install vscode add-ons :

<img src="images\addon.png">

vcpkg init for empty project (this project already has a vcpkg.json so you don't need to run this command):
```bash
vcpkg new --application
```

vcpkg add packages (this project's vcpkg.json contains **fmt** as example package):
```bash
vcpkg add port fmt
vcpkg add port {package name}
```

Remember to add cmake command correspond to the installed packages to **CMakeLists.txt**
```cmake
find_package(fmt CONFIG REQUIRED)
target_link_libraries(my_app PRIVATE fmt::fmt)
```

Install added packages to current project :
```bash
vcpkg install
```

Change the vcpkg toolchain file path to yours in **CMakeLists.txt**.

<img src="images\cmake.png">

Select compiler : 

<img src="images\cmake_kit.png">

Configure cmake files, select **Configure ALL Project** (you need to config cmake files first to build the cpp project):

<img src="images\cmake_config.png">

**Done!** you can start debug/build the c++ project using cmake and manage package using vcpkg.
