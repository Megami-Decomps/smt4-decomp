#include "common.h"

extern "C" {

struct LookupEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[0xa];
    /* 0x0c */ void *object;
    /* 0x10 */ u8 unk10[0x20];
};
extern LookupEntry g_engineObjectLookup[10];

void * engineLookupObjectById(s32 id)
{
    LookupEntry *table = g_engineObjectLookup;
    s32 found = -1;
    for (s32 i = 0; i < 10; i += 2) {
        LookupEntry *entry = &table[i];
        if (entry[0].id == id) {
            found = i;
            break;
        }
        if (entry[1].id == id) {
            found = i + 1;
            break;
        }
    }
    if (found < 0) {
        return NULL;
    }
    return table[found].object;
}

} /* extern "C" */
