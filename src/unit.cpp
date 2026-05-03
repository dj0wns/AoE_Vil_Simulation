#include "unit.h"

#include <cmath>

#include "constant.h"


void Unit::work(double time) override {
  // Handle reload
  reload_time_remaining -= time;
  attack_delay_remaining -= time;

  // Handle Movement -- we can't move if we are still in attack delay
  if ((x != destination_x || y != destination_y) && attack_delay_remaining <= 0) {
    auto move_speed = get_move_speed();
    auto angle = atan2(destination_y - y, destination_x - x);
    auto x_change = move_speed * cos(angle);
    auto y_change = move_speed * sin(angle);
    x += x_change;
    y += y_change;
    if (x + Constant::rounding_value > destination_x && x -
        Constant::rounding_value < destination_x) {
      x = destination_x;
    }
    if (y + Constant::rounding_value > destination_y && y -
        Constant::rounding_value < destination_y) {
      y = destination_y;
    }
  }
}
