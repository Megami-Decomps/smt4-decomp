#include "common.h"

extern "C" {

typedef struct BtlUnitStatus {
    /* 0x000 */ u8 unk000[0x3fc];
    /* 0x3fc */ void *skillOrder; /* per-unit ordering, NULL to use the default one */
} BtlUnitStatus;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUnitStatus *status;
} BtlUnit;

typedef struct BtlActionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unitId; /* acting unit */
} BtlActionState;

void *dataTable04FindById(u16 id);
s32 FUN_003df574(u16 id);
s32 FUN_004bcbb4(void *order, u16 id);
BtlUnit *btlUnitGet(u32 id);

extern BtlActionState g_btlAction;

/* Sort comparator for two skill ids: orders them by the acting unit's sort key (0 for unknown ids). */
s32 btlSkillCompareBySortKey(const u16 *a, const u16 *b)
{
    if (*a == 0) {
        return 0;
    }
    if (*b == 0) {
        return 0;
    }
    void *skillA = dataTable04FindById(*a);
    void *skillB = dataTable04FindById(*b);
    if (skillA == NULL) {
        return 0;
    }
    if (skillB == NULL) {
        return 0;
    }

    void *order = btlUnitGet(g_btlAction.unitId)->status->skillOrder;
    s16 keyA;
    s16 keyB;
    if (order != NULL) {
        keyA = FUN_004bcbb4(order, *a);
        keyB = FUN_004bcbb4(order, *b);
    } else {
        keyA = FUN_003df574(*a);
        keyB = FUN_003df574(*b);
    }
    return keyA - keyB;
}

} /* extern "C" */
