/* Script command body: marks the battle UI as in a command state (byte 0x15 at +0x19c5 of the global's second word), then calls FUN_0021bdac with the script argument and scrGetCommandFrame's result. `unit` is what the stub in front passes in r0. */
#include "common.h"

extern "C" {

struct Global0057f588 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *state;
};

extern Global0057f588 g_messageMain;

u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

void FUN_00330644(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    if (g_messageMain.state != NULL) {
        g_messageMain.state[0x19c5] = 0x15;
    }
    FUN_0021bdac(unit, arg, value, 11, 0, 0);
}

}
