#include "map/mapDepart.h"

extern "C" {

void asdSequenceRequest(s32 a, s32 b, s32 c);
void FUN_00312d6c(void);
void FUN_00321744(void);
void FUN_003d2d6c(s32 arg);
void FUN_003fd63c(s32 a, s32 b, s32 c);
s32 FUN_0018719c(u32 id);

extern GameStateA g_gameState;
extern s32 DAT_005f1c98;

s32 FUN_00331060(void)
{
    if (FUN_0018719c(0x593) != 0) {
        FUN_00321744();
        FUN_003fd63c(0x593, 0, 1);
    }
    if (FUN_0018719c(0x11F9) != 0) {
        FUN_003d2d6c(0xF);
        FUN_00312d6c();
        FUN_003fd63c(0x11F9, 0, 1);
    }
    if (g_gameState.unk574 != 0 || DAT_005f1c98 != -1) {
        asdSequenceRequest(6, 0, 0);
    }
    return 1;
}

} /* extern "C" */
