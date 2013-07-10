#include <string.h>

#define QUADTREE_BRANCH 1
#define QUADTREE_CELL 0

namespace map // Namespace for all things dealing with the map
{
	template <class T>
		class branch // quadtree map
		{
			public:
				branch( int src_x, int src_y ) // Constructor, specifying that this is an empty cell
				{
					m_content = NULL;
					m_northwest = NULL;
					m_northeast = NULL;
					m_southwest = NULL;
					m_southeast = NULL;
					m_x = src_x;
					m_y = src_y;
				}

				template <class V>
					void insert( V src_content ) // Insert something into this branch
					{
						// We have child branches, we need to recurse further
						if( m_southwest != NULL ) 
						{
							return;
						}
						
						// We have content, but no branches, we need to subdivide, then put the new content and old content in the child branches.
						if( m_content != NULL ) 
						{
							return;
						}

						// We have no child branches, nor content here, we can put the new content here 
						return;

					}

				void subdivide( void ) // Turn this cell into a branch with four children
				{
					m_northwest = new branch( m_x - m_x / 2, m_y - m_y / 2 ); 
					m_northeast = new branch( m_x + m_x / 2, m_y - m_y / 2 ); 
					m_southwest = new branch( m_x - m_x / 2, m_y + m_y / 2 ); 
					m_southeast = new branch( m_x + m_x / 2, m_y + m_y / 2 ); 
				}

				T m_content; // Element being stored
				branch m_northwest; // Children
				branch m_northeast; 
				branch m_southwest;
				branch m_southeast;
				int m_x, m_y; // Coordinates of the branch
		};
}


