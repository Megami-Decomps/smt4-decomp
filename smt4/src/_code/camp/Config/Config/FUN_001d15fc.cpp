/* NON_MATCHING: only the saved registers of the flag-id temporaries differ (retail keeps them in r6/r7, the build in r4/r6); the button arms and tail now match. */
#include "camp/Config/Config.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 memFill8(void *destination, u32 value);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);
s32 ifTouchRegionRemove(void);
s32 gameFlagIsSet(u32 flag);

extern ConfigWork *g_config;

/* Adds a touch region for `button` placed inside `frame` and returns its x. */
static s16 addButtonRegion(const TextureTableEntryIV *frame, const TextureTableEntryIV *button)
{
    return ifTouchRegionAdd((s16)(frame->x + button->x), (s16)(frame->y + button->y), button->placement->width, button->placement->height);
}

/* Rebuilds the config screen's touch regions: the two choice buttons, or three when the extra choice is shown. */
void FUN_001d15fc(void)
{
    ConfigWork *config = g_config;
    s32 i;

    for (i = 0; i < config->countB; i++) {
        ifTouchRegionRemove();
    }
    memFill8(&config->touchGroup, 0xFFFFFFFF);
    config->countB = 0;
    if ((gameFlagIsSet(0x555) == 0 || gameFlagIsSet(0x557) == 0) && gameFlagIsSet(0x557) == 0) {
        gameFlagIsSet(0x555);
    }
    void *section = dataTableGet(0x36, 0);
    dataTableGetEntries(section);
    dataTableGetCount(section);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x2f, 0x20);
    u16 count;
    if (config->flag == 0) {
        config->choiceRegions[0] = addButtonRegion(frame, asdTMTexTableEntryAt(0x2f, 0x42));
        config->choiceRegions[1] = addButtonRegion(frame, asdTMTexTableEntryAt(0x2f, 0x43));
        count = config->countB + 2;
    } else {
        config->choiceRegions[0] = addButtonRegion(frame, asdTMTexTableEntryAt(0x2f, 0x44));
        config->choiceRegions[1] = addButtonRegion(frame, asdTMTexTableEntryAt(0x2f, 0x45));
        config->choiceRegions[2] = addButtonRegion(frame, asdTMTexTableEntryAt(0x2f, 0x46));
        count = config->countB + 3;
    }
    config->countB = count;
}

} /* extern "C" */
