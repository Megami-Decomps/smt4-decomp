/* NON_MATCHING: the pointer and constant-one registers are reversed; retail loads one into r1 before dereferencing g_name.work. */
#include "name/nameMain.h"

extern "C" NameGlobals g_name;

/* Mark the name-entry task complete. */
extern "C" void FUN_00316108(void)
{
    g_name.work->done = 1;
}
