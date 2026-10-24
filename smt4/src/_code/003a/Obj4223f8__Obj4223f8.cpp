#include "classes/Obj4223f8.h"

extern "C" void FUN_003a8cc8(Obj4223f8 *screen);

/* Default view: installs the state handlers and clears the mode flag. */
Obj4223f8::Obj4223f8()
{
    FUN_003a8cc8(this);
    flag5A4 = 0;
}
