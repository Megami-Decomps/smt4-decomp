#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "camp/CampCec/CampCecView.h"
#include "code/Code0024_Smt4.h"
#include "code/Code0026_Smt4.h"
#include "code/Code002c_Smt4.h"
#include "quest_center/qcMain.h"

/* unit-local: the 0x8C-byte equipment record FUN_0030a84c builds for the status scene's model; only its
 * size is known and it exists only while the screen is set up. */
struct CampCecViewEquipment {
    u8 data[0x8C];
};

extern "C" {

extern CampCecView *g_campCecView;

void rt_aeabi_memclr(void *memory, u32 size);
CampCecMarkEntryIV *saveGetIndexedMapValue(s32 index);
void uiDrawRecordNameLabels(u32 labels, const CampCecMarkEntryIV *entry);
u32 campCecDrawSetCreate(void);
u32 campCecDrawPageCreate(void);
void characterInfoPanelPopulate(u32 panel, CampCecMarkEntryIV *entry, void *messages);
void FUN_0030a84c(const CampCecMarkEntryIV *entry, CampCecViewEquipment *equipment);
void campCecDisplaySetRecord(u32 scene, const CampCecViewEquipment *equipment);
void campCecResetScalarEffect(u32 scene);
void linkHolderApplyFlag(u32 scene, s32 flag);
void campCecViewUpdate(void);
u32 campCecViewUpdateValue(u32 job);
void FUN_001c0fb0(void);
void campCecViewDrawCallback(void);

/* Labels one visible row with its entry, unless the entry is unused. */
static __inline void campCecViewLabelRow(CampCecView *view, s32 row)
{
    CampCecMarkEntryIV *entry = saveGetIndexedMapValue(view->top + row);

    if (entry->count != 0) {
        uiDrawRecordNameLabels(view->handle[row], entry);
    }
}

/* Creates the CEC view screen: its work area, process and draw tasks, then the three row sets, the page
 * for the first entry and the status scene's model. */
void campCecViewCreate(void)
{
    CampCecView *view;
    s32 i;

    if (g_campCecView == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCecView.cpp", 116);
        g_campCecView = (CampCecView *)asdMemAlloc(0x100, 0x100, 0, sizeof(CampCecView), 1);
    }
    view = g_campCecView;
    memClear(view, sizeof(CampCecView));
    view->task = asdProcessCreateSimple((const s8 *)"CampCecView Calc", 1, 0, 0, (AsdProcUpdateFunc)(void *)campCecViewUpdate, 0, 0);
    taskCreateDraw((const s8 *)"CampCecView DrawUpLeft_b", 0x65, 0, 0, (AsdProcUpdateFunc)(void *)campCecViewUpdateValue, NULL, 0, (void *)view->task);
    taskCreateDraw((const s8 *)"CampCecView DrawUpRight_b", 0xCC, 0, 0, (AsdProcUpdateFunc)(void *)campCecViewUpdateValue, NULL, 0, (void *)view->task);
    taskCreateDraw((const s8 *)"CampCecView DrawUpLeft", 0x81, 0, 0, (AsdProcUpdateFunc)(void *)FUN_001c0fb0, NULL, 0, (void *)view->task);
    taskCreateDraw((const s8 *)"CampCecView DrawUpRight", 0xDF, 0, 0, (AsdProcUpdateFunc)(void *)FUN_001c0fb0, NULL, 0, (void *)view->task);
    taskCreateDraw((const s8 *)"CampCecView DrawDown", 0xE6, 0, 0, (AsdProcUpdateFunc)(void *)campCecViewDrawCallback, NULL, 0, (void *)view->task);
    view->selected = 0;
    view->top = 0;
    view->state = 0;
    view->usedCount = 0;
    view->touchRepeat = 0;
    view->panelPopulated = 0;
    view->modelShown = 0;
    view->settleFrames = 0;
    for (i = 0; i < CAMP_CEC_VIEW_ENTRY_COUNT_IV; i++) {
        if (saveGetIndexedMapValue(i)->count != 0) {
            view->usedCount++;
        }
    }
    asdLoadFileAsyncSimple("camp/CecEdit_one_msg.mbm", (u32 *)&view->heap, 0);
    view->statusScene = (u32)FUN_0024aaa0();
    view->current = saveGetIndexedMapValue(view->selected);
    for (i = 0; i < CAMP_CEC_VIEW_ROWS; i++) {
        view->handle[i] = campCecDrawSetCreate();
    }
    view->handleB = campCecDrawPageCreate();
    /* Show the selection: label the visible rows and make the selected entry the current one. */
    {
        CampCecView *shown = g_campCecView;

        for (i = 0; i < CAMP_CEC_VIEW_ROWS; i++) {
            campCecViewLabelRow(shown, i);
        }
        shown->current = saveGetIndexedMapValue(shown->selected);
    }
    /* Fill the info panel for the current entry and dress the status scene's model as it. */
    {
        CampCecView *shown = g_campCecView;
        CampCecViewEquipment equipment;

        characterInfoPanelPopulate(shown->handleB, shown->current, shown->heap);
        FUN_0030a84c(shown->current, &equipment);
        if (FUN_0026f784((PlacedObject *)shown->statusScene) != 0) {
            campCecDisplaySetRecord(shown->statusScene, &equipment);
            campCecResetScalarEffect(shown->statusScene);
            linkHolderApplyFlag(shown->statusScene, 0);
            shown->previewed = shown->selected;
        }
    }
    for (i = 0; i < 2; i++) {
        rt_aeabi_memclr(&view->headerSlides[i], sizeof(CampCecViewSlide));
    }
    for (i = 0; i < 5; i++) {
        rt_aeabi_memclr(&view->rowSlides[i], sizeof(CampCecViewSlide));
        view->rowSlides[i].offset = CAMP_CEC_VIEW_SLIDE_START;
    }
    buttonHelpSetPreset(0xB2);
}

} /* extern "C" */
