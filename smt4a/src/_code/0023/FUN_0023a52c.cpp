#include "map/mapDepart.h"

extern "C" {

void FUN_002c5df4(void);

extern GameStateA g_gameState;
extern struct {
    u8 unk000[0x394];
    s8 unk394;
} DAT_0060fc08;

void FUN_0023a52c(void)
{
    if (DAT_0060fc08.unk394 != 0 && g_gameState.unk27 != 0) {
        FUN_002c5df4();
    }
}

} /* extern "C" */
