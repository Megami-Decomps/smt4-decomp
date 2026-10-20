#include "shard/Shard003C.h"

extern "C" {

typedef struct StageLink {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
} StageLink;

typedef struct StageSubB {
    /* 0x00 */ u8 flag;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ StageLink *link;
} StageSubB;

typedef struct StageObjB {
    /* 0x000 */ u8 unk000[0x9B4];
    /* 0x9B4 */ StageSubB sub;
} StageObjB;

typedef struct StageRefB {
    /* 0x00 */ StageObjB *obj;
} StageRefB;

extern s32 FUN_004ffba8(u32 value);

/* True when the stage's sub-record is active and FUN_004ffba8 accepts its linked object. */
u32 stageRefHasLinkedObject(StageRefB *ref)
{
    StageSubB *sub = &ref->obj->sub;

    if (sub->flag == 0 || FUN_004ffba8(sub->link->unk04) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
