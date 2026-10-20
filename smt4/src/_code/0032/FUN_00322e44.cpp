#include "common.h"
extern "C" {
typedef struct StatusDown { u8 unk[0x4D4]; u8 list[4]; } StatusDown;
extern StatusDown *g_statusDown;
extern s32 FUN_0029efa8(u8 *list);
s32 FUN_00322e44(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return FUN_0029efa8(g_statusDown->list);
}
}
