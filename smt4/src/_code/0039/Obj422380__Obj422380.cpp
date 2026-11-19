/* NON_MATCHING: retail saves r4/r5 around the stores ({r4, r5} pushed and popped, never used) and sets the zero after the sentinel's first link stores; otherwise identical. */
#include "classes/Obj422380.h"

/* An empty tree: the root and both ends point at the sentinel node, which links to itself. */
Obj422380::Obj422380()
    : root(&nil), leftmost(root), rightmost(root), count(0)
{
}
