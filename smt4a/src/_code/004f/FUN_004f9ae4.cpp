#include "common.h"

extern "C" {

/* Entry whose signed index sits at 400 (negative = invalid). */
typedef struct {
    u8 unk00[400];
    s16 index;          /* 0x190 */
} Entry;

typedef struct {
    u8 unk00[0x1f54];
    Entry *entry;       /* 0x1f54 */
} Owner;

int btlGetMainState(void);
int btlScriptUnitHasFlags(void);

/* Returns the owner's entry index, 0 when btlScriptUnitHasFlags reports in the first check, or -1 when there is no usable entry. */
int FUN_004f9ae4(Owner *owner, int strict)
{
    if (owner->entry == NULL || owner->entry->index < 0) {
        return -1;
    }
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return 0;
    }
    if (strict != 0) {
        btlGetMainState();
        if (btlScriptUnitHasFlags() != 0) {
            return -1;
        }
    }
    return owner->entry->index;
}

} /* extern "C" */
