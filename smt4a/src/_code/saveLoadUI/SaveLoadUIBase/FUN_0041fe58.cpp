/* NON_MATCHING: same instructions as retail apart from allocation: retail keeps ui in r5 and isLoad in r4 (the build swaps them, and the 0/1 constants in r7/r8), and stores isLoad before option */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "saveLoadUI/SaveLoadInteractionsA.h"

extern "C" {

/* The save/load screen's work block (0x730+ bytes; only the fields set here, by their offsets). */
typedef struct SaveLoadUI {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ u8 isLoad;
    /* 0x006 */ u8 option;
    /* 0x007 */ u8 stage;
    /* 0x008 */ u32 step;
    /* 0x00C */ u8 stepCounter;
    /* 0x00D */ u8 previousStage;
    /* 0x00E */ u8 unk00e[5];
    /* 0x013 */ u8 processState;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ u32 mode;
    /* 0x01C */ void *tableCopy;
    /* 0x020 */ void *settingsCopy;
    /* 0x024 */ void *saveCopy;
    /* 0x028 */ u8 header[0x10];
    /* 0x038 */ u32 uiScript;
    /* 0x03C */ u32 uiMessages;
    /* 0x040 */ u8 unk040[8];
    /* 0x048 */ u32 flagId;
    /* 0x04C */ u32 headerKind;
    /* 0x050 */ u8 flagValue;
    /* 0x051 */ u8 unk051[3];
    /* 0x054 */ void *buffer;
    /* 0x058 */ u8 unk058[8];
    /* 0x060 */ s32 selected;
    /* 0x064 */ u8 unk064[8];
    /* 0x06C */ u8 slots[5][0x80];
    /* 0x2EC */ u8 slotUsed[8];
    /* 0x2F4 */ u32 unk2f4;
    /* 0x2F8 */ s32 cursor;
    /* 0x2FC */ s32 cursorEnd;
    /* 0x300 */ u32 unk300;
    /* 0x304 */ s32 scrollTop;
    /* 0x308 */ s32 scrollRange;
    /* 0x30C */ u8 unk30c;
    /* 0x30D */ u8 unk30d[0xCB];
    /* 0x3D8 */ u8 list[0x7C];
    /* 0x454 */ u8 params[0x20];
    /* 0x474 */ UiSpriteState sprite0;
    /* 0x500 */ UiSpriteState sprite1;
    /* 0x58C */ UiSpriteState sprite2;
    /* 0x618 */ u32 unk618;
    /* 0x61C */ f32 unk61c;
    /* 0x620 */ u8 unk620[0x10C];
    /* 0x72C */ u8 unk72c;
} SaveLoadUI;

/* The screen's globals: two state bytes, the four unlock flags and the saved cursor. */
typedef struct SaveLoadGlobals {
    u8 state;
    u8 unk01;
    u8 flag470;
    u8 flag471;
    u8 flag558;
    u8 flag559;
    u8 unk06[0xE];
    s32 savedCursor;
} SaveLoadGlobals;

extern SaveLoadGlobals g_saveLoadUIBase;
extern const char DAT_00533ec0[];
extern const char DAT_00533f18[];
extern const char DAT_00533efc[];

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sSaveLoadPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {380, 0, 30, 0, 8, 0, 0},
    {460, 0, 30, 0, 8, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {60, 0, 30, 0, 5, 0, 0},
    {90, 0, 30, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {30, 0, -30, 0, 3, 0, 0},
};
static const UiSpriteScalarKey sSaveLoadAlphaKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
};
static const SpriteAnimationCommand sSaveLoadAnimations[] = {
    {1, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {4, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void *gameDataBlocksGetTable(void);
void *configGetSettings(void);
void *gameDataBlocksGetSaveData(void);
s32 gameFlagIsSet(u32 flag);
void asdTMTexTableLoadSprites(u32 table);
void loadSlotRequestAsync(u32 slot, u32 arg);
void FUN_003f86f0(void);
void sysMemClear(void *block, u32 size);
void paramsClearPacket(void *packet);

u8 saveLoadProcessGetState(void);
void sysPlaySe(u32 id);
void gridNavigationConfigure(void *list, s32 count, s32 rows, s32 columns, s32 a, s32 b);
void flaggedEntrySetValueA(void *list, s32 value);
void scrollOwnerSetValue(void *list, s32 value);
void buttonHelpSetText(s32 a, u32 color);

/* Opens the save/load screen: snapshots the game data, config and save data, starts loading its
 * files and sprites, sets up the five slots and the cursor from the saved one, and enters the
 * first step. */
void FUN_0041fe58(SaveLoadUI *ui, s32 isLoad, u8 option)
{
    ui->isLoad = (u8)isLoad;
    ui->option = option;
    asdDebugTrace(DAT_00533ec0, 2155);
    ui->tableCopy = asdMemoryAlloc(0x10000, 0x100, 0, 0x80, 1);
    asdDebugTrace(DAT_00533ec0, 2156);
    ui->settingsCopy = asdMemoryAlloc(0x10000, 0x100, 0, 8, 1);
    asdDebugTrace(DAT_00533ec0, 2157);
    ui->saveCopy = asdMemoryAlloc(0x10000, 0x100, 0, 0x2A71C, 1);
    memcpy((u32 *)ui->tableCopy, (const u32 *)gameDataBlocksGetTable(), 0x80);
    memcpy(ui->settingsCopy, configGetSettings(), 8);
    memcpy((u32 *)ui->saveCopy, (const u32 *)gameDataBlocksGetSaveData(), 0x2A71C);
    memcpy((u32 *)ui->header, (const u32 *)((u8 *)gameDataBlocksGetSaveData() + 8), 0xE);
    asdLoadFileAsyncSimple(DAT_00533f18, &ui->uiScript, 0);
    asdLoadFileAsyncSimple(DAT_00533efc, &ui->uiMessages, 0);
    if (isLoad == 0) {
        ui->headerKind = 9;
        ui->flagId = 0x471;
        ui->flagValue = 1;
    } else {
        ui->flagId = 0x470;
        ui->headerKind = 8;
        ui->flagValue = (u8)gameFlagIsSet(0x470);
    }
    g_saveLoadUIBase.flag470 = (u8)gameFlagIsSet(0x470);
    g_saveLoadUIBase.flag471 = (u8)gameFlagIsSet(0x471);
    g_saveLoadUIBase.flag558 = (u8)gameFlagIsSet(0x558);
    g_saveLoadUIBase.flag559 = (u8)gameFlagIsSet(0x559);
    asdTMTexTableLoadSprites(0x2B);
    asdTMTexLoadMainHeap(0x2B, 0);
    loadSlotRequestAsync(0x3D, 0);
    FUN_003f86f0();
    for (s32 i = 0; i < 5; i++) {
        sysMemClear(ui->slots[i], 0x80);
        ui->slotUsed[i] = 0;
    }
    ui->unk2f4 = 0;
    asdDebugTrace(DAT_00533ec0, 2374);
    ui->buffer = asdMemoryAlloc(0x100, 0x100, 0, 100, 1);
    paramsClearPacket(ui->params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(ui->params), sSaveLoadPositionKeys, sizeof(sSaveLoadPositionKeys), sSaveLoadAlphaKeys, sizeof(sSaveLoadAlphaKeys), NULL, 0, NULL, 0, sSaveLoadAnimations, sizeof(sSaveLoadAnimations));
    uiSpriteStateInitFromSource(&ui->sprite0, 0x2B, 1, (UiResourceParameters *)(ui->params), 0xC9, 1.0f);
    uiSpriteInitializeState(&ui->sprite1, 0x2B, 0x51, 2, (UiResourceParameters *)(ui->params), 2, 1.0f);
    uiSpriteInitializeState(&ui->sprite2, 0x2B, 0x52, 2, (UiResourceParameters *)(ui->params), 2, 1.0f);
    ui->unk618 = 0;
    ui->unk61c = 0.0f;
    ui->unk30c = 0;
    ui->unk72c = 0;
    ui->processState = saveLoadProcessGetState();
    ui->mode = 2;
    ui->unk300 = 0;
    sysPlaySe(0xAA);
    ui->scrollRange = 0;
    saveLoadUiRebuildTouchRegions(reinterpret_cast<SaveSlotHeaderWork *>(ui), 1);
    s32 cursor = g_saveLoadUIBase.savedCursor;
    s32 top = cursor - 1;

    if (top < 0) {
        top = 0;
    }
    ui->cursor = cursor;
    s32 range = cursor - top;

    ui->cursorEnd = cursor;
    ui->selected = cursor;
    if (range < 0) {
        range = 0;
    }
    ui->scrollTop = top;
    ui->scrollRange = range;
    gridNavigationConfigure(ui->list, 5, 2, 1, 1, 1);
    flaggedEntrySetValueA(ui->list, range);
    scrollOwnerSetValue(ui->list, top);
    buttonHelpSetText(0, 0xF4F4F4FF);
    u8 stage = ui->stage;

    ui->step = 0;
    ui->stage = 1;
    ui->previousStage = stage;
    ui->stepCounter = 0;
    g_saveLoadUIBase.state = 0;
    g_saveLoadUIBase.unk01 = 0;
}

}
