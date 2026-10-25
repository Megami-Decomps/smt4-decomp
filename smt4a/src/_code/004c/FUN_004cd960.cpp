/* NON_MATCHING: register allocation differs (retail keeps id/kind/variant in r7/r6/r4 across both lookups and reuses sl as zero; the build spills the id); logic equivalent. */
#include "common.h"
#include "util/FUN_0015fb68.h"
#include "shard/dataTable18Sub0GetCount.h"

/* A table entry of 0x94 bytes (accessed fields). */
struct TableEntry {
    u8 id;          // 0x00
    u8 kind;        // 0x01
    u16 variant;    // 0x02
    u8 unk04[0x90];
};

/* The per-entry roll state: the current result, the rolled-tier mask and a countdown. */
struct RollState {
    u16 current;
    u8 rolledMask;
    u8 countdown;   // low 5 bits countdown, high 3 bits kept
};

/* One chance row of the roll table: result, chance, countdown (3 halfwords). */
struct RollRow {
    u16 unk00;
    u16 result;     // +0x04 from the table base
    u16 chance;
};

extern "C" {
TableEntry *dataTable18Sub0GetEntries(void);
RollState *FUN_00145f04(u8 kind, u32 id, u16 variant);
s32 FUN_00148bb8(u32 id, u8 kind);
u16 *FUN_00148c30(u8 kind, u32 id, u16 variant);
s32 randRange(u32 maximum);

/* Roll every table entry's pending result: count down active results and draw new ones from the chance rows. */
void FUN_004cd960(void)
{
    TableEntry *entries = dataTable18Sub0GetEntries();
    s32 count = dataTable18Sub0GetCount();
    for (s32 n = 0; n < count; n++) {
        u32 id = entries[n].id;
        u8 kind = entries[n].kind;
        u16 variant = entries[n].variant;
        if (kind != 0) {
            if (variant == 6)
                variant = 0;
            else if (variant == 7)
                variant = 1;
        } else if (variant == 7) {
            variant = 6;
        }
        RollState *cleared = FUN_00145f04(kind, id, variant);
        cleared->current = 0;
        cleared->rolledMask = 0;
        cleared->countdown &= ~0x3F;
        s32 level = FUN_0015fb68();
        RollState *state = FUN_00145f04(kind, id, variant);
        u32 owned = FUN_00148bb8(id, kind);
        if (owned == 0) {
            state->current = 0;
            state->countdown &= ~0x1F;
        }
        if (level == 0)
            state->rolledMask = 0;
        if ((state->countdown & 0x1F) >= 2) {
            state->countdown = (state->countdown & 0xE0) | ((state->countdown - 1) & 0x1F);
            continue;
        }
        state->countdown &= ~0x1F;
        u16 *table = FUN_00148c30(kind, id, variant);
        u16 result = state->current;
        u16 *row = table + level * 3;
        u32 chance = row[3];
        if ((-owned & chance) == 0) {
            result = 0;
        } else if (chance < 1000) {
            if (static_cast<u32>(randRange(99)) < row[3] && row[2] != 0)
                result = row[2];
        } else {
            u32 tier = (chance * 0x4189 + 0x4189) >> 24;
            u32 bit = 1u << ((tier - 1) & 0xFF);
            if ((bit & state->rolledMask) == 0) {
                u32 total = 0;
                u16 *scan = table;
                for (s32 i = 0; i < level + 1; i++) {
                    scan += 3;
                    u32 value = *scan;
                    if (tier * 1000 < value && value < (tier + 1) * 1000)
                        total += value - tier * 1000;
                }
                if (static_cast<u32>(randRange(99)) < total) {
                    result = row[2];
                    state->rolledMask |= bit;
                }
            }
        }
        if (state->current != 0) {
            if (result == 0) {
                state->current = result;
                state->countdown = (row[4] & 0x1F) | (state->countdown & 0xE0);
            }
        } else if (result != 0) {
            state->current = result;
            state->countdown = (row[4] & 0x1F) | (state->countdown & 0xE0);
        }
    }
}
}
