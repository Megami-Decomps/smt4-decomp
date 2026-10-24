/* NON_MATCHING: the flag tests and table value get r4/r6 instead of r6/r7, and the shared count store sits after the else block. */
#include "common.h"

extern "C" {

/* A layout entry of table 0x2f: a position and a size pair. */
typedef struct UiRect {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ const s16 *size;
} UiRect;

/* The part of the config screen block this function rebuilds. */
typedef struct ConfigScreen {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ s16 unk76;
    /* 0x78 */ s16 regionX[3];
    /* 0x7E */ s16 regionCount;
    /* 0x80 */ u8 unk80[0x28];
    /* 0xA8 */ u8 extraButton;
} ConfigScreen;

s32 memFill8(void *destination, u32 value);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);
s32 ifTouchRegionRemove(void);
s32 gameFlagIsSet(u32 flag);
s32 dataTableGetCount(u32 table);
s32 dataTableGetEntries(void);
u32 dataTableGet(u32 table, u32 index);
UiRect *FUN_002bf4f8(u32 table, u32 id);

extern ConfigScreen *g_config;

/* Adds a touch region for `button` placed inside `frame` and returns its x. */
static s16 addButtonRegion(const UiRect *frame, const UiRect *button)
{
    return ifTouchRegionAdd((s16)(frame->x + button->x), (s16)(frame->y + button->y), button->size[0], button->size[1]);
}

void FUN_001d15fc(void)
{
    ConfigScreen *config = g_config;
    s32 i;

    for (i = 0; i < config->regionCount; i++) {
        ifTouchRegionRemove();
    }
    memFill8(&config->unk76, 0xFFFFFFFF);
    config->regionCount = 0;
    if ((gameFlagIsSet(0x555) == 0 || gameFlagIsSet(0x557) == 0) && gameFlagIsSet(0x557) == 0) {
        gameFlagIsSet(0x555);
    }
    u32 table = dataTableGet(0x36, 0);
    dataTableGetEntries();
    dataTableGetCount(table);
    UiRect *frame = FUN_002bf4f8(0x2f, 0x20);
    u16 count;
    if (config->extraButton != 0) {
        config->regionX[0] = addButtonRegion(frame, FUN_002bf4f8(0x2f, 0x44));
        config->regionX[1] = addButtonRegion(frame, FUN_002bf4f8(0x2f, 0x45));
        config->regionX[2] = addButtonRegion(frame, FUN_002bf4f8(0x2f, 0x46));
        count = config->regionCount + 3;
    } else {
        config->regionX[0] = addButtonRegion(frame, FUN_002bf4f8(0x2f, 0x42));
        config->regionX[1] = addButtonRegion(frame, FUN_002bf4f8(0x2f, 0x43));
        count = config->regionCount + 2;
    }
    config->regionCount = count;
}

} /* extern "C" */
