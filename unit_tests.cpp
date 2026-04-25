#include <catch2/catch.hpp>
#include "entities/Player.h"

TEST_CASE("Player movement test", "[player]") {
    Player player;
    
    SECTION("Player position update") {
        player.update(1.0f);
        REQUIRE(player.getPosition().x == 10.0f);
    }
}
