/* Returns the entry count of the data table keyed 0x100000023 plus the offset stored in the global state. */
#include "common.h"

extern "C" {

typedef struct GlobalState {
    /* 0x000 */ u8 unk000[0x3EC];
    /* 0x3EC */ s32 offset;
} GlobalState;

extern GlobalState *g_aocSystem;

extern void *dataTableGet(u64 key);
extern s32 dataTableGetCount(void *table);

s32 FUN_0024c324(void)
{
    return dataTableGetCount(dataTableGet(0x100000023ULL)) + g_aocSystem->offset;
}

}
