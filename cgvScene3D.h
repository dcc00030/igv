#ifndef __CGVSCENE3D
#define __CGVSCENE3D

#include <GL/glut.h>

#include "cgvTriangleMesh.h"

#define nbScenes 5

class cgvScene3D {
	public: 
		int Scene[nbScenes]; 
		char *Scene_Name[nbScenes]; 

	protected:
		// TODO: Section A: Define the attributes for interaction
		double angleY; 

		float x = 0 , y= 0 , z= 0 ;
		bool axes;
		int sceneSelected; 

		cgvTriangleMesh *mesh; // mesh of triangles associated with the scene

	public:
		// Public attributes

		// Default constructor and destructor
		cgvScene3D();
		~cgvScene3D();

		void set(int scene); 

		// Methods
		// method with the OpenGL calls to render the scene
    void render();

		bool get_axes() {return axes;};
		void set_axes(bool _axes){axes = _axes;};

		// TODO: Section A: Implement the methods to rotate the scene w.r.t the axes. 
		void rotateY(double angle) {}// Fill this method and add the rest of them 
		float getX();
		float getY();
		float getZ();
		void setX();
		void setY();
		void setZ();
		void rotateAngleX(float angle);
		void rotateAngleY(float angle);
		void rotateAngleZ(float angle);
protected: 
	    void setOctahedronWithMeshes(bool vertexArray);
		void setSphere(bool withNormals); 

};

#endif
