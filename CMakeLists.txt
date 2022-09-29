cmake_minimum_required(VERSION 3.16)
project(StrazPozarnaRS)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(StrazPozarnaRS main.cpp Fire.cpp Fire.h LocalHazard.cpp LocalHazard.h Subject.cpp Subject.h Observer.cpp Observer.h FireDepartment.cpp FireDepartment.h IStrategy.h FireBrigadeUnit.cpp FireBrigadeUnit.h CarState.h CarFree.cpp CarFree.h CarBusy.cpp CarBusy.h Car.cpp Car.h CarState.cpp EventInfo.h IStrategy.cpp Iterator.cpp Iterator.h EventIterator.cpp EventIterator.h Utils.cpp Utils.h)
