// Intermediate class for units
// Specific things units can do is move
#pragma once

#include<string>

#include "entity.h"
#include "enums.h"


class Unit : public Entity {
  public:
    Unit(
        double x,
        double y,
        double hp,
        Enums::HitboxShape hitbox_shape,
        double width,
        double base_damage,
        double base_move_speed,
        double base_reload_time,
        double base_attack_delay,
        const player& owning_player) :
      Entity(x, y, hp, hitbox_shape, width),
      owning_player(owning_player),
      base_move_speed(base_move_speed),
      base_reload_time(base_reload_time),
      base_attack_delay(base_attack_delay),
      base_damage(base_damage) {}

    virtual std::string entity_type() override {
      return "Unit";
    }

    bool can_attack() {
      return reload_time_remaining <= 0.0 && attack_delay_remaining <= 0.0;
    }

    bool attack(Entity& target) {
      // TODO attack
    }

    void set_destination(double x, double y) {
      destination_x = x;
      destination_y = y;
    }

    // Designed to be inherited so that other units can specify their modifiers;
    virtual void get_move_speed() {
      return base_move_speed;
    }

    virtual void get_reload_time() {
      return base_reload_time;
    }

    virtual void attack_delay() {
      return base_attack_delay;
    }

    virtual void get_damage() {
      return base_damage;
    }

    // At this level units handle combat and movement
    virtual void work(double time);

  protected:
    double base_move_speed;
    double base_reload_time;
    double base_attack_delay;
    // TODO: Additional damage classes can come later
    double base_damage;
    // destination is negative if no current destination
    double destination_x = -1;
    double destination_y = -1;
    double reload_time_remaining = 0.0;
    double attack_delay_remaining = 0.0;

}
