#include "common.h"

extern "C" {

int panelSetScrollPosition(void *obj, int first, int count);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 id;
} Entry;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ s32 count;
    /* 0x530 */ Entry *entries[1];
} Obj;

/* Finds the entry whose id matches and scrolls the list so it is visible (10 rows). */
void listScrollToId(Obj *obj, u32 id)
{
    s32 i = 0;

    if (i < obj->count) {
        do {
            if (obj->entries[i]->id == id) {
                if (i < 10) {
                    panelSetScrollPosition(obj, 0, i);
                    return;
                }
                panelSetScrollPosition(obj, i - 9, 9);
                return;
            }
            i++;
        } while (i < obj->count);
    }
}

} /* extern "C" */
