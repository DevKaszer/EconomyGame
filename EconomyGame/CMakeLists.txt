
add_executable (economyGame "EconomyGame.cpp" "EconomyGame.h" "src/Game.cpp" "src/Game.h" "src/Station.h" "src/Station.cpp")
target_link_libraries(economyGame PRIVATE raylib)


