#ifndef UTILS_H
#define UTILS_H

#include <Arduino.h>

namespace Utils {
float map_float(float x, float in_min, float in_max, float out_min, float out_max);
float constrain_float(float x, float min, float max);
float calc_dead_band(float x, float max_output, float dead_band);
float milli_to_single(float x);
float rad_to_deg(float x);
float calc_hypotenuse_angle(float a, float b);
float calc_shock_travel(float alpha, float a, float b);
float calc_alpha(float a, float b, float c);
}  // namespace Calcs
#endif  // UTILS_H