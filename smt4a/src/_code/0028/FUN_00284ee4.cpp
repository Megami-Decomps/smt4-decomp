/* NON_MATCHING: the bool argument for FUN_00230ac0 is converted with cmp/movne/moveq; retail copies the flag byte with `adds r3, r0, #0` and sets 1 with movne */
#include "common.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ u8 flag34;
    /* 0x035 */ u8 flag35;
    /* 0x036 */ u8 unk036[0xc];
    /* 0x042 */ u8 flag42;
    /* 0x043 */ u8 unk043[0x971];
    /* 0x9b4 */ u8 state;
} PartyPanel;

extern PartyPanel *g_partyPanel;

void FUN_0020b718(s32 a, s32 b);
void FUN_00230ac0(s32 a, s32 b, s32 c, bool d);
void FUN_0023fc38(void);

/* Clears the party panel's two flags, optionally starts FUN_00230ac0, and runs FUN_0023fc38 unless the panel is in state 0 or 1. */
void FUN_00284ee4(s32 start)
{
    PartyPanel *panel = g_partyPanel;

    if (panel != NULL) {
        panel->flag34 = 0;
        panel->flag35 = 0;
        if (start != 0) {
            FUN_00230ac0(4, -1, 0, panel->flag42 != 0);
        }
        if (panel->state != 0 && panel->state != 1) {
            FUN_0023fc38();
        }
        FUN_0020b718(0, 1);
    }
}

} /* extern "C" */
