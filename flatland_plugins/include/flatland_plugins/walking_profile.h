/*
 *
 * @author Ronja Gueldenring
 * 
 */


#ifndef WALKING_PROFILE_H
#define WALKING_PROFILE_H



namespace flatland_plugins {

/**
 * @class WalkingProfile
 * @brief Abstract class for human walking profile.
 * 
 */
class WalkingProfile {
 public:
    virtual double get_speed_multiplier(double body_speed) = 0;
    virtual bool is_leg_in_center() = 0;
};
};

#endif /* WALKING_PROFILE_H */
