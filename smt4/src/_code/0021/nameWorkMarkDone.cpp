#include "name/nameMain.h"

extern "C" NameGlobals g_name;

static __inline void nameWorkSetDone(NameWork *work, u8 done)
{
    work->done = done;
}

/* Let the name-entry task owner reclaim the finished work area. */
extern "C" void nameWorkMarkDone(void *)
{
    nameWorkSetDone(g_name.work, 1);
}
