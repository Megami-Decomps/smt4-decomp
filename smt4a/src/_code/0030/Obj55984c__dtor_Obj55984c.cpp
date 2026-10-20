/* NON_MATCHING: retail enters the child loop with a branch to its bottom test (the loop is not
 * rotated) and re-reads the array bounds each pass */
#include "classes/Obj55984c.h"

/* Deletes every child and the extra object, then frees the array. */
Obj55984c::~Obj55984c()
{
    for (u32 i = 0; i < children.size(); i++) {
        if (children.begin[i].child != NULL) {
            delete children.begin[i].child;
        }
    }
    if (extra != NULL) {
        delete extra;
    }
}
