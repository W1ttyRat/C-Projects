#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace SDL_Screen {

struct Particle {

    double m_x; // member variable for x position
    double m_y; // member variable for y position

private:
    double m_speed;
    double m_direction;

private:
    void init();

public:
    Particle();
    virtual ~Particle();
    void update(int interval);
};

}

#endif
