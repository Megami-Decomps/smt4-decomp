#include "common.h"

extern "C" {

int __aeabi_memset4(u32 *dst, int size, u32 value);
int FUN_0030a728(u32 *dst, int max, u32 seed);
int aocLoaderUpdateRecords(void *result, void *obj);
int btlStateResetEntries(void *obj);
int entryAddUniqueIdentifier(void *obj, int id);
int resourceSlotsInsert(void *obj, u32 value);
extern u32 FUN_00294090(u32 id, u32 flag);
extern int entryContainsIdentifier(void *obj, u32 id);

typedef struct Slot {
    /* 0x0 */ u32 id;
    /* 0x4 */ u32 unk4;
} Slot;

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1E88];
    /* 0x1E88 */ u32 seed;
    /* 0x1E8C */ u8 unk1E8C[0x15C];
    /* 0x1FE8 */ Slot slots[1];
} Obj;

typedef struct Result {
    /* 0x0 */ u32 kind;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 count;
} Result;

/* Collects up to 43 ids for the object, registers the ones it doesn't have yet in its slot table, and reports the number added. */
void entryCollectNewIdentifiers(Result *result, Obj *obj)
{
    int count;
    u32 value;
    int added;
    int i;
    u32 ids[43];
    u32 seed;

    btlStateResetEntries(obj);
    seed = obj->seed;
    __aeabi_memset4(ids, 0xa8, 0xffffffff);
    count = FUN_0030a728(ids, 0x2a, seed);
    added = 0;
    i = 0;
    if (i < count) {
        do {
            if (entryContainsIdentifier(obj, ids[i]) == 0) {
                value = FUN_00294090(ids[i], 1);
                resourceSlotsInsert(obj, value);
                obj->slots[added].id = ids[i];
                entryAddUniqueIdentifier(obj, (s16)ids[i]);
                added++;
            }
            i++;
        } while (i < count);
    }
    result->kind = 5;
    result->count = added;
    aocLoaderUpdateRecords(result, obj);
}

} /* extern "C" */
