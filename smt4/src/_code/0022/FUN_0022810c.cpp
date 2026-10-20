/* NON_MATCHING: retail tests flag 2 with `and`/`movs` (the masked value stays in r0); built uses a single `tst`. */
#include "common.h"

extern "C" {

/* Entry whose signed index sits at 400 (negative = invalid). */
typedef struct {
    u8 unk00[400];
    s16 index;          /* 0x190 */
} Entry;

typedef struct {
    u8 unk00[0x1cfc];
    Entry *entry;       /* 0x1cfc */
} Owner;

/* Game state with a flag word at 0x44ac. */
typedef struct {
    u8 unk00[0x44ac];
    u32 flags;          /* 0x44ac */
} GameState;

GameState *btlGetMainState(void);
int FUN_00293230(void);

/* Returns the owner's entry index, 0 when the state's flag 2 is set, or -1 when there is no usable entry. */
int FUN_0022810c(Owner *owner, int strict)
{
    if (owner->entry == NULL || owner->entry->index < 0) {
        return -1;
    }
    btlGetMainState();
    if (FUN_00293230() != 0) {
        u32 masked = btlGetMainState()->flags & 2;

        if (masked != 0) {
            return 0;
        }
    }
    if (strict != 0) {
        btlGetMainState();
        if (FUN_00293230() != 0) {
            return -1;
        }
    }
    return owner->entry->index;
}

} /* extern "C" */
