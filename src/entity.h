// This parent class holds all basic attributes an "entity" object has
// Anything that appears on the map is an "entity"

#include <string>

#include "enums.h"

class Entity {

  public:
    Entity(
        double x,
        double y,
        Enums::HitboxShape hitbox_shape,
        double width) :
      x(x),
      y(y),
      hitbox_shape(hitbox_shape),
      width(width) {}

    std::string entity_type() = 0;

    // Execute this entities job for the given time period
    void work(double time) = 0;

    // Center Position in world space
    double x;
    double y;
    // hitbox shape -- TODO, for now we will ignore all hitboxes
    Enums::HitboxShape hitbox_shape;
    // hitbox size (for square -- its same both dimensions, for circle its a radius)
    double width;
    // Inventory (for villagers this is held res, for trees this is remaining wood etc)
    Enums::Resources held_resource_type = Enums::Resources::NONE;
    double held_resource_amount = 0;

    // Owning player
    Enums::PlayerName player_name;

    std::string entity_name;

};
