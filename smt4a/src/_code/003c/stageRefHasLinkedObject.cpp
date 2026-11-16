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
extern StageObjB *g_mapGimic;

extern s32 animationChannelsAllFinished(u32 value);

/* True when the stage's sub-record is active and animationChannelsAllFinished accepts its linked object. */
u32 stageRefHasLinkedObject(void)
{
    StageSubB *sub = &g_mapGimic->sub;

    if (sub->flag == 0 || animationChannelsAllFinished(sub->link->unk04) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
