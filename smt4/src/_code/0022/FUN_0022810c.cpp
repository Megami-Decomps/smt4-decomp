#include "battle/BtlMainAccess.h"

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

s32 FUN_00293230(void);

/* Returns the owner's entry index, 0 when the battle editor's option bit 33 is set, or -1 when
 * there is no usable entry. */
s32 FUN_0022810c(Owner *owner, s32 strict)
{
    if (owner->entry == NULL || owner->entry->index < 0) {
        return -1;
    }
    btlGetMainState();
    if (FUN_00293230() != 0) {
        if (btlGetMainState()->editorMask & (2ULL << 32)) {
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
