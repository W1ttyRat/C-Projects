#include "Particle.h"
#include <stdlib.h>

namespace SDL_Screen {

Particle::Particle() {
    m_x = ((2.0 * rand())/RAND_MAX) - 1;
    m_y = ((2.0 * rand())/RAND_MAX) - 1;
    
    m_xSpeed = 0.001 * (((2.0 * rand())/RAND_MAX) - 1);
    m_ySpeed = 0.001 * (((2.0 * rand())/RAND_MAX) - 1);
}

Particle::~Particle() {

}

void Particle::update() {
    m_x += m_xSpeed;
    m_y += m_ySpeed;
}

}