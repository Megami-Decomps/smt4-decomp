/* NON_MATCHING: retail uses `ldrsh ip, [r3]` where armcc emits `ldrsh r3, [r3]`. */
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
    s32 found = -1;
    for (s32 i = 0; i < 10; i++) {
        if (g_engineObjectLookup[i].id == id) {
            found = i;
            break;
        }
    }
    return found >= 0 ? g_engineObjectLookup[found].object : NULL;
}

} /* extern "C" */
