#include "classes/Obj558c00.h"

/* Deletes the child, then destroys the base. */
Obj558c00::~Obj558c00()
{
    if (child != NULL) {
        delete child;
    }
}
