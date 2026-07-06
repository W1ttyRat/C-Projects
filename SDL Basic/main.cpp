#include <SDL3/SDL.h>
#include <iostream>
#include "Screen.h"

using namespace std;
using namespace SDL_Screen;

/*========================================================*/
/* to run the code, in vscode press the "run & debug" button on the left under the "source control" */
/*========================================================*/

int main() {

    Screen screen;

    if(!screen.init()) {
        cout << "Error initalizing SDL." << endl;
        return 1;
    }



    

    bool quit = false;
    
    

    while(true) {
        // update particles

        // draw particles
        for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, 128, 0, 255);
            }
        }

        screen.setPixel(400, 300, 255, 255, 255);

        // draw the screen
        screen.update();

        if(screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();

    return 0;
}