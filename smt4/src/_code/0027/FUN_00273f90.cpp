#include "map/mapDepart.h"

extern "C" {

void FUN_00202254(void);

extern GameState g_gameState;
extern struct {
    u8 unk000[0x250];
    s8 unk250;
} DAT_004bce8c;

void FUN_00273f90(void)
{
    if (DAT_004bce8c.unk250 != 0 && g_gameState.unk26 != 0) {
        FUN_00202254();
    }
}

} /* extern "C" */
