/* camp/CampCec/CampCec.cpp (Apocalypse): the camp menu's StreetPass overlay. */
#include "shard/Shard0031.h"
#include "camp/CampCec/CampCecSetting.h"
#include "camp/CampCec/CecProfile.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "camp/CampMenuEntry.h"
#include "event/2dEvent/EventEffect.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0015_Smt4a.h"
#include "ui/UiControl.h"
#include "code/Code002a_Smt4a.h"

#define CAMP_CEC_SOURCE "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCec.cpp"

extern "C" {

extern OverlayRef g_campCec; // declcheck: local (Apocalypse's flag and overlay pair; camp/CecMenu.h declares IV's pointer of the same name)

u32 FUN_002021cc(void);
s32 FUN_002021c4(void);
u32 FUN_0025cf44(void);
s32 FUN_002e2284(OverlayObj *overlay);
s32 campCecRecvMenuIdleState(OverlayObj *overlay);
s32 campCecWaitForSettings(OverlayObj *overlay);
s32 campCecEditPollConfirmation(OverlayObj *overlay);
s32 campCecRecvWaitAndResume(OverlayObj *overlay);
s32 FUN_002bfd2c(OverlayObj *overlay);
s32 campCecWaitForView(OverlayObj *overlay);
s32 campCecRankingWaitAndResume(OverlayObj *overlay);
s32 campRunScriptEntry(OverlayObj *overlay);
s32 FUN_0036cfb0(OverlayObj *overlay);
s32 FUN_003193a0(OverlayObj *overlay);
s32 jobSceneWaitStep(OverlayObj *overlay);

s32 nn_cfg_CTR_IsRestrictP2pCec(void);
u8 FUN_004310c0(void);
void cecProcessStart(void);
u32 cecQueryOptionalProcess(void); // declcheck: local (cec/CecProcessGlobal.h pulls in Obj557ec0.h, whose asdOperatorDelete clashes with this unit's)
void FUN_00331380(s32 active);
void campStatusSceneCreateModel(StatusScene *scene);
void bgmRestart(s32 track);
void soundChannelRequestIfEnabled(u32 id, s32 channel, s32 frames);
TexFile *asdTMTexTableLoadSprites(s32 table);
void gameDataBlocksSetFlagBits(u8 mask, s32 enabled);
void saveBuildSummary(CampCecReceivedRecord *record);
u8 FUN_0031cee0(void);
u8 gameSaveWorkGetState(void);
u8 saveFlagGet27e1f(void);
void ownerSetName(CampCecReceivedRecord *record, const u16 *name);
void saveGetEquipment(CecProfile *equipment);
void cecRecordSetEquipment(CampCecReceivedRecord *record, ...);
u8 FUN_002a46b8(void);
s32 gameDataGetRecordValue(void);
void slotNameDisplaySetEntry(CampCecReceivedRecord *record, s32 demonId);
u32 gameDataBlocksGetWord27E8C(void);
void cecMessageSetRankA(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetRankB(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetRankC(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetGameFlag(CampCecReceivedRecord *record, u8 flag);
void cecMessageSetWord27E8C(CampCecReceivedRecord *record, u32 value);
u32 libc_strlen(const char *text);
void saveNameBlockReset(void);
s32 gameDataTestFlags(u32 mask);
u32 cecOutboxReadCard(CampCecReceivedRecord *card); // declcheck: local (Apocalypse's card is the 100-byte record; camp/CampCec/CampCecView.h names IV's 0x4C-byte CecProcessSlot)
s32 rt_memcmp(const void *a, const void *b, u32 size);
void cecProcessCall2(void);
void rt_aeabi_memclr(void *block, u32 size);
u32 campCecDrawSetCreate(void);
s32 uiDrawExtendedRecordLabel(u32 labels, const CampCecReceivedRecord *record);

/* Returns the player's own StreetPass record, kept in the camp's StreetPass overlay. campCecCreate, next in
 * this file, inlines it at every use (late, as armcc inlines a function the file calls several times). */
CampCecReceivedRecord *campCecGetOwnRecord(void)
{
    return &g_campCec.instance->ownRecord;
}

/* Fills the player's own record from the save: ranks, name, equipment, flag, demon and play word. Run
 * once on the stored record and again after a reset of an incomplete one. */
static void campCecFillOwnRecord(void)
{
    cecMessageSetRankA(campCecGetOwnRecord(), FUN_0031cee0());
    cecMessageSetRankB(campCecGetOwnRecord(), gameSaveWorkGetState());
    cecMessageSetRankC(campCecGetOwnRecord(), saveFlagGet27e1f());
    ownerSetName(campCecGetOwnRecord(), (const u16 *)FUN_002840ac());
    CecProfile equipment;
    saveGetEquipment(&equipment);
    cecRecordSetEquipment(campCecGetOwnRecord(), equipment);
    cecMessageSetGameFlag(campCecGetOwnRecord(), FUN_002a46b8());
    slotNameDisplaySetEntry(campCecGetOwnRecord(), gameDataGetRecordValue());
    cecMessageSetWord27E8C(campCecGetOwnRecord(), gameDataBlocksGetWord27E8C());
}

/* Creates the camp's StreetPass overlay: its update and draw tasks and its state handlers. With
 * StreetPass restricted or switched off only the menu's script is loaded for the notice; otherwise the
 * screen's resources are requested, the player's own record is rebuilt from the save (and reset first
 * when its name or equipment is incomplete), its demon is taken from the first party member marked for
 * it, and the outbox is refreshed when its card no longer matches. `resumed` is nonzero when the overlay
 * comes back from one of its screens: the music and the entry flag are then left alone. */
void campCecCreate(s32 resumed)
{
    if (g_campCec.instance == NULL) {
        asdDebugTrace(CAMP_CEC_SOURCE, 342);
        g_campCec.instance = (OverlayObj *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(OverlayObj), 1);
    }
    OverlayObj *overlay = g_campCec.instance;
    sysMemClear(overlay, sizeof(OverlayObj));
    overlay->job = asdProcessCreateSimple((const s8 *)"CampCec Calc", 3, 0, 0, (AsdProcUpdateFunc)FUN_002021cc, 0, 0);
    taskCreateDraw((const s8 *)"CampCec DrawUpLeft", 0x81, 0, 0, (AsdProcUpdateFunc)FUN_002021c4, 0, 0, (void *)overlay->job);
    taskCreateDraw((const s8 *)"CampCec DrawUpRight", 0xDD, 0, 0, (AsdProcUpdateFunc)FUN_002021c4, 0, 0, (void *)overlay->job);
    taskCreateDraw((const s8 *)"CampCec DrawDown", 0xEA, 0, 0, (AsdProcUpdateFunc)FUN_0025cf44, 0, 0, (void *)overlay->job);
    overlay->previousState = -1;
    overlay->state = 0;
    overlay->nextState = -1;
    overlay->unk148 = -1;
    overlay->selection = 0;
    overlay->labels = 0;
    overlay->slidePhase = 0;
    overlay->slideReversed = 0;
    if (resumed == 0) {
        g_campCec.unk00 = 0;
    }
    overlay->handlers[0] = FUN_002e2284;
    overlay->handlers[1] = campCecRecvMenuIdleState;
    overlay->handlers[7] = campCecWaitForSettings;
    overlay->handlers[2] = campCecEditPollConfirmation;
    overlay->handlers[3] = campCecRecvWaitAndResume;
    overlay->handlers[4] = FUN_002bfd2c;
    overlay->handlers[5] = campCecWaitForView;
    overlay->handlers[6] = campCecRankingWaitAndResume;
    overlay->handlers[8] = campRunScriptEntry;
    overlay->handlers[10] = FUN_0036cfb0;
    overlay->handlers[12] = FUN_003193a0;
    overlay->handlers[13] = jobSceneWaitStep;
    gameFlagSetValue(0x4CA, 0, 1);

    overlay->restriction = 0;
    if (nn_cfg_CTR_IsRestrictP2pCec() != 0) {
        overlay->restriction = 1;
    } else if (FUN_004310c0() == 0) {
        overlay->restriction = 2;
    }
    overlay->unk170 = 0;
    if (overlay->restriction != 0) {
        asdLoadFileAsyncSimple("camp/CecMain_scr.bf", (u32 *)&overlay->buffer0, 0);
        asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", (u32 *)&overlay->buffer1, 0);
        overlay->state = 10;
        return;
    }

    cecProcessStart();
    overlay->optionalProcess = cecQueryOptionalProcess();
    messageSetMode(0);
    overlay->initialized = 0;
    overlay->unk16E = 1;
    overlay->refreshRequested = 0;
    FUN_00331380(0);
    campStatusSceneCreateModel(&g_campCec.instance->scene);
    if (resumed == 0) {
        bgmRestart(0);
        soundChannelRequestIfEnabled(0x1000049, 0, 60);
    }
    asdLoadFileAsyncSimple("camp/CecMain_scr.bf", (u32 *)&overlay->buffer0, 0);
    asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", (u32 *)&overlay->buffer1, 0);
    asdTMTexTableLoadSprites(0x2E);
    asdTMTexLoadMainHeap(0x2E, 0);
    loadSlotRequestAsync(0x4A, 0);
    if (gameFlagIsSet(0x581)) {
        gameDataBlocksSetFlagBits(4, 1);
    }

    saveBuildSummary(campCecGetOwnRecord());
    campCecFillOwnRecord();
    CampCecReceivedRecord *own = campCecGetOwnRecord();
    if (own == NULL || libc_strlen(own->name) == 0 || own->stats[0] == 0 || own->stats[1] == 0 ||
        own->stats[2] == 0 || own->stats[3] == 0 || own->stats[4] == 0 || own->stats[5] == 0 ||
        own->stats[6] == 0) {
        saveNameBlockReset();
        campCecFillOwnRecord();
    }

    SaveSlotTableA *table = gameGetSlotTable();
    for (s32 i = 0; i < 24; i++) {
        if (table->party[i] < 0) {
            continue;
        }
        SlotRecordA *unit = gameGetSlotRecord(table->party[i]);
        if (unit == NULL) {
            continue;
        }
        if (!bitsAt60Test(unit, 2)) {
            continue;
        }
        if (gameDataGetRecordValue() != unit->id) {
            slotNameDisplaySetEntry(campCecGetOwnRecord(), (s16)unit->id);
            savedRecordSetDemonId(unit->id);
        }
        break;
    }
    if (gameDataGetRecordValue() == 0) {
        slotNameDisplaySetEntry(campCecGetOwnRecord(), 0);
    }
    if (overlay->optionalProcess != 0 && gameDataTestFlags(0x20) != 0) {
        CampCecReceivedRecord card;
        cecOutboxReadCard(&card);
        if (rt_memcmp(&card.demon, &g_campCec.instance->ownRecord.demon, sizeof(card.demon)) != 0) {
            cecProcessCall2();
            cecProcessForward(campCecGetOwnRecord());
        }
    }
    if (gameDataGetRecordValue() == 0) {
        rt_aeabi_memclr(&g_campCec.instance->ownRecord.demon, sizeof(CecReceivedDemon));
    }
    overlay->labels = campCecDrawSetCreate();
    uiDrawExtendedRecordLabel(overlay->labels, campCecGetOwnRecord());
    for (s32 i = 0; i < 2; i++) {
        rt_aeabi_memclr(&overlay->slides[i], sizeof(OverlaySlide));
        overlay->slides[i].offset = 330;
    }
}

} /* extern "C" */
