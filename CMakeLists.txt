cmake_minimum_required(VERSION 3.16)
project(dadjoke VERSION 1.0.0 LANGUAGES CXX)

add_executable(dadjoke src/main.cpp)

install(TARGETS dadjoke DESTINATION bin)

set(CPACK_PACKAGE_NAME "dadjoke")
set(CPACK_PACKAGE_VERSION "1.1.0")
set(CPACK_PACKAGE_CONTACT "seixasben@gmail.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Prints a random dad joke")

set(CPACK_DEBIAN_PACKAGE_DEPENDS "curl")
set(CPACK_RPM_PACKAGE_REQUIRES "curl")

set(CPACK_GENERATOR "DEB;RPM")

include(CPack)
