/* NON_MATCHING: only the prologue order differs (retail: mov r8,#0; cmp r0,#6; mov r7,#3; build hoists the 3 first). */
#include "common.h"
#include "classes/Obj55ca08.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "ui/PartyPanelState.h"
#include <stddef.h>

struct ScriptRunState;
struct ScriptTable;

/* The panel object the appraisal screen owns; slot 3 synchronizes it with the selection. */
class AppraisePanel {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void synchronize(const u8 *selection);
};

struct AppraiseEntry {
    u16 id;
    u16 unk02[2];
};

struct AppraiseScene {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 mode;
    /* 0x00008 */ s32 state;
    /* 0x0000C */ s32 frames;
    /* 0x00010 */ u8 unk00010[0x150];
    /* 0x00160 */ ScriptTable *table;
    /* 0x00164 */ u8 unk00164[4];
    /* 0x00168 */ ScriptRunState *script;
    /* 0x0016C */ u8 unk0016C[0x214];
    /* 0x00380 */ f32 point[2];
    /* 0x00388 */ u8 unk00388[0x20];
    /* 0x003A8 */ u8 animations[0x20];
    /* 0x003C8 */ TimerSlot slide;
    /* 0x00454 */ u8 unk00454[0x3D4];
    /* 0x00828 */ Obj55ca08 selection;
    /* 0x00864 */ u8 unk00864[0x9444];
    /* 0x09CA8 */ FlaggedValueHolder holder;
    u8 unk09D1C[0x9D1E - 0x9CA8 - sizeof(FlaggedValueHolder)];
    /* 0x09D1E */ AppraiseEntry entries[0x400];
    u8 unk0B51E[0x15D20 - 0xB51E];
    /* 0x15D20 */ u32 total;
    /* 0x15D24 */ u8 unk15D24[0x2C];
    /* 0x15D50 */ s16 touchCount;
    /* 0x15D52 */ u8 unk15D52[6];
    /* 0x15D58 */ u32 result[3];
    /* 0x15D64 */ u8 flagA;
    /* 0x15D65 */ u8 flagB;
    /* 0x15D68 */ s32 choice;
};
typedef char AppraiseSceneLayoutCheck[offsetof(AppraiseScene, selection) == 0x828 && sizeof(Obj55ca08) == 0x3C &&
    offsetof(AppraiseScene, holder) == 0x9CA8 && offsetof(AppraiseScene, entries) == 0x9D1E &&
    offsetof(AppraiseScene, total) == 0x15D20 && offsetof(AppraiseScene, choice) == 0x15D68 ? 1 : -1];

extern "C" {
u32 scrRunOpcodesStub(ScriptRunState *state);
u32 tableGroupFindEntryIndex(ScriptTable *table, const char *name);
void scrScriptProcessStartEntry(ScriptRunState *process, u32 entry);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
void FUN_00233240(void *animations, s32 value);
s32 uiAnimationAdvanceChannel(void *animations, s32 channel);
void FUN_00233410(const u8 *selection);
void FUN_00233818(Obj55ca08 *selection);
void ifTouchRegionClearAll(AppraisePanel *panel);
s32 FUN_0027ee9c(void);
void FUN_0029212c(u32 id);
void messageMainFinishWindow(void);
s32 messageMainTargetIsClear(void);
u32 FUN_0029c43c(u32 value, u8 flag);
void messageTargetSetValue(u32 value, s32 arg);
s32 sys43e188GetState(void);
void buttonHelpSetPreset(u32 preset);
void ifTouchRegionRemove(void);
void FUN_002b8ee0(TimerSlot *timer, s32 value);
void FUN_002328b4(void);
void sceneApplyTransaction(AppraiseScene *scene);
s32 vec2GetXInt(const void *object);
s32 vec2GetYInt(const void *object);
s8 uiSpriteGetCompletionState(const void *record);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);

/* The panel pointer is the selection object's word at +0x34 (scene +0x85C). */
static AppraisePanel *appraisePanel(AppraiseScene *scene)
{
    return reinterpret_cast<AppraisePanel *>(scene->selection.unk34);
}

/* Runs the appraisal screen's phases: intro script, wait, confirmation list, then the transaction. */
void FUN_003a2c48(AppraiseScene *scene)
{
    switch (scene->state) {
    case 0:
        scrScriptProcessStartEntry(scene->script, tableGroupFindEntryIndex(scene->table, "shop_Kantei1"));
        scrRunOpcodesStub(scene->script);
        scene->frames = 0;
        scene->result[0] = 0;
        scene->result[1] = 0;
        scene->result[2] = 0;
        scene->flagA = 0;
        scene->flagB = 0;
        scene->choice = -1;
        scene->state = 1;
        return;
    case 1:
        scrRunOpcodesStub(scene->script);
        scene->frames++;
        if (scene->frames >= 10 && (FUN_0027ee9c() || scrRunOpcodesStub(scene->script) == 2)) {
            FUN_002328b4();
            messageMainFinishWindow();
            scene->state = 2;
            scene->frames = 0;
        }
        break;
    case 2:
        if (sys43e188GetState()) {
            scrScriptProcessStartEntry(scene->script, tableGroupFindEntryIndex(scene->table, "shop_Kantei2"));
            scrRunOpcodesStub(scene->script);
            FUN_00233240(scene->animations, 0);
            buttonHelpSetPreset(0x77);
            scene->state = 3;
        }
        break;
    case 3:
        {
        TimerSlot *slide = &scene->slide;
        FUN_002b8ee0(slide, 0);
        pointConvertToFloat(scene->point, vec2GetXInt(slide), vec2GetYInt(slide));
        scrRunOpcodesStub(scene->script);
        if (uiSpriteGetCompletionState(slide)) {
            messageTargetSetValue(scene->total, 0);
            scene->state = 4;
        }
        }
        break;
    case 4:
        scrRunOpcodesStub(scene->script);
        scene->selection.synchronize(reinterpret_cast<const u8 *>(&scene->holder));
        appraisePanel(scene)->synchronize(reinterpret_cast<const u8 *>(&scene->holder));
        FUN_00233410(reinterpret_cast<const u8 *>(&scene->holder));
        uiAnimationAdvanceChannel(scene->animations, 2);
        uiAnimationAdvanceChannel(scene->animations, 3);
        FUN_0029212c(scene->entries[flaggedValueHolderGetTotal(&scene->holder)].id);
        if (FUN_0027ee9c()) {
            FUN_002328b4();
            messageMainFinishWindow();
            scene->state = 5;
            scene->frames = 0;
            FUN_0029c43c(scene->total, 0);
        }
        break;
    case 5:
        if (sys43e188GetState() && messageMainTargetIsClear() == 1) {
            sceneApplyTransaction(scene);
            ifTouchRegionClearAll(appraisePanel(scene));
            FUN_00233818(&scene->selection);
            for (s32 i = 0; i < scene->touchCount; i++)
                ifTouchRegionRemove();
            scene->mode = 3;
            scene->state = 0;
        }
        break;
    }
}

} /* extern "C" */
