#include "name/nameMain.h"

extern "C" NameGlobals g_name;

static __inline void nameWorkSetDone(NameWork *work, u8 done)
{
    work->done = done;
}

/* Mark the name-entry task complete. */
extern "C" void FUN_00316108(void)
{
    nameWorkSetDone(g_name.work, 1);
}
