cmake_minimum_required(VERSION 3.17)
project(Lab_8)

set(CMAKE_CXX_STANDARD 14)

set(Menu Menu/menu.h Menu/menu_item.h Menu/menu.cpp Menu/menu_item.cpp )
set( Zadania Zadania/Zadanie81.cpp Zadania/Zadanie81.h Zadania/Zadanie82.cpp Zadania/Zadanie82.h Zadania/Zadanie83.cpp Zadania/Zadanie83.h Zadania/Zadanie84.cpp Zadania/Zadanie84.h Zadania/Zadanie85.cpp Zadania/Zadanie85.h Zadania/Zadanie86.cpp Zadania/Zadanie86.h Zadania/Zadanie87.cpp Zadania/Zadanie87.h Zadania/Zadanie88.cpp Zadania/Zadanie88.h Zadania/Randomizer.cpp Zadania/Randomizer.h)

add_executable(Lab_8 main.cpp ${Menu} ${Zadania})
target_include_directories(Lab_8 PRIVATE Menu)