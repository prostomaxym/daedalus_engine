cd ../
cd ThirdParty/vcpkg
./bootstrap-vcpkg.sh
./vcpkg --triplet=x64-linux install glfw3
./vcpkg --triplet=x64-linux install gtest
./vcpkg --triplet=x64-linux --recurse install glad[gl-api-latest]