/* Sets the flag at +0x3F4 of the entry found for id scrGetArg(0) to whether scrGetArg(1) is nonzero; always returns 1. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x000 */ u8 unk000[0x3F4];
    /* 0x3F4 */ u8 flag;
} Entry;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern Entry *FUN_003f0e20(void *owner, u32 id);

u32 FUN_003810c4(void)
{
    u32 id = scrGetArg(0);
    s32 enabled = scrGetArg(1);
    Entry *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL) {
        entry->flag = enabled != 0;
    }
    return 1;
}

}
