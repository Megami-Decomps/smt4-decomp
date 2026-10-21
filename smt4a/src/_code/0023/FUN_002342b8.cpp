/* NON_MATCHING: retail uses mov r1, #2 where the compiled block uses ldr r1, [r0]. */
#include "common.h"

struct MapInterface {
    u8 unk00[0x3C]; // 0x00
    u32 state;      // 0x3C
};

extern "C" {
extern MapInterface* g_mapIf;

void FUN_002342b8(void)
{
    g_mapIf->state = 2;
}
}
