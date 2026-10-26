#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "code/Code0014_Smt4a.h"

struct CriticalSection;

extern "C" {
extern CriticalSection g_moduleCriticalSection4;
extern s32 DAT_005b443c;


u8 FUN_00146650(void)
{
    ScopedCriticalLock lock(g_moduleCriticalSection4);
    u8 isSet = DAT_005b443c != 0;
    return isSet;
}
}
