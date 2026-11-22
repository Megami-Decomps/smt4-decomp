/* NON_MATCHING: creates the StreetPass (cec) edit screen. Same calls, stores, loops and literal pool as retail
 * (152 lines, 40 by shape); what differs is how the constant stores of the state block are grouped: retail stores
 * the ticker pair (0x144, 0x148) and message entries 3-5 and 6-8 with one stm each and entries 1, 2, 9 and 0 singly,
 * where this build pairs entries 2-3, 4-5 and 6-7 and stores the ticker pair as two words, so the handlers'
 * constants land in other registers. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_AsdText.h"
#include "camp/CampCec/CampCecEdit.h"
#include "camp/CecMenu.h"
#include "code/Code0024_Smt4.h"
#include "code/Code002c_Smt4.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "quest_center/qcMain.h"

extern "C" {

extern CampCecEdit *g_campCecEdit;

s32 campCecEditRunState(u32 job);
u32 campCecEditDrawSelectedImage(void);
u32 campCecEditUpdateCamera(void);
u32 campCecEditDrawContents(void);
/* The state handlers. */
s32 FUN_002e1744(CampCecEdit *edit);
s32 campCecEditMessageState(CampCecEdit *edit);
s32 FUN_00220d58(CampCecEdit *edit);
s32 FUN_002fc7a0(CampCecEdit *edit);
s32 FUN_002ec514(CampCecEdit *edit);
s32 recordQueryModeZero(CampCecEdit *edit);
s32 campCecEditChoiceListState(CampCecEdit *edit);
s32 panelSlideOutStep(CampCecEdit *edit);

u32 campCecDrawSetCreate(void);
u32 campCecDrawPageCreate(void);
void uiDrawRecordNameLabels(u32 labels, const CecProcessSlot *card);
void characterInfoPanelPopulate(u32 panel, const CecProcessSlot *card, void *messages);
AsdText *asdTextCreate(u32 flags);
void positionStateSet(AsdText *text, u32 first, u32 color, f32 scale);
void rt_aeabi_memclr(void *memory, u32 size);
void campCecDisplaySetRecord(u8 *scene, const PlayerDataIV *record);
void campCecResetScalarEffect(u8 *scene);

/* Creates the StreetPass (cec) edit screen: its work area, update and draw tasks, state handlers, the
 * edited card's label set and page, its script and message files, and the count of stocked demons able to
 * take part. */
void campCecEditCreate(u8 openMode)
{
    CampCecEdit *edit;
    s32 i;

    if (g_campCecEdit == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCecEdit.cpp", 200);
        g_campCecEdit = (CampCecEdit *)asdMemAlloc(0x100, 0x100, 0, sizeof(CampCecEdit), 1);
    }
    edit = g_campCecEdit;
    memClear(edit, sizeof(CampCecEdit));

    edit->task = asdProcessCreateSimple((const s8 *)"CampCecEdit Calc", 1, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditRunState, NULL, 0);
    taskCreateDraw((const s8 *)"CampCecEdit DrawUpLeft_b", 0x65, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditDrawSelectedImage, NULL, 0, (void *)edit->task);
    taskCreateDraw((const s8 *)"CampCecEdit DrawUpRight_b", 0xCC, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditDrawSelectedImage, NULL, 0, (void *)edit->task);
    taskCreateDraw((const s8 *)"CampCecEdit DrawUpLeft", 0x7D, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditUpdateCamera, NULL, 0, (void *)edit->task);
    taskCreateDraw((const s8 *)"CampCecEdit DrawUpRight", 0xDB, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditUpdateCamera, NULL, 0, (void *)edit->task);
    taskCreateDraw((const s8 *)"CampCecEdit DrawDown", 0xE6, 0, 0, (AsdProcUpdateFunc)(void *)campCecEditDrawContents, NULL, 0, (void *)edit->task);

    edit->nextState = -1;
    edit->prevState = -1;
    edit->state = 0;
    edit->followingState = -1;
    edit->message = -1;
    edit->nextMessage = 0;
    edit->headerVisible = 1;
    edit->touchFrames = 0;
    edit->openMode = openMode;
    edit->unk12A = 0;
    edit->listIndex = 0;
    edit->listTop = 0;
    edit->listCount = 16;
    edit->listRow = 0;
    edit->listActive = 0;
    edit->tickerX = -56;
    edit->messageBase = 0;
    edit->arrowHoldFrames = 0;
    edit->touchX = 0;
    edit->touchY = 0;
    edit->shownTarget = -1;

    edit->stateHandlers[0] = FUN_002e1744;
    edit->stateHandlers[2] = campCecEditMessageState;
    edit->stateHandlers[1] = FUN_00220d58;
    edit->stateHandlers[3] = campCecClassifyRequestedUnit;
    edit->stateHandlers[4] = FUN_002fc7a0;
    edit->stateHandlers[5] = FUN_002ec514;
    edit->stateHandlers[8] = recordQueryModeZero;
    edit->stateHandlers[6] = campCecEditChoiceListState;
    edit->stateHandlers[7] = panelSlideOutStep;

    /* each message's entry in CecEdit_scr.bf */
    edit->messageEntries[1] = 1;
    edit->messageEntries[2] = 2;
    edit->messageEntries[9] = 3;
    edit->messageEntries[0] = 0;
    edit->messageEntries[6] = 6;
    edit->messageEntries[7] = 7;
    edit->messageEntries[8] = 8;
    edit->messageEntries[3] = 9;
    edit->messageEntries[4] = 4;
    edit->messageEntries[5] = 5;

    edit->statusScene = (u32)overlayGetStatusScene();
    edit->card = FUN_0025463c();
    edit->nameLabels = campCecDrawSetCreate();
    uiDrawRecordNameLabels(edit->nameLabels, edit->card);
    edit->infoPage = campCecDrawPageCreate();
    characterInfoPanelPopulate(edit->infoPage, edit->card, edit->cardMessageFile);
    asdLoadFileAsyncSimple("camp/CecEdit_scr.bf", (u32 *)&edit->scriptFile, 0);
    asdLoadFileAsyncSimple("camp/CecEdit_msg.mbm", (u32 *)&edit->messageFile, 0);
    asdLoadFileAsyncSimple("camp/CecEdit_one_msg.mbm", (u32 *)&edit->cardMessageFile, 0);

    edit->text = asdTextCreate(0);
    asdTextSetBaseColor(edit->text, 0xff);
    positionStateSet(edit->text, 0, 0x646464ff, 0.0f);
    buttonHelpSetPreset(0xb1);

    /* the lower screen's areas and the choice list start off screen */
    for (i = 0; i < 3; i++) {
        rt_aeabi_memclr(&edit->lowerSlides[i], sizeof(CampCecEditSlide));
        edit->lowerSlides[i].x = 330;
    }
    for (i = 0; i < 2; i++) {
        rt_aeabi_memclr(&edit->upperSlides[i], sizeof(CampCecEditSlide));
    }
    rt_aeabi_memclr(&edit->listWindow, sizeof(CampCecEditSlide));
    edit->listWindow.x = 330;

    /* the status scene shows the player */
    campCecDisplaySetRecord(overlayGetStatusScene(), gameGetPlayerData());
    campCecResetScalarEffect(overlayGetStatusScene());

    /* counts the stocked demons that are neither dead nor excluded */
    SaveSlotTableIV *table = gameGetSlotTable();
    edit->activeMemberCount = 0;
    for (i = 0; i < 24; i++) {
        if (table->stock[i] >= 0 && !flagWordTestBit(gameGetUnitRecord(table->stock[i]), 10) &&
            !flagWordTestBit(gameGetUnitRecord(table->stock[i]), 1)) {
            edit->activeMemberCount++;
        }
    }
}

} /* extern "C" */
