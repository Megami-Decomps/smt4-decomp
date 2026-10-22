#include "classes/Obj55b334.h"

Obj55b334::~Obj55b334()
{
    if (child != NULL) {
        delete child;
        child = NULL;
    }
}
