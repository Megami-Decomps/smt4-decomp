/* NON_MATCHING: store scheduling only in the final reset: retail materialises 0 in r1 for both clears and loads 12 afterwards (str 16; str 12; mov r0,#12; str 0); built hoists both constants. */
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
    /* 0x0000 */ u8 unk0000[0x10B0];
    /* 0x10B0 */ AocRecord records[47];
    /* 0x1DE8 */ u8 unk1DE8[0x234];
    /* 0x201C */ AocSlot slots[1];
} AocLoader;

typedef struct AocLoaderTask {
    /* 0x0 */ u32 state;
    /* 0x4 */ u8 unk4[4];
    /* 0x8 */ s32 count;
    /* 0xC */ u32 unkC;
    /* 0x10 */ u32 unk10;
} AocLoaderTask;

extern "C" {

AocRecord *FUN_003ec620(AocLoader *loader, u32 id);
s32 nkdwLoaderParse(AocRecord *record);
s32 FUN_003fce08(AocRecord *record, s32 arg);
void aocHandleButtons(AocRecord *record, s32 mode);
void FUN_003fce8c(AocRecord *record, s32 arg);
AocLoaderTask *FUN_003e0510(AocLoaderTask *task, AocLoader *loader);

} /* extern "C" */

extern "C" {

/* Called while the loader task waits on its requested records: starts each record's request,
 * copies the finished ones into the loader, and once every slot is done enters state 6. */
AocLoaderTask *aocLoaderUpdateRecords(AocLoaderTask *task, AocLoader *loader)
{
    s32 i;
    s32 ready = 1;

    for (i = 0; i < task->count; i++) {
        AocRecord *record = FUN_003ec620(loader, loader->slots[i].id);

        if ((loader->slots[i].state & 1) == 0) {
            if (nkdwLoaderParse(record) == 0) {
                ready = 0;
            } else {
                loader->slots[i].state |= 1;
                aocHandleButtons(record, 7);
            }
        }
        if ((loader->slots[i].state & 2) == 0) {
            if (FUN_003fce08(record, 1) == 0) {
                ready = 0;
            } else {
                FUN_003fce8c(record, 1);
                loader->slots[i].state |= 2;
                loader->records[i] = *record;
            }
        }
    }
    if (ready == 0) {
        return NULL;
    }
    task->unk10 = 0;
    task->unkC = 0;
    task->state = 0xC;
    return FUN_003e0510(task, loader);
}

} /* extern "C" */
