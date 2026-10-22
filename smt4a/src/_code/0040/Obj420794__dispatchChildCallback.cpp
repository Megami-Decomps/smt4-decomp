#include "classes/Obj420794.h"

/* Dispatch the child hook shared by the concrete screen filters. */
void Obj420794::dispatchChildCallback()
{
    child->callback();
}
