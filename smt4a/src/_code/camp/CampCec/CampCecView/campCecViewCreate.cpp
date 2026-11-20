#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "camp/CampCec/CampCecView.h"
#include "gamedata/GameDataAccess_VariantJ.h"

extern "C" {

extern CampCecViewA *g_campCecView;

void taskCreateDraw(const char *name, s32 layer, u32 a, u32 b, void *callback, u32 c, u32 d, u32 parent);
void sysPlaySe(u32 id);
void rt_aeabi_memclr(void *memory, u32 size);
void FUN_00319aec(u32 value);
s32 playerSummaryIsIncomplete(const CampCecMarkEntry *entry);
void FUN_0036d4b0(s32 index);
void uiDrawExtendedRecordLabel(u32 labels, const CampCecMarkEntry *entry);
u32 campCecDrawSetCreate(void);
u32 textureRequestCacheGet(u32 panel, u32 icon);
void characterInfoPanelPopulate(u32 panel, CampCecMarkEntry *entry, u32 flag);
u32 campCecDrawPageCreate(void);
u32 overlayGetStatusScene(void);
void campCecViewUpdate(void);
u32 campCecViewDrawEffectImage(u32 job);
void campCecViewCreateEffect(void);
void campCecViewDrawEntries(void);

/* Returns StreetPass mark entry `index` of the save data. */
static __inline CampCecMarkEntry *campCecViewMarkEntry(s32 index)
{
    return (CampCecMarkEntry *)gameDataGetMarkEntry(index);
}

/* Labels one visible row with its entry, unless the entry is unused (IV's twin FUN_002d747c has the same
 * helper; the update, campCecViewUpdate, repeats the operation). */
static __inline void campCecViewLabelRow(CampCecViewA *view, s32 row)
{
    CampCecMarkEntry *entry = campCecViewMarkEntry(view->top + row);

    if (entry->count != 0) {
        uiDrawExtendedRecordLabel(view->handle[row], entry);
    }
}

/* Creates the CEC view screen: its work area, process and draw tasks, then the three row sets and the
 * page for the first entry. */
void campCecViewCreate(void)
{
    CampCecViewA *view;
    s32 i;

    if (g_campCecView == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecView.cpp", 130);
        g_campCecView = (CampCecViewA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CampCecViewA), 1);
    }
    view = g_campCecView;
    sysMemClear(view, sizeof(CampCecViewA));
    view->task = asdProcessCreateSimple((const s8 *)"CampCecView Calc", 3, 0, 0, (AsdProcUpdateFunc)(void *)campCecViewUpdate, 0, 0);
    taskCreateDraw("CampCecView DrawUpLeft_b", 0x65, 0, 0, (void *)campCecViewDrawEffectImage, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpRight_b", 0xCC, 0, 0, (void *)campCecViewDrawEffectImage, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpLeft", 0x86, 0, 0, (void *)campCecViewCreateEffect, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawUpRight", 0xE2, 0, 0, (void *)campCecViewCreateEffect, 0, 0, view->task);
    taskCreateDraw("CampCecView DrawDown", 0xEA, 0, 0, (void *)campCecViewDrawEntries, 0, 0, view->task);
    view->selected = 0;
    view->top = 0;
    view->state = 0;
    view->usedCount = 0;
    view->touchRepeat = 0;
    view->panelPopulated = 0;
    view->modelShown = 0;
    view->settleFrames = 0;
    view->populatedIndex = 0;
    /* Drop the entries whose player summary is incomplete, then count the used ones. */
    for (i = CAMP_CEC_VIEW_ENTRY_COUNT - 1; i >= 0; i--) {
        if (playerSummaryIsIncomplete(campCecViewMarkEntry(i)) != 0) {
            FUN_0036d4b0(i);
        }
    }
    for (i = 0; i < CAMP_CEC_VIEW_ENTRY_COUNT; i++) {
        if (campCecViewMarkEntry(i)->count != 0) {
            view->usedCount++;
        }
    }
    asdLoadFileAsyncSimple("camp/CecEdit_one_msg.mbm", (u32 *)&view->heap, 0);
    view->statusScene = overlayGetStatusScene();
    view->current = campCecViewMarkEntry(view->selected);
    view->current->shownCount = view->current->count;
    for (i = 0; i < CAMP_CEC_VIEW_ROWS; i++) {
        view->handle[i] = campCecDrawSetCreate();
    }
    view->handleB = campCecDrawPageCreate();
    /* Show the selection: label the visible rows and make the selected entry the current one, marking
     * it as seen. The update (campCecViewUpdate) repeats this block whenever the selection moves. */
    {
        CampCecViewA *shown = g_campCecView;

        for (i = 0; i < CAMP_CEC_VIEW_ROWS; i++) {
            campCecViewLabelRow(shown, i);
        }
        shown->current = campCecViewMarkEntry(shown->selected);
        shown->current->shownCount = shown->current->count;
    }
    view->pageDirty = 1;
    characterInfoPanelPopulate(view->handleB, view->current, 0);
    {
        u8 icon = campCecViewMarkEntry(0)->icon;

        if (FUN_00182054(icon) == 0) {
            textureRequestCacheGet(view->handleB, icon);
        }
    }
    for (i = 0; i < 2; i++) {
        rt_aeabi_memclr(&view->headerSlides[i], sizeof(CampCecViewSlide));
    }
    for (i = 0; i < 5; i++) {
        rt_aeabi_memclr(&view->rowSlides[i], sizeof(CampCecViewSlide));
        view->rowSlides[i].offset = CAMP_CEC_VIEW_SLIDE_START;
    }
    sysPlaySe(0xB4);
    FUN_00319aec(0);
}

} /* extern "C" */
