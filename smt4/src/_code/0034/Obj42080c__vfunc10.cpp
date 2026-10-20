#include "classes/Obj42080c.h"

/* Refreshes the child, puts the four vertices on the rectangle's corners and resets the texture
 * range to 0..1. */
void Obj42080c::vfunc10()
{
    child->refreshRects();
    vertices()[0].x = rect->left;
    vertices()[0].y = rect->top;
    vertices()[1].x = rect->left;
    vertices()[1].y = rect->bottom;
    vertices()[2].x = rect->right;
    vertices()[2].y = rect->top;
    vertices()[3].x = rect->right;
    vertices()[3].y = rect->bottom;
    uvStart = 0.0f;
    uvEnd = 1.0f;
}
