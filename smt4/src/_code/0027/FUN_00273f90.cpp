#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {

void FUN_00202254(void);

extern struct {
    u8 unk000[0x250];
    s8 unk250;
} g_asdMdlBankSet;

void FUN_00273f90(void)
{
    if (g_asdMdlBankSet.unk250 != 0 && g_gameState.returning != 0) {
        FUN_00202254();
    }
}

} /* extern "C" */
