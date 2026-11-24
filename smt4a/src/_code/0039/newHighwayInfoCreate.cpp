/* NON_MATCHING: retail saves the new pointer earlier during construction and sets up the process callback later. */
#include "ui/PartnerTopic.h"
#include "shard/W5_W5Match7_ResourceHandles.h"
#include "code/Code0015_Smt4a.h"
#include "ui/UiControl_Smt4a.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
extern const char DAT_0052d468[], DAT_0052d454[], DAT_0052d440[];
extern const char DAT_0052d418[], DAT_0052d3f0[];
void asdTMTexTableLoadTmx(s32 table, s32 flags);

/* Creates the highway topic window, loading its table, messages, textures and text object. */
void newHighwayInfoCreate(u32 owner)
{
    g_engineResourceHandles.secondary = new SecondaryResourceWork;
    SecondaryResourceWork *info = (SecondaryResourceWork *)g_engineResourceHandles.secondary;
    info->job = asdProcessCreateSimple((const s8 *)DAT_0052d468, 4, 0, 0, FUN_0035d080, NULL, 0);
    taskCreateDraw((const s8 *)DAT_0052d454, 0x81, 0, 0, engineResourceSetSecondaryValue, NULL, 0, (void *)info->job);
    taskCreateDraw((const s8 *)DAT_0052d440, 0xdd, 0, 0, engineResourceSetSecondaryValue, NULL, 0, (void *)info->job);
    info->highwayTopic = owner;
    asdLoadFileAsyncSimple(DAT_0052d418, (u32 *)&info->auxiliary, 0);
    asdLoadFileAsyncSimple(DAT_0052d3f0, (u32 *)&info->resourceData, 0);
    asdTMTexTableLoadTmx(0x31, 0);
    for (s32 i = 0; i < 2; ++i)
        asdTMTexLoadMainHeap(0x31, i);
    secondaryResourceCreateText(info);
    topicPanelInitAnimations(info);
    info->highwayActive = 1;
    dialogEnterState((Dialog *)info, 9, 0);
}
} /* extern "C" */
