/* NON_MATCHING: readable rewrite compiles (175 vs 168 rows); register allocation and frame size (12 vs 16 bytes) differ */
#include "common.h"

// Saved battle block: a header with a four-digit ASCII version and the payload.
struct BattleSaveBlock {
    u8 unk00[4];
    char version[4];        // 0x04: "1100"-style digits
    u16 payloadOffset;      // 0x08
    u8 kind;                // 0x0a: 1 = full battle snapshot
    u8 unk0b;
    s32 size;               // 0x0c
};

struct BattleLoadState {
    u32 phase;              // 0x00
    BattleSaveBlock* block; // 0x04
    u32 unk08;
    u32 unk0c;              // 0x0c
};

struct BattleSideEntry {
    u8 unk00[0x50];
    u32 flags;              // 0x50: bit 0 present, bit 1 active
    u32 flags2;             // 0x54: bit 3 pending refresh
    u16 status;             // 0x58: bit 11 = inactive pair
    u8 unk5a[8];
    s16 listedId;           // 0x62
};

struct BattleMain {
    u8 unk0000[0xe0];
    u32 rules;              // 0xe0
    u8 unk00e4[0x1e98 - 0xe4];
    u8* sides;              // 0x1e98 (BattleSideEntry, 0x114 each)
    u8 unk1e9c;
    u8 maxEntries;          // 0x1e9d
    u8 unk1e9e[6];
    u32 header[7];          // 0x1ea4
    u8 unk1ec0[0x1fbc - 0x1ec0];
    void* extraBuffer;      // 0x1fbc
    u8 unk1fc0[0x44a0 - 0x1fc0];
    u32 flags;              // 0x44a0
    u8 unk44a4[0x44b7 - 0x44a4];
    u8 skipRefresh;         // 0x44b7
};

struct SideRecord {
    u8 unk00[2];
    u16 id;                 // 0x02
};

extern "C" {

extern u32 g_btlMain;

void FUN_0023fbdc(BattleLoadState* state, BattleMain* battle);
s32 pairedEntryTableContains(BattleMain* battle, u16 id);
void FUN_002505c0(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void frameTexApplyMode(s32 mode);
SideRecord* FUN_0027da30(BattleMain* battle, s32 id);
s32 FUN_002896bc(void);
void FUN_002c29d8(s32 a, s32 b, s32 c);
s32 FUN_002c2a04(s32 a);
void FUN_00339e38(BattleMain* battle);
void FUN_0033a01c(BattleMain* battle);
void vec3CopyFromOffsetC(u32 object);
void __aeabi_memcpy4(void* dst, const void* src, u32 size);

// Restores a saved battle snapshot, refreshes the side list and moves the load state on.
void FUN_0023fffc(BattleLoadState* state, BattleMain* battle)
{
    BattleSaveBlock* block = state->block;
    if (block == NULL) return;

    if ((battle->flags & 0x200) == 0 && block->kind == 1) {
        char d0 = block->version[0], d1 = block->version[1], d2 = block->version[2], d3 = block->version[3];
        s32 size = block->size;
        u8* payload = reinterpret_cast<u8*>(block) + block->payloadOffset;
        for (s32 i = 0; i < 7; i++) battle->header[i] = 0;
        if (d3 + (d0 * 1000 + d1 * 100 + d2 * 10 - 0xd050) == 0x44c) {
            __aeabi_memcpy4(battle->header, payload, 0x118);
            payload += 0x118;
        }
        u32 count = (size - 0x118U) / 0x18;
        if (battle->maxEntries < count) count = battle->maxEntries;
        __aeabi_memcpy4(battle->extraBuffer, payload, count * 0x18);
    }
    FUN_0033a01c(battle);
    FUN_00339e38(battle);
    vec3CopyFromOffsetC(g_btlMain);
    if (battle->skipRefresh == 0 && ((battle->rules & 0x2000000) != 0 || (battle->flags & 2) != 0)) {
        for (s32 i = 4; i < 0x36; i++) {
            BattleSideEntry* side = reinterpret_cast<BattleSideEntry*>(battle->sides + i * 0x114);
            if ((side->flags & 1) != 0 && (side->flags & 2) != 0 && (side->flags2 & 8) != 0) {
                side->flags2 &= 0xfffffff7;
                if ((side->status & 0x800) == 0) {
                    SideRecord* record = FUN_0027da30(battle, side->listedId);
                    if (pairedEntryTableContains(battle, record->id) == 0) side->status |= 0x800;
                }
            }
        }
        FUN_002505c0(0, 0, 0x100017b, 0, 0, 0, 0);
    }
    state->phase = 0xd;
    if ((battle->flags & 0x40000000) == 0) {
        frameTexApplyMode(2);
        battle->flags |= 0x40000000;
    }
    if (FUN_002c2a04(0) == 3) FUN_002c29d8(0, 10, 0xff);
    if (FUN_002c2a04(1) == 3) FUN_002c29d8(1, 10, 0xff);
    if (FUN_002896bc() != 0) {
        state->phase = 0xe;
        state->unk0c = 0;
        FUN_0023fbdc(state, battle);
    }
}

} /* extern "C" */
