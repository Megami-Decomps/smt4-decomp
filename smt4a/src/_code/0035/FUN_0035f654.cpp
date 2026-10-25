/* Looks up the entry for the current id and reports its value (0 if there is none). */
#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ u32 value;
} Entry;

extern u32 scrGetArg(u32 arg);
extern Entry *FUN_003f0e20(void *owner, u32 id);
extern void scrSetResult(u32 value);

u32 FUN_0035f654(void)
{
    u32 id = scrGetArg(0);
    u32 value = 0;
    Entry *entry = FUN_003f0e20(static_cast<void *>(btlGetMainState()), id);

    if (entry != NULL) {
        value = entry->value;
    }
    scrSetResult(value);
    return 1;
}

}
