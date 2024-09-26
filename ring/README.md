Steps to build/run:

cd ring
mkdir build
cd build
cmake ../ (alternatively you can use your generator of choice, personally I use Ninja, but that's up to you)
cmake --build .
cd test
ctest CommonCxxTests
