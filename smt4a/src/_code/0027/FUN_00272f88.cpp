/* NON_MATCHING: retail uses mov r4, #0 where the compiled block uses mov r3, #0. */
#include "common.h"

struct ResetState {
    u8 reserved000[0x1b0];
    u8 active;                    // 0x1b0
    u8 reserved1b1[3];
    f32 value1b4;                 // 0x1b4
    f32 value1b8;                 // 0x1b8
    f32 value1bc;                 // 0x1bc
    f32 value1c0;                 // 0x1c0
    u8 reserved1c4[4];
    u16 flags;                    // 0x1c8
    u8 reserved1ca[2];
    u8 flag1cc;                   // 0x1cc
    u8 flag1cd;                   // 0x1cd
    u8 flag1ce;                   // 0x1ce
    u8 reserved1cf[5];
    u8 flag1d4;                   // 0x1d4
    u8 reserved1d5[3];
    u32 value1d8;                 // 0x1d8
    f32 value1dc;                 // 0x1dc
    f32 value1e0;                 // 0x1e0
    f32 value1e4;                 // 0x1e4
    f32 value1e8;                 // 0x1e8
};

struct ResetEntry {
    u8 active;                    // 0x000 (owner + 0x034)
    u8 reserved001[0x7c];
    u8 blocked;                   // 0x07d
    u8 reserved07e[6];
    s32 state;                    // 0x084
    u32 stateValue;               // 0x088
    u8 reserved08c[0xf0];
    s32 category;                 // 0x17c
    u8 reserved180[8];
};

struct EntryCollection {
    u8 reserved000[0x34];
    ResetEntry entries[40];        // 0x0034, stride 0x188
    u8 reserved3d74[8];
    u32 eligibleCount;            // 0x3d7c
};

extern "C" {
extern ResetState g_gameState;
extern EntryCollection* g_mapEnemy;

void FUN_00272f88(void)
{
    EntryCollection* collection = g_mapEnemy;
    const f32 resetValue = 0.0f;
    g_gameState.active = 0;
    g_gameState.value1b4 = resetValue;
    g_gameState.value1b8 = resetValue;
    g_gameState.value1bc = resetValue;
    g_gameState.value1c0 = resetValue;
    g_gameState.flags = 0;
    g_gameState.flag1cc = 0;
    g_gameState.flag1cd = 0;
    g_gameState.flag1ce = 0;
    g_gameState.flag1d4 = 0;
    g_gameState.value1d8 = 0;
    g_gameState.value1dc = resetValue;
    g_gameState.value1e0 = resetValue;
    g_gameState.value1e4 = resetValue;
    g_gameState.value1e8 = resetValue;

    for (s32 index = 0; index < 40; ++index) {
        ResetEntry& entry = collection->entries[index];
        if (entry.active != 0 && entry.category != 0 &&
            entry.category < 11 && entry.blocked == 0 &&
            entry.state == 16) {
            --collection->eligibleCount;
            entry.state = 11;
            entry.stateValue = 0;
        }
    }
}
}
