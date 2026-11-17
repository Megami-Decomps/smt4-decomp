#include "common.h"
#include "game/GameStateA.h"

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
extern EntryCollection* g_mapEnemy;

/* Clears the shared game state counters and resets every eligible map enemy entry. */
void FUN_00272f88(void)
{
    s32 index;
    EntryCollection* collection = g_mapEnemy;
    const f32 resetValue = 0.0f;
    g_gameState.unk1B0 = 0;
    g_gameState.unk1B4 = resetValue;
    g_gameState.unk1B8 = resetValue;
    g_gameState.unk1BC = resetValue;
    g_gameState.unk1C0 = resetValue;
    g_gameState.unk1C8 = 0;
    g_gameState.unk1CC = 0;
    g_gameState.unk1CD = 0;
    g_gameState.unk1CE = 0;
    g_gameState.unk1D4 = 0;
    g_gameState.unk1D8 = 0;
    g_gameState.unk1DC = resetValue;
    g_gameState.unk1E0 = resetValue;
    g_gameState.unk1E4 = resetValue;
    g_gameState.unk1E8 = resetValue;

    for (index = 0; index < 40; ++index) {
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
