/* NON_MATCHING: retail assigns the work pointer and constant to opposite registers before the done-byte store. */
#include "name/nameMain.h"

extern "C" NameGlobals g_name;

/* Let the name-entry task owner reclaim the finished work area. */
extern "C" void nameWorkMarkDone(void *)
{
    g_name.work->done = 1;
}
