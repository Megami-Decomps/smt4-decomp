#include "classes/Obj559608.h"

/* Starts unlinked, then joins the online object list. */
Obj559608::Obj559608()
{
    onlineObjectListAdd(g_onlineRegistry.objects, this);
}
