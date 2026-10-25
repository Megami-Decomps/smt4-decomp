/* NON_MATCHING: Retail mov r5, r0 differs from recovered ldr r1, [pc, #132]. */
#include "common.h"

struct PartyPanelControlView {
    u8 unk00[0x34];                 // 0x00
    s32 unk34;                      // 0x34
};

struct PartyPanelView {
    u8 unk0000[0xA10];              // 0x0000
    PartyPanelControlView* unk0A10;  // 0x0A10
    u8 unk0A14[0x210];              // 0x0A14
    u32 unk0C24[25];                // 0x0C24
    u8 unk0C88[0xC8];               // 0x0C88
    u32 unk0D50[25];                // 0x0D50
    u32 unk0DB4[25];                // 0x0DB4
    u8 unk0E18[0x400];              // 0x0E18
    s32 unk1218;                    // 0x1218
};

extern "C" {
extern PartyPanelView* g_partyPanel;
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
void FUN_0031d890(void);
void FUN_0023f900(void);

// Update the panel mode, copying its saved data when enabled or resetting it when disabled.
void FUN_0035d0e4(s32 mode)
{
    PartyPanelView* panel = g_partyPanel;
    if (panel == 0 || panel->unk1218 == mode) {
        return;
    }

    panel->unk1218 = mode;
    panel->unk0A10->unk34 = mode == 0 ? -1 : -2;

    if (mode != 0) {
        __aeabi_memcpy4(panel->unk0D50, panel->unk0C24, 100);
        __aeabi_memcpy4(panel->unk0DB4, panel->unk0C24, 100);
    } else {
        FUN_0031d890();
    }
    FUN_0023f900();
}
}
