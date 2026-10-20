#include "common.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0x9B4];
    /* 0x9B4 */ u8 state;
} PartyPanel;

extern PartyPanel *g_partyPanel;

extern void FUN_0020b718(s32 a, s32 b);
extern void FUN_0022e774(void);
extern void FUN_00230ac0(s32 a, s32 b, s32 c, s32 d);
extern void FUN_003344b4(s32 a, s32 b);
extern void FUN_0038b548(s32 a);

void FUN_002a5cf4(void)
{
    PartyPanel *panel = g_partyPanel;

    if (panel != NULL) {
        if (panel->state != 12 && panel->state != 4 && panel->state != 15 && panel->state != 17 && panel->state != 19) {
            FUN_00230ac0(7, -1, 0, 0);
        }
        FUN_003344b4(0, 0);
        if (panel->state != 1 && panel->state != 6 && panel->state != 7 && panel->state != 18) {
            FUN_0022e774();
        }
        FUN_0038b548(1);
        FUN_0020b718(0x17, 1);
    }
}

} /* extern "C" */
