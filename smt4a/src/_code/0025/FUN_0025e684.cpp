#include "common.h"
#include "code/Code0025_Smt4a.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 a;
    /* 0x04 */ u16 b;
    /* 0x06 */ u16 c;
} Entry;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} Holder;

Entry *FUN_002613f0(s32 index);

/* Finds the entry (of 0x18) with the object's id: returns 0 when its three values are all 0 and 1 otherwise; 0 when there is no object or no match. */
u16 FUN_0025e684(Holder *object)
{
    Entry *entry;
    s32 i;

    if (object != NULL) {
        i = 0;
        do {
            entry = FUN_002613f0(i);
            if (entry->id == object->id) {
                entry = FUN_002613f0(i);
                if (((entry->a == 0) && (entry = FUN_002613f0(i), entry->b == 0)) &&
                    (entry = FUN_002613f0(i), entry->c == 0)) {
                    return 0;
                }
                return 1;
            }
            i = i + 1;
        } while (i < 0x18);
    }
    return 0;
}

} /* extern "C" */
