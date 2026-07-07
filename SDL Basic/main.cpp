#include <SDL3/SDL.h>
#include <iostream>
#include "Screen.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Swarm.h"

using namespace std;
using namespace SDL_Screen;

/*========================================================*/
/* to run the code, in vscode press the "run & debug" button on the left under the "source control" */
/*========================================================*/

int main() {

    srand(time(NULL));

    Screen screen;

    if(!screen.init()) {
        cout << "Error initalizing SDL." << endl;
        return 1;
    }

    
    Swarm swarm;


    bool quit = false;
    

    while(true) {
        // update particles

        // draw particles

        int elapsed = SDL_GetTicks();

        swarm.update(elapsed);

        unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
        unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

        const Particle * const pParticles = swarm.getParticles();

        for(int i=0; i<Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);
        }

        screen.boxBlur();

        // draw the screen
        screen.update();

        // check for messages/events
        if(screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();

    return 0;
}