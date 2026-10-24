/* NON_MATCHING: readable rewrite from retail disassembly compiles (217 vs 204 rows); retail copies the 12-entry handler table with unrolled ldrd/ldm pairs and reads the string/table addresses through literal-pool constants */
#include "common.h"

// A player/partner name buffer: 16 bytes plus a terminator halfword, starts on a halfword.
__packed struct NameBuffer {
    u32 words[4];
    u16 tail;
};

// Pointer-to-member style handler slot ({function, this-adjustment}).
struct HandlerEntry {
    void* function;
    u32 adjust;
};

struct HandlerTable {
    HandlerEntry entries[12];
};

// Name-entry form: only the members initialised here.
struct NameForm {
    /* 0x000 */ u8 unk000;
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u8 unk002[2];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u8 unk008[8];
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u8 unk018[8];
    /* 0x020 */ u8 unk020;
    /* 0x021 */ u8 unk021;
    /* 0x022 */ u8 unk022;
    /* 0x023 */ u8 unk023[5];
    /* 0x028 */ u8 unk028;
    /* 0x029 */ u8 unk029;
    /* 0x02a */ u8 unk02a;
    /* 0x02b */ u8 unk02b;
    /* 0x02c */ u16 unk02c;
    /* 0x02e */ u16 unk02e;
    /* 0x030 */ u8 unk030[0x74];
    /* 0x0a4 */ u32 unk0a4;
    /* 0x0a8 */ u32 unk0a8;
    /* 0x0ac */ u32 unk0ac;
    /* 0x0b0 */ NameBuffer name;
    /* 0x0c2 */ NameBuffer originalName;
    /* 0x0d4 */ HandlerTable handlers;
    /* 0x134 */ u8 unk134[0x580 - 0x134];
    /* 0x580 */ u8 keyboardGrid[0x64];
    /* 0x5e4 */ u8 candidateGrid[0x64];
    /* 0x648 */ u8 unk648;
    /* 0x649 */ u8 mode;
    /* 0x64a */ u8 unk64a[2];
    /* 0x64c */ u32 layoutFile;
    /* 0x650 */ u32 scriptFile;
    /* 0x654 */ u32 resource;
    /* 0x658 */ u32 unk658;
    /* 0x65c */ u8 params[0x20];
    /* 0x67c */ u8 cursorSprite[0x8c];
    /* 0x708 */ u8 blinkSprite[0x8c];
    /* 0x794 */ u8 frameSprite[0x8c];
    /* 0x820 */ u8 unk820[0x940 - 0x820];
    /* 0x940 */ u16 titleId;
    /* 0x942 */ u8 unk942[2];
    /* 0x944 */ u8 unk944;
};

extern "C" {

extern HandlerTable DAT_00404f48;
extern u8 DAT_004055d0[0x18];
extern u8 DAT_004055e8[0x24];
extern u8 DAT_0040560c[0x70];

NameBuffer* gameGetPlayerName(void);
NameBuffer* gameDataGetPlayerName(void);
NameBuffer* gameDataGetSecondName(void);
void asdTMTexTableLoadSprites(s32 id);
void FUN_002c58c8(s32 id, s32 arg);
void FUN_0029f848(void* grid, s32 a, s32 b, s32 c, s32 d, s32 e);
u32 asdLoadFileSyncDefault(const char* path);
u32 FUN_00297060(u32 scriptFile, u32 layoutFile);
void drawParameterBlockClear(void);
void paramsInit(void* block, void* a, s32 aSize, void* b, s32 bSize, s32 c, s32 d, s32 e, s32 f, void* g, s32 gSize);
void FUN_002bd954(void* sprite, s32 sheet, s32 index, void* params, f32 scale, s32 flag);
void spriteStartAnimationByIndex(void* sprite, s32 index);
void timerStart(void* sprite, s32 a, s32 b);
void uiSpriteSetImageKeyframe(void* sprite, s32 a, s32 b);
void buttonHelpCreate(void);

// Sets up the name-entry form for the player (mode 0/-1), the main character (1) or the
// second character (2): installs the handler table, copies the current name and creates
// the keyboard/candidate grids, layout resources and the three cursor sprites.
void FUN_003984ac(NameForm* form, u8 mode)
{
    for (s32 i = 0; i < 12; i++) form->handlers.entries[i] = DAT_00404f48.entries[i];
    form->mode = mode;
    form->unk000 = 0;
    form->unk001 = 0;
    form->unk004 = 0;
    form->unk010 = 0;
    form->unk014 = 0;
    form->unk020 = 0;
    form->unk028 = 0;
    form->unk029 = 0;
    form->unk022 = 0;
    form->unk02c = 0;
    form->unk02e = 0;
    form->unk02a = 0;
    form->unk02b = 0;
    form->unk0a4 = 0;
    form->unk0a8 = 0;
    form->unk0ac = 0;
    form->unk944 = 0;
    if (form->mode == 0 || (s8)form->mode == -1) form->name = *gameGetPlayerName();
    if (form->mode == 1) form->name = *gameDataGetPlayerName();
    if (form->mode == 2) form->name = *gameDataGetSecondName();
    form->originalName = form->name;

    asdTMTexTableLoadSprites(0x2e);
    FUN_002c58c8(0x2e, 0);
    FUN_0029f848(form->keyboardGrid, 0x69, 7, 0xf, 1, 1);
    FUN_0029f848(form->candidateGrid, 3, 1, 3, 1, 1);
    form->layoutFile = asdLoadFileSyncDefault("name/name.mbm");
    form->scriptFile = asdLoadFileSyncDefault("name/name.bf");
    form->resource = FUN_00297060(form->scriptFile, form->layoutFile);
    drawParameterBlockClear();
    paramsInit(form->params, DAT_004055d0, 0x18, DAT_004055e8, 0x24, 0, 0, 0, 0, DAT_0040560c, 0x70);
    FUN_002bd954(form->cursorSprite, 0x2e, 0, form->params, 1.0f, 1);
    spriteStartAnimationByIndex(form->cursorSprite, 0);
    FUN_002bd954(form->blinkSprite, 0x2e, 0, form->params, 1.0f, 1);
    timerStart(form->blinkSprite, 0, 0);
    FUN_002bd954(form->frameSprite, 0x2e, 0, form->params, 1.0f, 1);
    uiSpriteSetImageKeyframe(form->frameSprite, 0, 0);
    buttonHelpCreate();
    form->titleId = 0x95;
}

} /* extern "C" */
