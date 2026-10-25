#include "common.h"

extern "C" {

int FUN_002499fc(u32 a, int *first, int *count);
int scrSetResult(int result);
extern u8 *btlGetMainState(void);
int scrGetArg(int index);
extern u8 *btlMainFindActiveEntry(void);
extern s32 btlScriptResolveGroupArg(s32 group);

typedef struct BtlUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1EE];
    /* 0x1F2 */ u16 slots[1];
} BtlUnit;

/* Script command: result 1 when a living, visible unit in the current group (or the extra unit) has state 3 in the status slot given by argument 0. */
u32 scrGroupUnitSlotHasState(void)
{
    int slot = scrGetArg(0);
    int first;
    int count;
    int i;
    u32 group;
    BtlUnit *unit;
    u8 *btl;
    BtlUnit *extra;

    group = btlScriptResolveGroupArg(scrGetArg(1));
    FUN_002499fc(group, &first, &count);
    i = first;
    if (first < count + first) {
        do {
            btl = btlGetMainState();
            unit = (BtlUnit *)(*(u8 **)(btl + 0x1fc0) + i * 0x288);
            if (((((unit->flags & 0x10) == 0) && ((unit->flags & 1) != 0)) && ((unit->flags & 0x40) == 0)) &&
                (unit->slots[slot] >> 10 == 3)) {
                scrSetResult(1);
                return 1;
            }
            i = i + 1;
        } while (i < first + count);
    }
    btl = btlGetMainState() + 0x4900;
    if (*(s8 *)(btl + 0xc5) != 0) {
        btlGetMainState();
        extra = (BtlUnit *)btlMainFindActiveEntry();
        if ((extra != NULL) && (extra->slots[slot] >> 10 == 3)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
