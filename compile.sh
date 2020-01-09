clear
echo Compiling C++ project...
mkdir bin 2>/dev/null
g++ -c -o bin/HTCDesireUSBDriver.o src/HTCDesireUSBDriver.cpp
g++ -o bin/Console src/Console.cpp
echo Done compiling.
chmod 750 bin/Console
echo Running program...
echo =======================
bin/Console
echo =======================
echo Program ended.
