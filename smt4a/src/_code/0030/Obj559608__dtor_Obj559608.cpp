#include "classes/Obj559608.h"

/* Leaves the online object list. */
Obj559608::~Obj559608()
{
    onlineObjectListUnlink(g_onlineRegistry.objects, this);
}
