#include "shard/Shard0041.h"

extern "C" {

typedef struct ItemTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ void **items;
} ItemTable;

typedef struct TablePair {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ ItemTable tableA;
    /* 0x1C */ ItemTable tableB;
} TablePair;

extern u8 DAT_00557d60;
extern void itemTableClear(ItemTable *table);
extern void asdOperatorDelete(TablePair *obj);

/* Destroys the object: restores its vtable, clears both item tables twice (base and member destruction) and frees it. */
void tablePairDestroy(TablePair *obj)
{
    obj->vtbl = &DAT_00557d60;
    itemTableClear(&obj->tableA);
    itemTableClear(&obj->tableB);
    itemTableClear(&obj->tableB);
    itemTableClear(&obj->tableA);
    asdOperatorDelete(obj);
}

} /* extern "C" */
