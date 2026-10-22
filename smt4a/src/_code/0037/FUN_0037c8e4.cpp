/* NON_MATCHING: Retail ldr r1, [pc, #144] differs from recovered ldr r1, [pc, #136]. */
#include "common.h"

struct MessageStateView {
    u8 unk00[0x7C];             // 0x000
    u32 unk7C;                  // 0x07C
    u8 unk80[0x08];             // 0x080
    u32 unk88;                  // 0x088
    u8 unk8C;                   // 0x08C
    u8 unk8D;                   // 0x08D
    u8 unk8E;                   // 0x08E
    u8 unk8F[0x02];             // 0x08F
    u8 unk91;                   // 0x091
    u8 unk92;                   // 0x092
    u8 unk93[0xDA];             // 0x093
    u8 unk16D;                  // 0x16D
    u8 unk16E[0x0F];            // 0x16E
    u8 unk17D;                  // 0x17D
    u8 unk17E[0x16];            // 0x17E
    u8 unk194[0x96C];           // 0x194
    u8 unkB00[1];               // 0xB00: start of embedded sprite object
};

struct MessageMainView {
    u8 unk00[0x08];             // 0x00
    MessageStateView* unk08;    // 0x08
};

extern "C" {
extern MessageMainView g_messageMain;
u32 gameDataBlocks2GetWord4(void);
u32* gameGetSlotTable(void);
void FUN_0014e188(void* sprite, s32 kind, u32 flags, void* data,
                  s32 count, f32 scale);
void pairSetFirstResetSecond(void* pair, s32 first);
void uiSpriteSelectAnim(void* sprite, s32 animation);
}

// Initialize the message state from the selected data source and prepare its sprite.
extern "C" u32 FUN_0037c8e4(u8 messageId, s32 useDataBlock)
{
    MessageStateView* state = g_messageMain.unk08;
    state->unk8E = 1;
    state->unk8D = 1;

    u32 value;
    if (useDataBlock != 0) {
        value = gameDataBlocks2GetWord4();
    } else {
        value = *gameGetSlotTable();
    }
    state->unk7C = value;
    state->unk88 = value;

    state->unk92 = 0;
    state->unk17D = 0;
    state->unk16D = 0;
    state->unk91 = messageId;
    FUN_0014e188(state->unkB00, 8, 0xFFFFFFFFu, state->unk194, 11, 1.0f);
    pairSetFirstResetSecond(state->unkB00, 0);
    uiSpriteSelectAnim(state->unkB00, 6);
    return 1;
}
