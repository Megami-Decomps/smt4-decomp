#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "ui/UiSpriteApi.h"
#include "ui/ParamsClearPacket.h"
#include "gamedata/GameDataAccess.h"
#include "event/2dEvent/EventEffect.h"
#include "code/Code002c_AsdTMTexTable.h"

/* A player/partner name buffer: 16 bytes plus a terminator halfword, starts on a halfword. */
__packed struct NameBuffer {
    u32 words[4];
    u16 tail;
};

/* Pointer-to-member style handler slot ({function, this-adjustment}). */
struct HandlerEntry {
    void* function;
    u32 adjust;
};

/* The form's twelve handler slots, copied one by one from the constant table (one member per slot). */
struct HandlerTable {
    HandlerEntry handler00;
    HandlerEntry handler01;
    HandlerEntry handler02;
    HandlerEntry handler03;
    HandlerEntry handler04;
    HandlerEntry handler05;
    HandlerEntry handler06;
    HandlerEntry handler07;
    HandlerEntry handler08;
    HandlerEntry handler09;
    HandlerEntry handler10;
    HandlerEntry handler11;
};

/* Name-entry form (Apocalypse layout): only the members initialised here. */
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
    /* 0x134 */ u8 unk134[0x198 - 0x134];
    /* 0x198 */ u8 keyboardGrid[0x64];
    /* 0x1fc */ u8 candidateGrid[0x64];
    /* 0x260 */ u8 unk260;
    /* 0x261 */ s8 mode;
    /* 0x262 */ u8 unk262[2];
    /* 0x264 */ void *layoutFile;
    /* 0x268 */ void *scriptFile;
    /* 0x26c */ ScriptProcess *resource;
    /* 0x270 */ u32 unk270;
    /* 0x274 */ UiResourceParameters params;
    /* 0x294 */ UiSpriteState cursorSprite;
    /* 0x320 */ UiSpriteState blinkSprite;
    /* 0x3ac */ UiSpriteState frameSprite;
    /* 0x438 */ u8 unk438[0x55e - 0x438];
    /* 0x55e */ u16 titleId;
    /* 0x560 */ u8 unk560[2];
    /* 0x562 */ u8 unk562;
};

extern "C" {

extern HandlerTable DAT_00532afc;
extern u16 DAT_00588108; /* the button help value saved while the form is open */
/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sNameFormPositionKeys[] = {
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
};
static const UiSpriteScalarKey sNameFormAlphaKeys[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.3f, 1.0f, 20, 0, 0},
    {1.0f, 0.3f, 40, 0, 0},
};
static const SpriteAnimationCommand sNameFormCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

NameBuffer* gameBlockGetArea221AA(void);
void asdTMTexTableLoadSprites(s32 id);
void gridNavigationConfigure(void* grid, s32 a, s32 b, s32 c, s32 d, s32 e);
void campButtonHelpAcquire(void);
u16 ifTouchGetButtonHelpValue(void);

/* Sets up the name-entry form for the player (mode 0/-1), the saved player (1), an area block's
 * name (2) or another (4): installs the handler table, copies the current name and creates
 * the keyboard/candidate grids, layout resources and the three cursor sprites. */
void stateSetterConstruct(NameForm* form, s8 mode)
{
    form->handlers.handler00 = DAT_00532afc.handler00;
    form->handlers.handler01 = DAT_00532afc.handler01;
    form->handlers.handler02 = DAT_00532afc.handler02;
    form->handlers.handler03 = DAT_00532afc.handler03;
    form->handlers.handler04 = DAT_00532afc.handler04;
    form->handlers.handler05 = DAT_00532afc.handler05;
    form->handlers.handler06 = DAT_00532afc.handler06;
    form->handlers.handler07 = DAT_00532afc.handler07;
    form->handlers.handler08 = DAT_00532afc.handler08;
    form->handlers.handler09 = DAT_00532afc.handler09;
    form->handlers.handler10 = DAT_00532afc.handler10;
    form->handlers.handler11 = DAT_00532afc.handler11;
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
    form->unk562 = 0;
    if (form->mode == 0 || form->mode == -1) form->name = *(const NameBuffer *)gameGetPlayerName();
    if (form->mode == 1) form->name = *(const NameBuffer *)gameDataGetPlayerName();
    if (form->mode == 2) form->name = *gameBlockGetArea221AA();
    if (form->mode == 4) form->name = *(const NameBuffer *)FUN_002840ac();
    form->originalName = form->name;

    asdTMTexTableLoadSprites(0x23);
    asdTMTexTablePrepareNodeImage(0x23, 0);
    gridNavigationConfigure(form->keyboardGrid, 0x69, 7, 0xf, 1, 1);
    gridNavigationConfigure(form->candidateGrid, 4, 1, 4, 1, 1);
    form->layoutFile = asdLoadFileSyncDefault("name/name.mbm");
    form->scriptFile = asdLoadFileSyncDefault("name/name.bf");
    form->resource = scrScriptProcessCreate(form->scriptFile, form->layoutFile);
    paramsClearPacket(&form->params);
    paramsInit(&form->params, sNameFormPositionKeys, sizeof(sNameFormPositionKeys),
        sNameFormAlphaKeys, sizeof(sNameFormAlphaKeys), NULL, 0, NULL, 0, sNameFormCommands, sizeof(sNameFormCommands));
    uiSpriteStateInitFromSource(&form->cursorSprite, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSelectAnim(&form->cursorSprite, 0);
    uiSpriteStateInitFromSource(&form->blinkSprite, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSetKeyframe(&form->blinkSprite, 0, 0);
    uiSpriteStateInitFromSource(&form->frameSprite, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSetImageKeyframe(&form->frameSprite, 0, 0);
    campButtonHelpAcquire();
    DAT_00588108 = ifTouchGetButtonHelpValue();
    form->titleId = 0x97;
}

} /* extern "C" */
