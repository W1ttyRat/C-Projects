#include "Particle.h"
#include <stdlib.h>
#include <math.h>

namespace SDL_Screen {

Particle::Particle(): m_x(0.0), m_y(0.0) {
    init();
}

void Particle::init() {
    m_x = 0;
    m_y = 0;

    m_direction = (2 * M_PI * rand())/RAND_MAX;
    m_speed = (0.04 * rand())/RAND_MAX;

    m_speed *= m_speed;
}

Particle::~Particle() {

}

void Particle::update(int interval) {
    
    m_direction += interval * 0.0003;

    double xSpeed = m_speed * cos(m_direction);
    double ySpeed = m_speed * sin(m_direction);

    m_x += xSpeed * interval;
    m_y += ySpeed * interval;

    // OPTIONAL, comment out the if statements to make the program a bit different
    if(m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
        init();
    }
    // *OPTIONAL
    if(rand() < RAND_MAX / 100) {
        init();
    }
}

}