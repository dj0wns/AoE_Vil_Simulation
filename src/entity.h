// This parent class holds all basic attributes an "entity" object has
// Anything that appears on the map is an "entity"
#pragma once

#include <string>

#include "enums.h"

class Player;

class Entity {

  public:
    Entity(
        double x,
        double y,
        double hp,
        Enums::HitboxShape hitbox_shape,
        double width) :
      x(x),
      y(y),
      hp(hp),
      hitbox_shape(hitbox_shape),
      width(width) {}

    virtual std::string entity_type() = 0;

    // Execute this entities job for the given time period
    virtual void work(double time) = 0;

    // Center Position in world space
    double x;
    double y;

    // all entities have some sort of hitpoints
    double hp;
    // hitbox shape -- TODO, for now we will ignore all hitboxes
    Enums::HitboxShape hitbox_shape;
    // hitbox size (for square -- its same both dimensions, for circle its a radius)
    double width;
    // Inventory (for villagers this is held res, for trees this is remaining wood etc)
    Enums::Resources held_resource_type = Enums::Resources::NONE;
    double held_resource_amount = 0;

    // Owning player
    const Player& owning_player;

    std::string entity_name;

};
