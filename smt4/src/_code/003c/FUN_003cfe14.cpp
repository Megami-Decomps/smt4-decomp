/* NON_MATCHING: readable rewrite compiles (211 vs 213 rows); register allocation of the action context and flag constants differs */
#include "common.h"
#include "shard/FUN_00227d18.h"

struct ActionTarget {
    u8 unk00[0x50];
    u32 flags;                  // 0x50, bit 10: boosted
    u8 unk54[0x0e];
    s16 listedId;               // 0x62
};

struct ActionActor {
    u32 flags;                  // 0x00, bit 4: player side
    u8 unk04[0x68];
    s16 unk6c;
    s16 actionId;               // 0x6e
    u8 unk70[0x156];
    u16 status;                 // 0x1c6, bit 3: immune
};

struct ActionSlotRow {          // 10-byte rows from 0x9d4 of the action
    u16 minPower;               // +0
    u16 value;                  // +2
    u8 unk04[6];
};

struct ActionContext {
    u8 unk00[0x20];
    ActionActor* actor;         // 0x20
    ActionTarget* target;       // 0x24
    u8* source;                 // 0x28
};

struct BattleSide {
    u8 unk00[0x88];
    u32 phase;                  // 0x88
    u8 unk8c[0x2c];
    s32 mode;                   // 0xb8
};

extern "C" {

void btlShowListedActionMessage(s32* battle, ActionContext* ctx, s32 id, s32 value, s32 arg);
void FUN_00227fac(void);
void frameRangeExtend(s32* battle, ActionContext* ctx, s32 id, s32 a, s32 b, s32 c);
s32 FUN_00229914(s32* battle, ActionContext* ctx, s32 id);
void FUN_0023c0d0(s32* battle, ActionContext* ctx, s32 id, s32 amount);
void actionCreateKindSeventeen(s32 kind, ActionContext* ctx, s32 arg);
void FUN_002505c0(s32 a, ActionContext* ctx, s32 b, s32 c, s32 d, s32 e, s32 f);
void FUN_002551ac(s32 kind, ActionContext* ctx, ActionTarget* target, s32 a, s32 amount, s32 b, s32 c, s32 d, s32 e,
                  s32 f, s32 g, u8 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o, s32 p, s32 q, s32 r, s32 s, s32 t, s32 u);
void FUN_0027df30(s32 kind, ActionContext* ctx, ActionTarget* target, s32 a, u32 value, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, s32 h, s32 i);
s32 FUN_00293230(s32 battle);

// Applies a heal/damage change of `amount` to the target and queues its effects; returns
// whether the target was left needing a follow-up message.
u8 FUN_003cfe14(s32* battle, ActionContext* ctx, s32 amount)
{
    u32 value = 0xffffffff;
    *reinterpret_cast<u32*>(reinterpret_cast<u8*>(ctx->actor) + 200) = 0;
    s32 id = ctx->target->listedId;
    FUN_00227fac();
    s32 positive = id;
    if (0 < id) positive = amount;
    ActionSlotRow* row = reinterpret_cast<ActionSlotRow*>(reinterpret_cast<u8*>(ctx) + ctx->target->listedId * 10 + 0x9d4);
    if (positive >= 1 && amount >= (s32)row->minPower) {
        if (id != 2) {
            if (id == 1) value = 1;
        } else if ((ctx->actor->status & 8) == 0) {
            value = row->value;
        } else {
            value = 1;
        }
        actionCreateKindSeventeen(0x1e, ctx, ctx->actor->actionId);
        FUN_00227d18(ctx->target->listedId);
    }
    FUN_0023c0d0(battle, ctx, ctx->target->listedId, -amount);
    s32 followUp = FUN_00229914(battle, ctx, ctx->target->listedId);
    u8 result = followUp != 0;
    BattleSide* side = reinterpret_cast<BattleSide*>(*battle);
    if ((s32)value >= 1) {
        result = 0;
    } else if (result && (ctx->actor->flags & 0x10) != 0 && side->mode == 1) {
        side->phase = 0xd;
    }
    u32 a = 0xffffffff, b = 0xffffffff, c = 0xffffffff;
    if ((ctx->actor->flags & 0x10) == 0) {
        a = 0;
        b = 0xb;
    }
    if (FUN_00293230(*battle) == 0) c = 0;
    FUN_002551ac(10, ctx, ctx->target, 0, amount, -1, -1,
                 reinterpret_cast<ActionSlotRow*>(reinterpret_cast<u8*>(ctx) + ctx->target->listedId * 10 + 0x9d4)->minPower,
                 *reinterpret_cast<s16*>(ctx->source + 0xea), 0, 0, result, 0, 1, 0, 0x1e, 0, a, c, b, -1, 1, 0, 1, 1);
    FUN_002505c0(10, ctx, 0x1000185, 0, 0, 0, 0);
    if ((s32)value >= 0) {
        FUN_0027df30(0x1e, ctx, ctx->target, 0, value, -1, -1, 0, a, c, b, 0, 1);
        FUN_002505c0(0x1e, ctx, 0x10001c5, 0, 1, 0, 0);
    }
    if (result != 0) {
        if ((ctx->target->flags & 0x400) != 0) {
            frameRangeExtend(battle, ctx, ctx->target->listedId, 10, 0x3c, 0x3c);
            btlShowListedActionMessage(battle, ctx, ctx->target->listedId, 0x46, 0);
        } else {
            frameRangeExtend(battle, ctx, ctx->target->listedId, 10, 0x1e, 0x1e);
            btlShowListedActionMessage(battle, ctx, ctx->target->listedId, 0x28, 0);
        }
    } else {
        frameRangeExtend(battle, ctx, ctx->target->listedId, 10, 0x1e, 0x1e);
    }
    return result;
}

} /* extern "C" */
