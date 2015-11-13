#ifndef __CGVTRIANGLEMESH
#define __CGVTRIANGLEMESH

#include <GL/glut.h>

class cgvTriangleMesh {
	protected:
		// Attributes

		long int num_vertices; // number of vertices of the mesh of triangles
		float *vertices; // array with (num_vertices * 3) coordinates of the vertices
		float *normals; // array with (num_vertices * 3) coordinates of the normal vector to each vertex 

		long int num_triangles; // number of triangles in the mesh
		unsigned int *triangles; // array with (num_triangles * 3) indexes and vertices of each triangle array 

		bool vertexArray; // Use or not of vertex arrays. 
		bool includeNormals; // Include or not normals to improve realism. 

	public:
		// Constructor and destructor
		// Section B: constructor of the mesh of triangles
		cgvTriangleMesh(long int _num_vertices, float *_vertices, 
						long int _num_triangles, unsigned int *_triangles,
						bool _vertexArray);
    
		// Section D: generate a sphere centered in the origin with radius r and with div_u partitions in u and div_v partitions in v
		cgvTriangleMesh(float r, int div_u, int div_v, bool _includeNormals); 
		                                                   

		~cgvTriangleMesh();

		// Methods
		// method with the OpenGL calls to render the mesh of triangles
    void render();


};

#endif
