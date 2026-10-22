/* NON_MATCHING: Engine record reset is complete; inline primary/secondary reset loops use different register allocation and store scheduling. */
#include "common.h"

struct EngineResetRecord {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
    /* 0x18 */ f32 w;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u16 unk22;
    /* 0x24 */ u16 unk24;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2c;
    /* 0x2D */ u8 unk2d[3];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d[3];
    /* 0x40 */ s32 index;
    /* 0x44 */ u8 unk44[8];
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ u8 unk50;
    /* 0x51 */ u8 unk51[3];
    /* 0x54 */ s32 secondaryIndex;

    void reset(bool primary)
    {
        active = 0;
        unk04 = 0;
        unk08 = 0;
        x = y = z = w = 0.0f;
        unk1c = 0;
        unk20 = 0;
        if (primary) { unk22 = 0; }
        unk24 = 0;
        unk28 = 0;
        unk2c = 0;
        unk30 = 0;
        unk34 = 0;
        unk38 = 0;
        unk3c = 0;
        if (primary) { unk4c = 0; }
        index = -1;
        if (primary) {
            unk50 = 0;
            secondaryIndex = -1;
        }
    }
};
struct EngineResetPair {
    u32 first;
    u32 second;
};
struct EngineResetState {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u16 unk004;
    /* 0x006 */ u16 unk006;
    /* 0x008 */ u16 unk008;
    /* 0x00A */ u16 unk00a;
    /* 0x00C */ u32 unk00c;
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u32 unk018;
    /* 0x01C */ EngineResetPair pairs[17];
    /* 0x0A4 */ EngineResetRecord records[32];
    /* 0xBA4 */ EngineResetRecord secondary[3];
    /* 0xCAC */ u8 unkCac[0x34];
    /* 0xCE0 */ u32 unkCe0;
    /* 0xCE4 */ u32 unkCe4;
    /* 0xCE8 */ u32 unkCe8;
    /* 0xCEC */ u32 unkCec;
    /* 0xCF0 */ u32 unkCf0;
    /* 0xCF4 */ u32 unkCf4;
    /* 0xCF8 */ u32 unkCf8;
};
extern "C" EngineResetState *g_engineRecordList;

/* Reset the engine's 32 primary records, 17 pairs, and three secondary records. */
extern "C" void FUN_0024ad50()
{
    EngineResetState *state = g_engineRecordList;
    state->unk000 = 0;
    state->unk004 = 0;
    state->unk006 = 0;
    state->unk008 = 0;
    state->unk00a = 0;
    state->unk018 = 0;
    state->unkCe0 = 0;
    state->unk010 = 0;
    state->unkCe4 = 0;
    state->unkCe8 = 0;
    state->unkCec = 0;
    state->unkCf0 = 0;
    state->unkCf4 = 0;
    state->unkCf8 = 0;
    for (s32 i = 0; i < 32; ++i) {
        g_engineRecordList->records[i].reset(true);
    }
    for (s32 i = 0; i < 17; ++i) {
        state->pairs[i].first = 0;
        state->pairs[i].second = 0;
    }
    for (s32 i = 0; i < 3; ++i) {
        g_engineRecordList->secondary[i].reset(false);
    }
}
