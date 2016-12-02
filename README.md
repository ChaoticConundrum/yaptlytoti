# yaptlytoti
YAPTLYTOTI (Yet Another Program That Lets You Talk Over The Internet) or YAP for short.

Pronounced yap-tlee-toh-tee.

## Compilation

### Client Dependencies (All Platforms)
* CMake
* Qt5.5 Widgets, Multimedia
* libopus

### Client Dependencies (Linux)
* Install `mesa-common-dev` (if you do not have graphics drivers installed)

#### Client Compilation

    git clone https://github.com/ChaoticCrux/yaptlytoti.git yap
    mkdir yap-build
    cd yap-build
    cmake ../yap
    make

### Server Dependencies (All Platforms)
* CMake
* libopus

#### Server Compilation

    git clone https://github.com/ChaoticCrux/yaptlytoti.git yap
    mkdir yap-build
    cd yap-build
    cmake -DYAP_CLIENT=0 -DYAP_SERVER=1 ../yap
    make

#### Developing with Qt Creator
1. Open Qt Creator
2. File -> Open Project
3. Open CMakeLists.txt
4. Configure Project (assuming Desktop kit, or some similar kit)
5. Run CMake (with no Arguments) -> Finish
6. The project should be set up and ready to build and run

#### Separate qt5.5 Location
If qt5.5 was installed manually (the path may be different), add this line as a cmake argument:

    -DCMAKE_PREFIX_PATH=/opt/Qt/5.5/gcc_64

## Alternate Names:
YAV / YAVoIP (Yet Another VoIP)
YAVC (Yet Another VoIP Client)

