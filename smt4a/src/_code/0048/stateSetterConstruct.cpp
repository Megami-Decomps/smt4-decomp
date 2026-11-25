#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match3_NameFormStateA.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "ui/ParamsClearPacket.h"
#include "gamedata/GameDataAccess.h"
#include "event/2dEvent/EventEffect.h"
#include "code/Code002c_AsdTMTexTable.h"

extern "C" {

extern NameFormStateA::CallbackTable DAT_00532afc;
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

NameFormBufferA *gameBlockGetArea221AA(void);
void asdTMTexTableLoadSprites(s32 id);
void gridNavigationConfigure(void* grid, s32 a, s32 b, s32 c, s32 d, s32 e);
void campButtonHelpAcquire(void);
u16 ifTouchGetButtonHelpValue(void);

/* Sets up the name-entry form for the player (mode 0/-1), the saved player (1), an area block's
 * name (2) or another (4): installs the handler table, copies the current name and creates
 * the keyboard/candidate grids, layout resources and the three cursor sprites. */
void stateSetterConstruct(NameFormStateA *form, s8 mode)
{
    form->handlerTable.phase00 = DAT_00532afc.phase00;
    form->handlerTable.phase01 = DAT_00532afc.phase01;
    form->handlerTable.phase02 = DAT_00532afc.phase02;
    form->handlerTable.phase03 = DAT_00532afc.phase03;
    form->handlerTable.phase04 = DAT_00532afc.phase04;
    form->handlerTable.phase05 = DAT_00532afc.phase05;
    form->handlerTable.phase06 = DAT_00532afc.phase06;
    form->handlerTable.phase07 = DAT_00532afc.phase07;
    form->handlerTable.phase08 = DAT_00532afc.phase08;
    form->handlerTable.phase09 = DAT_00532afc.phase09;
    form->handlerTable.phase10 = DAT_00532afc.phase10;
    form->handlerTable.phase11 = DAT_00532afc.phase11;
    form->mode = mode;
    form->complete = 0;
    form->phase = 0;
    form->unk004 = 0;
    form->keyboard.cursorColumn = 0;
    form->keyboard.cursorRow = 0;
    form->keyboard.page = 0;
    form->keyboard.alternate = 0;
    form->keyboard.kindListHidden = 0;
    form->text.length = 0;
    form->keyboard.unk02C = 0;
    form->keyboard.unk02E = 0;
    form->keyboard.unk02a[0] = 0;
    form->keyboard.unk02a[1] = 0;
    form->keyboard.sideOffset = 0;
    form->keyboard.unk0A8 = 0;
    form->keyboard.backgroundOffset = 0;
    form->finished = 0;
    if (form->mode == 0 || form->mode == -1) form->names.edited = *(const NameFormBufferA *)gameGetPlayerName();
    if (form->mode == 1) form->names.edited = *(const NameFormBufferA *)gameDataGetPlayerName();
    if (form->mode == 2) form->names.edited = *gameBlockGetArea221AA();
    if (form->mode == 4) form->names.edited = *(const NameFormBufferA *)FUN_002840ac();
    form->names.original = form->names.edited;

    asdTMTexTableLoadSprites(0x23);
    asdTMTexTablePrepareNodeImage(0x23, 0);
    gridNavigationConfigure(form->keyboardGrid, 0x69, 7, 0xf, 1, 1);
    gridNavigationConfigure(form->kindList, 4, 1, 4, 1, 1);
    form->layoutFile = asdLoadFileSyncDefault("name/name.mbm");
    form->scriptFile = asdLoadFileSyncDefault("name/name.bf");
    form->script = scrScriptProcessCreate(form->scriptFile, form->layoutFile);
    paramsClearPacket(&form->params);
    paramsInit(&form->params, sNameFormPositionKeys, sizeof(sNameFormPositionKeys),
        sNameFormAlphaKeys, sizeof(sNameFormAlphaKeys), NULL, 0, NULL, 0, sNameFormCommands, sizeof(sNameFormCommands));
    uiSpriteStateInitFromSource(&form->cursorSprite, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSelectAnim(&form->cursorSprite, 0);
    uiSpriteStateInitFromSource(&form->blinkSprite, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSetKeyframe(&form->blinkSprite, 0, 0);
    uiSpriteStateInitFromSource(&form->animation, 0x23, 0, &form->params, 1, 1.0f);
    uiSpriteSetImageKeyframe(&form->animation, 0, 0);
    campButtonHelpAcquire();
    DAT_00588108 = ifTouchGetButtonHelpValue();
    form->activationSound = 0x97;
}

} /* extern "C" */
