#include "classes/ObjBase3c2ef0.h"

/* Hands the window's rectangle to the screen; true when the screen accepted it. */
bool ObjBase3c2ef0::vfunc0c()
{
    return region.submit();
}
