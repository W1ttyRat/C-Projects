#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace SDL_Screen {

struct Particle {

    double m_x; // member variable for x position
    double m_y; // member variable for y position

    double m_xSpeed;
    double m_ySpeed;

public:
    Particle();
    virtual ~Particle();
    void update();
};

}

#endif
