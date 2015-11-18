

#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

#include <GL/glut.h>

#include "cgvTriangleMesh.h"

#define PI 3.14159

// Constructors 

cgvTriangleMesh::cgvTriangleMesh(long int _num_vertices, float *_vertices,
	long int _num_triangles, unsigned int *_triangles,
	bool _vertexArray) :vertexArray(_vertexArray), includeNormals(false), num_triangles(_num_triangles), vertices(_vertices), triangles(_triangles), num_vertices(_num_vertices) {

	// TODO: Sections B and C: Create the mesh representing the octahedron. 
	//							Use vertices and triangles arrays adequately. 
}

cgvTriangleMesh::cgvTriangleMesh(float r, int div_u, int div_v, bool _includeNormals) :
	vertexArray(true), includeNormals(_includeNormals) {
	// TODO: Sections D and E: Create the mesh representing a sphere. 
	//			Use vertices, normals and triangles arrays adequately. 

}

cgvTriangleMesh::~cgvTriangleMesh() {

	if (vertices != NULL)
		delete[] vertices;
	if (normals != NULL)
		delete[] normals;
	if (triangles != NULL)
		delete[] triangles;
}


// Public methods 

void cgvTriangleMesh::render(void) {

	/* TODO: Section B: Render triangle by triangle */
	glBegin(GL_TRIANGLES);

	for (int i = 0; i < num_vertices; i= i+3) {
		glVertex3f((vertices[i]),vertices[i+1],vertices[i+2]);
		

	}
	
	//glVertex3fv(&(vertices[triangles[12]]));
	//glVertex3fv(&(vertices[triangles[15]]));

	//glVertex3fv(&(vertices[triangles[18]]));
	//glVertex3fv(&(vertices[triangles[21]]));
	//glVertex3fv(&(vertices[triangles[23]]));



	glEnd();

	
	/* TODO: Sections B, C, D: Render with a vertex array and
			   in Section E add the array of normal vectors */

}

