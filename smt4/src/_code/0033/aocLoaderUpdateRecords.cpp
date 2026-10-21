#include "common.h"

/* A record the loader copies out of the resource table: polymorphic, so a copy leaves its vtable
 * pointer alone and moves the members. */
class AocRecord {
public:
    virtual void unusedVirtual();
    /* 0x04 */ u32 field04;
    /* 0x08 */ u32 field08;
    /* 0x0C */ u32 field0C;
    /* 0x10 */ u32 field10;
    /* 0x14 */ u32 field14;
    /* 0x18 */ u32 field18;
    /* 0x1C */ u32 field1C;
    /* 0x20 */ u32 field20;
    /* 0x24 */ u32 field24;
    /* 0x28 */ u32 field28;
    /* 0x2C */ u32 field2C;
    /* 0x30 */ u32 field30;
    /* 0x34 */ u32 field34;
    /* 0x38 */ u32 field38;
    /* 0x3C */ u8 flagA;
    /* 0x3D */ u8 flagB;
    /* 0x40 */ u32 field40;
    /* 0x44 */ u32 field44;
};

typedef struct AocSlot {
    /* 0x0 */ u32 state; /* bit 0: requested, bit 1: record copied */
    /* 0x4 */ u32 id;
} AocSlot;

typedef struct AocLoader {
    /* 0x0000 */ u8 unk0000[0x1074];
    /* 0x1074 */ AocRecord records[47];
    /* 0x1DAC */ u8 unk1DAC[0x238];
    /* 0x1FE4 */ AocSlot slots[1];
} AocLoader;

typedef struct AocLoaderTask {
    /* 0x0 */ u32 state;
    /* 0x4 */ u8 unk4[4];
    /* 0x8 */ s32 count;
} AocLoaderTask;

extern "C" {

AocRecord *FUN_0027d9e8(AocLoader *loader, u32 id);
s32 nkdwHeaderParse(AocRecord *record);
s32 FUN_00294fe0(AocRecord *record);
void aocHandleButtons(AocRecord *record, s32 mode);
void FUN_0023fb84(AocRecord *record);
AocLoaderTask *FUN_00334228(AocLoaderTask *task, AocLoader *loader);

} /* extern "C" */

extern "C" {

/* Called while the loader task waits on its requested records: starts each record's request,
 * copies the finished ones into the loader, and once every slot is done enters state 6. */
AocLoaderTask *aocLoaderUpdateRecords(AocLoaderTask *task, AocLoader *loader)
{
    s32 i;
    s32 ready = 1;

    for (i = 0; i < task->count; i++) {
        AocRecord *record = FUN_0027d9e8(loader, loader->slots[i].id);
        AocSlot *slot = &loader->slots[i];

        if ((slot->state & 1) == 0) {
            if (nkdwHeaderParse(record) == 0) {
                ready = 0;
            } else {
                slot->state |= 1;
                aocHandleButtons(record, 7);
            }
        }
        if ((slot->state & 2) == 0) {
            if (FUN_00294fe0(record) == 0) {
                ready = 0;
            } else {
                FUN_0023fb84(record);
                slot->state |= 2;
                loader->records[i] = *record;
            }
        }
    }
    if (ready == 0) {
        return NULL;
    }
    task->state = 6;
    return FUN_00334228(task, loader);
}

} /* extern "C" */
