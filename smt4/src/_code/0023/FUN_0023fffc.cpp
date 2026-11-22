/* NON_MATCHING: version accumulation, header reset (six floats and a count through one pointer) and clamp now follow retail; registers still differ: retail keeps the snapshot block in r0 and uses fp as a ninth saved register (12-byte frame against 16), which moves the digit arithmetic and the side-loop address registers. */
#include "code/Code0013.h"
#include "common.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "code/Code002c_Smt4.h"
#include "battle/BtlGlobals.h"

// Saved battle block: a header with a four-digit ASCII version and the payload.
struct BattleSaveBlock {
    u8 unk00[4];
    s8 version[4];          // 0x04: "1100"-style digits
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
    s16 status;             // 0x58: bit 11 = inactive pair
    u8 unk5a[8];
    s16 listedId;           // 0x62
};

// The snapshot's header block, copied whole from the save (0x118 bytes).
struct BattleSnapshotHeader {
    f32 values[6];          // 0x00
    u32 count;              // 0x18
    u8 unk1c[0x118 - 0x1c];
};

struct BattleMain {
    u8 unk0000[0xe0];
    u32 rules;              // 0xe0
    u8 unk00e4[0x1e98 - 0xe4];
    u8* sides;              // 0x1e98 (BattleSideEntry, 0x114 each)
    u8 unk1e9c;
    u8 maxEntries;          // 0x1e9d
    u8 unk1e9e[6];
    BattleSnapshotHeader header; // 0x1ea4
    void* extraBuffer;      // 0x1fbc
    u8 unk1fc0[0x44a0 - 0x1fc0];
    u32 flags;              // 0x44a0
    u8 unk44a4[0x44b7 - 0x44a4];
    u8 skipRefresh;         // 0x44b7
};

extern "C" {

void battleEncounterStepShowAmbushMarkers(BattleLoadState* state, BattleMain* battle);
s32 pairedEntryTableContains(BattleMain* battle, u16 id);
void btlQueueKeyedScalarReflectAction(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void frameTexApplyMode(s32 mode);
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
        s32 version = 0;
        version += (block->version[0] - '0') * 1000;
        version += (block->version[1] - '0') * 100;
        version += (block->version[2] - '0') * 10;
        version += block->version[3] - '0';
        s32 size = block->size;
        u8* payload = reinterpret_cast<u8*>(block) + block->payloadOffset;
        BattleSnapshotHeader* header = &battle->header;
        header->values[0] = 0.0f;
        header->values[1] = 0.0f;
        header->values[2] = 0.0f;
        header->values[3] = 0.0f;
        header->values[4] = 0.0f;
        header->values[5] = 0.0f;
        header->count = 0;
        if (version == 1100) {
            __aeabi_memcpy4(header, payload, 0x118);
            payload += 0x118;
        }
        s32 count = (size - 0x118U) / 0x18;
        if (battle->maxEntries < count) count = battle->maxEntries;
        __aeabi_memcpy4(battle->extraBuffer, payload, count * 0x18);
    }
    FUN_0033a01c(battle);
    FUN_00339e38(battle);
    vec3CopyFromOffsetC(reinterpret_cast<u32>(g_btlMain));
    if (battle->skipRefresh == 0 && ((battle->rules & 0x2000000) != 0 || (battle->flags & 2) != 0)) {
        for (s32 i = 4; i < 0x36; i++) {
            BattleSideEntry* side = reinterpret_cast<BattleSideEntry*>(battle->sides + i * 0x114);
            if ((side->flags & 1) != 0 && (side->flags & 2) != 0 && (side->flags2 & 8) != 0) {
                side->flags2 &= 0xfffffff7;
                if ((side->status & 0x800) == 0) {
                    BtlUnitData* record = btlFindEntryBlockByMemberId(reinterpret_cast<BtlMainState*>(battle), side->listedId);
                    if (pairedEntryTableContains(battle, record->id) == 0) side->status |= 0x800;
                }
            }
        }
        btlQueueKeyedScalarReflectAction(0, 0, 0x100017b, 0, 0, 0, 0);
    }
    state->phase = 0xd;
    if ((battle->flags & 0x40000000) == 0) {
        frameTexApplyMode(2);
        battle->flags |= 0x40000000;
    }
    if (pairedAvailabilityGetState(0) == 3) screenFadeStartIn(0, 10, 0xff);
    if (pairedAvailabilityGetState(1) == 3) screenFadeStartIn(1, 10, 0xff);
    if (screenFadesAllReady() != 0) {
        state->phase = 0xe;
        state->unk0c = 0;
        battleEncounterStepShowAmbushMarkers(state, battle);
    }
}

} /* extern "C" */
