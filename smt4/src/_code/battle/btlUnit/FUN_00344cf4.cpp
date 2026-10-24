#include "shard/W5_W5Match4_BattleVectorTransition.h"

// The unit the marker follows (observed fields).
struct MarkerUnit {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ BattleVector3 offset;
    /* 0x3C */ u8 unk3c[0x26];
    /* 0x62 */ s16 id;
};

// A battle marker request (observed fields).
struct MarkerRequest {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 result;       // 1: done or in progress, 0: nothing to show
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ MarkerUnit *unit;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ s8 stage;         // 0: not started, 1: waiting for the marker
    /* 0x21 */ u8 unk21[5];
    /* 0x26 */ s16 handle;       // the marker started for the unit
    /* 0x28 */ s32 kind;         // 1..4
};

// The battle entry of a unit (observed fields).
struct MarkerEntry {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x6a];
    /* 0x6E */ s16 style;
};

extern "C" {
extern u32 g_btlUiBlock;
extern BattleVector3 DAT_00493560;

void *btlGetMainState(void);
MarkerEntry *btlMainFindEntryByListedId(void *state, s32 id);
BattleVector3 FUN_0023cd08(void *state, s32 id, s32 flag);
s32 FUN_00289fa8(u32 block, s32 kind, s32 flag, BattleVector3 position);
s32 FUN_0023c9e8(u32 block, s32 style, s32 kind, s32 x, s32 y);
s32 FUN_003ae638(u32 block, s32 handle);

static inline BattleVector3 vectorAdd(BattleVector3 left, BattleVector3 right)
{
    BattleVector3 sum = {left.x + right.x, left.y + right.y, left.z + right.z};
    return sum;
}

// One step of the marker request: when the unit's entry is shown the marker is started (as a world marker for a
// hidden unit, or a screen marker otherwise) and the step then waits for it to appear.
void FUN_00344cf4(void *unused, MarkerRequest *request)
{
    MarkerEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), request->unit->id);
    if (entry == NULL) {
        request->result = 0;
        return;
    }
    if (request->stage == 0) {
        u32 flags = entry->flags;
        if ((flags & 0x10) != 0) {
            BattleVector3 position = vectorAdd(FUN_0023cd08(btlGetMainState(), request->unit->id, 0),
                                               request->unit->offset);
            switch (request->kind) {
            case 1:
                request->handle = FUN_00289fa8(g_btlUiBlock, 1, 1, vectorAdd(position, DAT_00493560));
                break;
            case 2:
                request->handle = FUN_00289fa8(g_btlUiBlock, 0, 1, vectorAdd(position, DAT_00493560));
                break;
            case 3:
                request->handle = FUN_00289fa8(g_btlUiBlock, 3, 1, position);
                break;
            case 4:
                request->handle = FUN_00289fa8(g_btlUiBlock, 2, 1, position);
                break;
            default:
                request->result = 0;
                return;
            }
        } else {
            if ((flags & 0x2a) == 0) {
                request->result = 0;
                return;
            }
            s32 style = entry->style;
            if ((flags & 0x20) != 0) {
                style = 4;
            }
            s32 x = (s16)(s32)request->unit->offset.x;
            s32 y = (s16)(s32)request->unit->offset.y;
            switch (request->kind) {
            case 1:
                request->handle = FUN_0023c9e8(g_btlUiBlock, style, 1, x, y);
                break;
            case 2:
                request->handle = FUN_0023c9e8(g_btlUiBlock, style, 0, x, y);
                break;
            case 3:
                request->handle = FUN_0023c9e8(g_btlUiBlock, style, 3, x, y);
                break;
            case 4:
                request->handle = FUN_0023c9e8(g_btlUiBlock, style, 2, x, y);
                break;
            default:
                request->result = 0;
                return;
            }
        }
        request->stage = 1;
    } else if (request->stage == 1) {
        if (FUN_003ae638(g_btlUiBlock, request->handle) == 0) {
            request->result = 0;
            return;
        }
    }
    request->result = 1;
}
}
