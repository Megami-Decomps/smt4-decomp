/* NON_MATCHING: 117 lines (65 by shape), one instruction short (262 rows against 263). Same calls, strings, pool
 * and stores as retail except: (1) retail keeps the constant 1 in r7 and the globals' base in r8, the build the
 * other way round (most of the differing lines); (2) retail performs both stores to unk1C (`vstr s16, [r4, #28]`
 * with 1.0, later 0.0) and so loads 0.5, 1.0, 0.0 into s2, s16, s1, where armcc drops this source's first store
 * and loads 1.0 only before the sprite calls (a `volatile` unk1C keeps it and leaves 48 lines, but nothing shows
 * the field is shared with another thread, so it is not declared so); (3) retail sets 640 and 320 through r1 and
 * r2 before two stores, the build one after the other through r0. The key and command tables are this unit's
 * own data (the image's bytes at 0x405e2c and 0x405e68). */
#include "saveLoadUI/saveLoadUI.h"
#include "shard/Sys44de28.h"
#include "code/Code002c_Smt4.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SaveLoadProcess.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"
#include "quest_center/qcMain.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleDevil.h"

/* Animation tables for paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {380, 0, 30, 0, 8, 0, 0},
    {460, 0, 30, 0, 8, 0, 0},
};
static const SpriteAnimationCommand sCommands[] = {
    {0, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {4, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {
SaveTableImage *gameDataBlocksGetTable(void);

s32 FUN_001c8e28(u32 handle);
void saveDataNotifyNoop(u32 handle);
s32 saveLoadUIDrawCaptionAndShade(u32 handle);
s32 FUN_00214a60(u32 handle);
u32 fileSlotLoad(u32 id);

/* Opens the save/load screen: allocates its work area, starts its update and draw tasks, backs up the game data
 * the screen may overwrite, requests its files and sets up its sprites and state. */
void saveLoadUICreate(void)
{
    g_saveLoadUIFlags.unk00 = 0;
    g_saveLoadUIFlags.unk01 = 0;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 384);
    g_saveLoadUIFlags.worker = (Worker *)asdMemAlloc(0x10000, 0x100, 0, sizeof(SaveLoadUIWork), 1);
    SaveLoadUIWork *ui = (SaveLoadUIWork *)g_saveLoadUIFlags.worker;
    ui->unk04 = 0;
    ui->task = asdProcessCreateSimple((const s8 *)"SAVELOAD_UI C", 2, 0, 0, FUN_001c8e28, saveDataNotifyNoop, 0);
    taskCreateDraw((const s8 *)"SAVELOAD_UI UD", 0x7F, 0, 0, saveLoadUIDrawCaptionAndShade, NULL, 0, (void *)ui->task);
    taskCreateDraw((const s8 *)"SAVELOAD_UI UDD", 0xDD, 0, 0, saveLoadUIDrawCaptionAndShade, NULL, 0, (void *)ui->task);
    taskCreateDraw((const s8 *)"SAVELOAD_UI D", 0xE8, 0, 0, FUN_00214a60, NULL, 0, (void *)ui->task);
    ui->state = 0;
    ui->unk0C = 0;
    g_saveLoadUIFlags.openedSlot = g_saveLoadUIFlags.lastSlot;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 583);
    ui->screen.backupTable = (SaveTableImage *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(SaveTableImage), 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 584);
    ui->screen.backupConfig = (ConfigSettingsImage *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(ConfigSettingsImage), 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 585);
    ui->screen.backupSave = (GameSaveBody *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(GameSaveBody), 1);
    *ui->screen.backupTable = *gameDataBlocksGetTable();
    *ui->screen.backupConfig = *(ConfigSettingsImage *)configGetSettings();
    *ui->screen.backupSave = *(GameSaveBody *)gameDataBlocksGetSaveData();
    ui->screen.equipment = ((GameSaveBody *)gameDataBlocksGetSaveData())->slots.player.equipped;

    ui->screen.scriptData = 0;
    ui->screen.messageData = 0;
    ui->screen.unk248 = 0;
    asdLoadFileAsyncSimple("saveLoadUI/saveloadUI.bf", &ui->screen.scriptData, 0);
    asdLoadFileAsyncSimple("saveLoadUI/saveloadUI.mbm", &ui->screen.messageData, 0);
    asdTMTexTableLoadSprites(0x36);
    asdTMTexTableLoadEntryAsync(0x36, 0);
    fileSlotLoad(0x3D);
    ui->screen.model = asdMdlManagerCreateSecondList("player/pl_dammy.bam", 7);

    ui->screen.unk374 = 0.5f;
    ui->screen.selectedSlot = g_saveLoadUIFlags.lastSlot;
    ui->screen.inputBlocked = 0;
    ui->screen.unk1C = 1.0f;
    ui->screen.unk24 = 0;
    ui->screen.slotX = 0.0f;
    ui->screen.slotY = 0.0f;
    ui->screen.unk48 = 0;
    ui->screen.unk54 = 0;
    ui->screen.unk55 = 0;
    ui->screen.unk73 = 0;
    ui->screen.unk72 = 0;
    ui->screen.unk60 = 4;
    ui->screen.unk58 = 0;
    ui->screen.unk354 = 0;
    ui->screen.unk37A = 0;
    ui->screen.pending = 0;
    ui->screen.panelX[2] = 800;
    ui->screen.panelX[1] = 640;
    ui->screen.panelX[0] = 320;
    ui->screen.unk35C = 0;
    ui->screen.unk5C = 0;
    ui->screen.unk70 = 0;
    ui->screen.unk71 = 0;
    ui->screen.unk20 = 30.0f;
    ui->screen.unk1C = 0.0f;
    ui->screen.unk2C = 0.5f;
    ui->screen.unk30 = 0.5f;

    drawParameterBlockClear(&ui->screen.resources);
    paramsInit(&ui->screen.resources, sPositionKeys, sizeof(sPositionKeys), NULL, 0, NULL, 0, NULL, 0, sCommands,
               sizeof(sCommands));
    uiSpriteStateInitFromSource(&ui->screen.sprites[0], 0x36, 1, &ui->screen.resources, 201, 1.0f);
    uiSpriteInitializeState(&ui->screen.sprites[1], 0x36, 0x51, 2, &ui->screen.resources, 2, 1.0f);
    uiSpriteInitializeState(&ui->screen.sprites[2], 0x36, 0x52, 2, &ui->screen.resources, 2, 1.0f);
    uiSpriteSetKeyframe(&ui->screen.sprites[0], 1, 0);
    uiSpriteSetKeyframe(&ui->screen.sprites[1], 3, 0);
    uiSpriteSetKeyframe(&ui->screen.sprites[2], 4, 0);
    buttonHelpSetPreset(0xA8);

    memClear(&ui->screen.slots[0], sizeof(SavePreviewSlot));
    memClear(&ui->screen.slots[1], sizeof(SavePreviewSlot));
    ui->screen.available[0] = 0;
    ui->screen.available[1] = 0;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\saveLoadUI\\saveLoadUI.cpp", 688);
    ui->screen.player = (PlayerDataIV *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(PlayerDataIV), 1);
    ui->screen.selectedSlot = g_saveLoadUIFlags.lastSlot;
    ui->screen.unk378 = 0;
}

} /* extern "C" */
