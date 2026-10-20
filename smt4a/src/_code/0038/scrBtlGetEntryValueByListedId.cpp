#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x000 */ u8 unk000[0x25C];
    /* 0x25C */ u32 value;
} BtlEntry;

extern void *btlGetMainState(void);
extern BtlEntry *FUN_003f0e20(void *state, u32 id);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(u32 value);

/* Script command: returns the value of the battle entry with the given listed id (0 if there is none). */
u32 scrBtlGetEntryValueByListedId(void)
{
    u32 id = scrGetArg(0);
    u32 result = 0;
    BtlEntry *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL) {
        result = entry->value;
    }
    scrSetResult(result);
    return 1;
}

}
