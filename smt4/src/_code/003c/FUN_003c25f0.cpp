/* NON_MATCHING: readable rewrite compiles (174 vs ~176 rows); register allocation (retail keeps the zero in sl) and branch layout of the suppress/roll tail differ */
#include "common.h"

// Entry of data table 0x24 (0x94 bytes): which category variant to roll.
struct VariantRequest {
    u8 kind;            // 0x00
    u8 group;           // 0x01
    u16 variant;        // 0x02
    u8 unk04[0x90];
};

// Per-variant runtime state: the active id, the rolled-group bits and a countdown.
struct VariantState {
    u16 id;             // 0x00
    u8 rolledGroups;    // 0x02
    u8 timerAndFlags;   // 0x03: bits 0-4 countdown, bits 5-7 flags
};

// Variant definition row: id, chance and duration.
struct VariantRow {
    u16 id;             // +0
    u16 chance;         // +2: < 1000 plain percent, otherwise group*1000 + percent
    u16 duration;       // +4
};

extern "C" {

VariantRequest* dataTable24Sub0GetEntries(void);
s32 dataTable24Sub0Get(void);
VariantState* FUN_002c0a2c(u8 group, u8 kind, s16 variant);
s32 FUN_002c0a84(VariantState* state);
u16* dataTableFindCategoryVariant(u8 group, u8 kind, s16 variant);
s32 gameFlagIsSet(u32 flag);
u32 randNextInRange(u32 range);

// Re-rolls every category variant: counts the timers down and picks a new id when one expires.
void FUN_003c25f0(void)
{
    VariantRequest* requests = dataTable24Sub0GetEntries();
    s32 count = dataTable24Sub0Get();
    for (s32 i = 0; i < count; i++) {
        u8 kind = requests[i].kind;
        u8 group = requests[i].group;
        s16 variant = requests[i].variant;
        if (group != 0) {
            if (variant == 6) variant = 0;
            else if (variant == 7) variant = 1;
        } else if (variant == 7) {
            variant = 6;
        }

        VariantState* state = FUN_002c0a2c(group, kind, variant);
        state->id = 0;
        state->rolledGroups = 0;
        state->timerAndFlags &= 0xc0;
        s32 index = FUN_002c0a84(state);
        state = FUN_002c0a2c(group, kind, variant);
        if (index == 0) state->rolledGroups = 0;

        u8 timer = state->timerAndFlags;
        if ((timer & 0x1f) >= 2) {
            state->timerAndFlags = (timer & 0xe0) | ((timer - 1) & 0x1f);
            continue;
        }
        state->timerAndFlags = timer & 0xe0;

        VariantRow* rows = reinterpret_cast<VariantRow*>(dataTableFindCategoryVariant(group, kind, variant) + 2);
        u16 rolled = state->id;
        u32 chance = rows[index].chance;
        if (chance == 0) {
            rolled = 0;
        } else if (chance < 1000) {
            if (randNextInRange(99) < rows[index].chance && rows[index].id != 0) rolled = rows[index].id;
        } else {
            u32 band = (chance * 0x4189 + 0x4189) >> 0x18;
            u32 mask = 1 << ((band - 1) & 0xff);
            if ((state->rolledGroups & mask) == 0) {
                u32 total = 0;
                for (s32 j = 0; j <= index; j++) {
                    u32 value = rows[j].chance;
                    if (band * 1000 < value && value < (band + 1) * 1000) total += value - band * 1000;
                }
                if (randNextInRange(99) < total) {
                    rolled = rows[index].id;
                    state->rolledGroups |= mask;
                }
            }
        }

        bool suppressed = gameFlagIsSet(0x668) != 0 && gameFlagIsSet(0x1d7) == 0 &&
                          ((group == 0 && kind == 8) || (group == 1 && kind == 9));
        if (suppressed) {
            state->id = 0;
            state->rolledGroups = 0;
            state->timerAndFlags &= 0xc0;
        } else if (state->id != 0) {
            if (rolled == 0) {
                state->id = rolled;
                state->timerAndFlags = (rows[index].duration & 0x1f) | (state->timerAndFlags & 0xe0);
            }
        } else if (rolled != 0) {
            state->id = rolled;
            state->timerAndFlags = (rows[index].duration & 0x1f) | (state->timerAndFlags & 0xe0);
        }
    }
}

} /* extern "C" */
