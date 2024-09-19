cmake_minimum_required(VERSION 3.10)

project(Pcap VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
)

add_executable(MyPcapProject ${SOURCES})

find_package(Pcap REQUIRED)

target_link_libraries(Pcap PRIVATE Pcap::Pcap)

