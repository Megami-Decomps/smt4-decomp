#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1EE];
    /* 0x1F2 */ u16 values[1];  /* indexed by script argument; bits 10+ hold a state */
    /* 0x1F4 */ u8 unk1F4[0x94];
} BtlEntry; /* 0x288 */

typedef struct BtlSub4900 {
    /* 0x00 */ u8 unk00[0xC5];
    /* 0xC5 */ u8 flag;
} BtlSub4900;

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *entries;
    /* 0x1FC4 */ u8 unk1FC4[0x293C];
    /* 0x4900 */ BtlSub4900 sub4900;
} BtlMainState;

extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);
extern BtlMainState *btlGetMainState(void);
extern BtlEntry *btlMainFindActiveEntry(void);
extern u32 FUN_00249a54(void);
extern void FUN_002499fc(u32 group, s32 *first, s32 *count);

/* Script command: sets the result to 1 when a live entry (or the active one) has state 2 in the argument's slot. */
s32 FUN_002f0ee0(void)
{
    s32 slot = scrGetArg(0);
    s32 first;
    s32 count;

    scrGetArg(1);
    FUN_002499fc(FUN_00249a54(), &first, &count);
    for (s32 i = first; i < first + count; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && entry->values[slot] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    BtlSub4900 *sub = &btlGetMainState()->sub4900;

    if (sub->flag != 0) {
        btlGetMainState();
        BtlEntry *entry = btlMainFindActiveEntry();
        if (entry != NULL && entry->values[slot] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
