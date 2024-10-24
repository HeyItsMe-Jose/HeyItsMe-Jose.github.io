#include "ofMain.h"
#include "ofApp.h"
#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

//========================================================================
int main() {

	//Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	ofGLWindowSettings settings;
	settings.setSize(1024, 768);
	settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();

	{
		std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < 10; ++i) {
        // Generate a random delay between 500 ms and 1500 ms
        int delay = 500 + (std::rand() % 1000);
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));

        int randomValue = std::rand();
        std::cout << randomValue << std::endl;
    }

    return 0;
	}

}
    
