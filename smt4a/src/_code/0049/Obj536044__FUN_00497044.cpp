#include "classes/Obj536044.h"

/* Virtual slot: marks the scene active and enters command state 21, remembering the previous state. */
void Obj536044::FUN_00497044()
{
    flags |= 1;
    changeState(21);
}
