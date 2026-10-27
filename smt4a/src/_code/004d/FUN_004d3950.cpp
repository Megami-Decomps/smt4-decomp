#include "common.h"

struct BtlStageVec3 {
    f32 x;
    f32 y;
    f32 z;
};

struct BtlStageModel {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 mode;
    /* 0x5C */ s32 colorR;
    /* 0x60 */ s32 colorG;
    /* 0x64 */ s32 colorB;
    /* 0x68 */ s32 rangeNear;
    /* 0x6C */ s32 rangeFar;
    /* 0x70 */ f32 fogDensity;
    /* 0x74 */ f32 lightX;
    /* 0x78 */ f32 lightY;
    /* 0x7C */ s32 ambientR;
    /* 0x80 */ s32 ambientG;
    /* 0x84 */ s32 ambientB;
    /* 0x88 */ s32 lightR;
    /* 0x8C */ s32 lightG;
    /* 0x90 */ s32 lightB;
    /* 0x94 */ u8 unk94[0x1C];
    /* 0xB0 */ BtlStageVec3 position;
};

struct HandleRegistryEntry {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ s32 flags;
};

struct HandleRegistry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ HandleRegistryEntry *first;
};

struct StageMenuOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

struct StageMenuParent {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 parentJob;
};

#define STAGE_MENU_ITEM_COUNT 20
#define STAGE_MENU_FLAG_HIDDEN ((s32)0x80000000)

extern "C" {
extern HandleRegistry *g_handleRegistry;
extern BtlStageModel *g_btlStageModel;
extern u8 DAT_00572800[];   /* item descriptions */

static __inline s32 stageMenuFirstHidden(void)
{
    s32 hidden = 0;
    if ((g_handleRegistry->first->flags & STAGE_MENU_FLAG_HIDDEN) < 0)
        hidden = 1;
    return hidden;
}

s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
void jobStop(u32 job, s32 arg);
u32 asdListBoxCreateDefaultFlags(u32 parent, s32 type, s32 flags, s32 extra);
void asdListBoxAddItems(u32 box, const void *items, s32 count);
void asdListBoxSetByteValue(u32 box, s32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetFloatItem(u32 box, s32 index, f32 value, s32 minimum, s32 maximum);
void asdListBoxSetIntItem(u32 box, s32 index, s32 value, s32 minimum, s32 maximum, s32 flags);
s32 FUN_00400d68(BtlStageModel *model);

void FUN_004d3950(StageMenuOwner *owner, StageMenuParent *parent)
{
    if (jobIsValid(owner->listBox) != 0) {
        FUN_003592dc(owner->listBox);
        jobStop(owner->listBox, 0);
    }
    owner->listBox = asdListBoxCreateDefaultFlags(parent->parentJob, 0x75, 0, 0);
    asdListBoxAddItems(owner->listBox, DAT_00572800, STAGE_MENU_ITEM_COUNT);
    asdListBoxSetByteValue(owner->listBox, 1);
    jobSetText(owner->listBox, "btl Stage Menu");

    BtlStageVec3 *position = &g_btlStageModel->position;
    asdListBoxSetFloatItem(owner->listBox, 0, position->x, -999, 999);
    asdListBoxSetFloatItem(owner->listBox, 1, position->y, -999, 999);
    asdListBoxSetFloatItem(owner->listBox, 2, position->z, -999, 999);
    asdListBoxSetIntItem(owner->listBox, 3, g_btlStageModel->mode, 0, 2, 0);
    asdListBoxSetIntItem(owner->listBox, 4, g_btlStageModel->colorR, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 5, g_btlStageModel->colorG, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 6, g_btlStageModel->colorB, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 7, g_btlStageModel->rangeNear, 0, 10000, 0);
    asdListBoxSetIntItem(owner->listBox, 8, g_btlStageModel->rangeFar, 0, 10000, 0);
    asdListBoxSetFloatItem(owner->listBox, 9, g_btlStageModel->fogDensity, 0, 10);
    asdListBoxSetIntItem(owner->listBox, 10, stageMenuFirstHidden(), 0, 1, 0);
    asdListBoxSetFloatItem(owner->listBox, 11, g_btlStageModel->lightX, -50000, 50000);
    asdListBoxSetFloatItem(owner->listBox, 12, g_btlStageModel->lightY, -50000, 50000);
    asdListBoxSetIntItem(owner->listBox, 13, g_btlStageModel->ambientR, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 14, g_btlStageModel->ambientG, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 15, g_btlStageModel->ambientB, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 16, g_btlStageModel->lightR, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 17, g_btlStageModel->lightG, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 18, g_btlStageModel->lightB, 0, 0xFF, 0);
    asdListBoxSetIntItem(owner->listBox, 19, 0, 0, FUN_00400d68(g_btlStageModel) - 1, 0);
}

} /* extern "C" */
