#ifndef __CGVINTERFACE
#define __CGVINTERFACE

#include <GL/glut.h>
#include <string>

#include "cgvScene3D.h"
#include "cgvCamera.h"

using namespace std;

class cgvInterface {
	protected:
		// Attributes
		int width_window; // initial width of the display window
		int height_window;  // initial height of the display window

		cgvScene3D scene; // scene to be rendered in the display window defined by cgvInterface. 
		cgvCamera camera; // Camera to visualize the scene
		cameraType camType; // Camera type 	CGV_PARALLEL or CGV_PERSPECTIVE

	public:
		// Default constructor and destructor
		cgvInterface();
		~cgvInterface();

		// Static methods
		// event callbacks
		static void set_glutKeyboardFunc(unsigned char key, int x, int y); // method to control keyboard events
		static void set_glutReshapeFunc(int w, int h); // method to define the camera and the viewport
		                                               // it is automatically called when the window is resized
		static void set_glutDisplayFunc(); // method to render the scene

		static void menuHandle(int value); // method to handle the menu

		// Methods
		// initialize all the parameters to create a display window
		void configure_environment(int argc, char** argv, // main parameters
			                       int _width_window, int _height_window, // width and height of the display window
			                       int _pos_X, int _pos_Y, // init position of the display window
													 string _title // title of the display window
													 ); 
		void create_menu(); // Create a menu that is handle with the right button of the mouse. 

		void init_callbacks(); // init all the callbacks

		void init_rendering_loop(); // render the scene and wait for an event in the interface

		// methods get_ and set_ to access the attributes
		int get_width_window(){return width_window;};
		int get_height_window(){return height_window;};

		void set_width_window(int _width_window){width_window = _width_window;};
		void set_height_window(int _height_window){height_window = _height_window;};
};

#endif
