cmake_minimum_required(VERSION 3.27)
project(projectTSP_Garuxer_Setsuma)

set(CMAKE_CXX_STANDARD 17)

add_executable(projectTSP_Garuxer_Setsuma main.cpp
        src/InstanceTSP.h
        src/InstanceTSP.cpp
        src/Solution.cpp
        src/Solution.h
        src/EvalTSP.cpp
        src/EvalTSP.h
        src/Solver.h
        src/Random.cpp
        src/Random.h
)
