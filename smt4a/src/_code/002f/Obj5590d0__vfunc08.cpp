#include "classes/Obj5590d0.h"
#include "sys/FlagBlock.h"

/* Returns 1 if the global flag byte 0x03 is clear and the object's mode is not 0x40000000, else 0. */
s32 Obj5590d0::vfunc08()
{
    if (g_flagBlock.flag03 == 0 && mode != 0x40000000) {
        return 1;
    }
    return 0;
}
