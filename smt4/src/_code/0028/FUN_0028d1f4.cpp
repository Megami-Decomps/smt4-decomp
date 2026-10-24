/* NON_MATCHING: register allocation only in the percentage multiply (retail: base in r0, percent in r1, constant in r2) */
/* Returns the entry's explicit value (+0x50), or, when it has a percentage (+0x54), that percentage of the gameGetSlotTable base; 0 for a NULL entry. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 value;
    /* 0x54 */ u8 percent;
} Entry;

extern s32 *gameGetSlotTable(void);
extern Entry *dataTable40FindById(u32 id);

s32 FUN_0028d1f4(u32 id)
{
    s32 result = 0;
    Entry *entry = dataTable40FindById(id);

    if (entry != NULL) {
        if (entry->value != 0) {
            result = entry->value;
        }
        if (entry->percent != 0) {
            s32 *base = gameGetSlotTable();

            result = (entry->percent * *base) / 100;
        }
    }
    return result;
}

}
