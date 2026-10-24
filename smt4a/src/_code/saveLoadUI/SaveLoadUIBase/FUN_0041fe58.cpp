/* NON_MATCHING: the allocation/copy sequence and the slot-clearing loop are scheduled differently from retail; the screen setup is the same. */
#include "common.h"

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
    /* 0x474 */ u8 sprite0[0x8C];
    /* 0x500 */ u8 sprite1[0x8C];
    /* 0x58C */ u8 sprite2[0x8C];
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
extern u8 DAT_00533d50[];
extern u8 DAT_00533dc8[];
extern u8 DAT_00533de0[];

void *asdMemoryAlloc(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void *gameDataBlocksGetTable(void);
void *configGetSettings(void);
void *gameDataBlocksGetSaveData(void);
void rt_memcpy_w(void *destination, const void *source, u32 size);
void wordPairCopy(void *destination, const void *source);
void asdLoadFileAsyncSimple(const char *path, u32 *out, s32 arg);
s32 gameFlagIsSet(u32 flag);
void asdTMTexTableLoadSprites(u32 table);
void asdTMTexLoadMainHeap(u32 table, u32 arg);
void loadSlotRequestAsync(u32 slot, u32 arg);
void FUN_003f86f0(void);
void sysMemClear(void *block, u32 size);
void paramsClearPacket(void *packet);
void paramsInit(void *packet, const void *a, u32 aSize, const void *b, u32 bSize, const void *c, u32 cSize, u32 d, u32 e,
                const void *f, u32 fSize);
void FUN_0014e188(void *sprite, u32 group, u32 id, void *owner, u32 flag, f32 scale);
void uiSpriteInitializeState(void *sprite, u32 group, u32 id, u32 size, void *owner, u32 anim, f32 scale);
u8 saveLoadProcessGetState(void);
void sysPlaySe(u32 id);
void FUN_0041f020(SaveLoadUI *ui, s32 arg);
void FUN_00203b40(void *list, s32 count, s32 rows, s32 columns, s32 a, s32 b);
void flaggedEntrySetValueA(void *list, s32 value);
void scrollOwnerSetValue(void *list, s32 value);
void FUN_0019de98(s32 a, u32 color);

/* Opens the save/load screen: snapshots the game data, config and save data, starts loading its
 * files and sprites, sets up the five slots and the cursor from the saved one, and enters the
 * first step. */
void FUN_0041fe58(SaveLoadUI *ui, s32 isLoad, u8 option)
{
    ui->isLoad = (u8)isLoad;
    ui->option = option;
    ui->tableCopy = asdMemoryAlloc(0x10000, 0x100, 0, 0x80, 1);
    ui->settingsCopy = asdMemoryAlloc(0x10000, 0x100, 0, 8, 1);
    ui->saveCopy = asdMemoryAlloc(0x10000, 0x100, 0, 0x2A71C, 1);
    rt_memcpy_w(ui->tableCopy, gameDataBlocksGetTable(), 0x80);
    wordPairCopy(ui->settingsCopy, configGetSettings());
    rt_memcpy_w(ui->saveCopy, gameDataBlocksGetSaveData(), 0x2A71C);
    rt_memcpy_w(ui->header, (u8 *)gameDataBlocksGetSaveData() + 8, 0xE);
    asdLoadFileAsyncSimple("saveLoadUI/saveloadUI.bf", &ui->uiScript, 0);
    asdLoadFileAsyncSimple("saveLoadUI/saveloadUI.mbm", &ui->uiMessages, 0);
    if (isLoad != 0) {
        ui->flagId = 0x470;
        ui->headerKind = 8;
        ui->flagValue = (u8)gameFlagIsSet(0x470);
    } else {
        ui->headerKind = 9;
        ui->flagId = 0x471;
        ui->flagValue = 1;
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
    ui->buffer = asdMemoryAlloc(0x100, 0x100, 0, 100, 1);
    paramsClearPacket(ui->params);
    paramsInit(ui->params, DAT_00533d50, 0x78, DAT_00533dc8, 0x18, NULL, 0, 0, 0, DAT_00533de0, 0xE0);
    FUN_0014e188(ui->sprite0, 0x2B, 1, ui->params, 0xC9, 1.0f);
    uiSpriteInitializeState(ui->sprite1, 0x2B, 0x51, 2, ui->params, 2, 1.0f);
    uiSpriteInitializeState(ui->sprite2, 0x2B, 0x52, 2, ui->params, 2, 1.0f);
    ui->unk618 = 0;
    ui->unk61c = 0.0f;
    ui->unk30c = 0;
    ui->unk72c = 0;
    ui->processState = saveLoadProcessGetState();
    ui->mode = 2;
    ui->unk300 = 0;
    sysPlaySe(0xAA);
    ui->scrollRange = 0;
    FUN_0041f020(ui, 1);
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
    FUN_00203b40(ui->list, 5, 2, 1, 1, 1);
    flaggedEntrySetValueA(ui->list, range);
    scrollOwnerSetValue(ui->list, top);
    FUN_0019de98(0, 0xF4F4F4FF);
    u8 stage = ui->stage;

    ui->step = 0;
    ui->stage = 1;
    ui->previousStage = stage;
    ui->stepCounter = 0;
    g_saveLoadUIBase.state = 0;
    g_saveLoadUIBase.unk01 = 0;
}

}
