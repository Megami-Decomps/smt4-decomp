#include "common.h"

extern "C" {

int effBehaviorRun(...);
int FUN_002e7278(...);
int FUN_003024d0(...);

typedef struct Item {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int unk10;
    /* 0x14 */ u8 unk14[0x14];
} Item;

typedef struct Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ int count;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ int unk10;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ Item *items;
} Owner;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x1C];
} Record;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 type;
    /* 0x0E */ u8 unk0E[0x8E];
    /* 0x9C */ Owner *owner;
    /* 0xA0 */ Record *records;
} Obj;

void FUN_00313824(Obj *obj)
{
    Owner *owner;
    int count;
    Record *record;
    Item *item;
    int i;

    effBehaviorRun(obj->owner);
    owner = obj->owner;
    count = owner->count;
    if (count != 0 && owner->unk10 != 0) {
        item = owner->items;
        record = obj->records;
        if ((obj->type == 3) && (i = 0, 0 < count)) {
            do {
                if (item->unk10 == 0) {
                    FUN_003024d0(obj, record);
                }
                i = i + 1;
                item = item + 1;
                record = record + 1;
            } while (i < count);
        }
    }
    FUN_002e7278(obj);
}

} /* extern "C" */
