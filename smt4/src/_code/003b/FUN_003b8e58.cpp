/* NON_MATCHING: step function of the mikado gate scene (starts the entry script for the current gate, runs it, swaps the gate model and closes into the dialog phase, or hands over to the content transition); written from the decompilation, the step ladder is rebuilt as a switch and the register/branch layout not compared with retail */
#include "shard/W6_W6Match3_NodeEnable.h"
#include "shard/W6_W6Match6_ContentTransition.h"

#define GATE_STEP_BEGIN 0
#define GATE_STEP_RESET 1
#define GATE_STEP_START_SCRIPT 10
#define GATE_STEP_RUN_SCRIPT 0xB
#define GATE_STEP_CHOOSE_MODEL 0x14
#define GATE_STEP_WAIT_HOLD 0x15
#define GATE_STEP_RUN_EXIT_SCRIPT 0x1E
#define GATE_STEP_WAIT_CLOSE_EXIT 0x1F
#define GATE_STEP_WAIT_CLOSE 0x28
#define GATE_STEP_TRANSITION 99
#define GATE_HOLD_FRAMES 15
#define GATE_PHASE_DIALOG 5
#define GATE_SCRIPT_DONE 2
#define GATE_ENTRY_EXIT 0x34
#define GATE_BUTTON_PRESET 0x90
#define GATE_FADE_COLOR 0x323232FF
#define GATE_MODEL_PATH "mikado/akyura_park_gate"

struct GateEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s16 modelId;
    /* 0x2A */ s8 kind;
};

struct GateText {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ char name[1];
    /* 0x6D */ u8 unk6D[0xF];
    /* 0x7C */ s8 hasScript;
};

struct GateInfo {
    /* 0x00 */ u8 unk00[0x3F];
    /* 0x3F */ u8 message;
};

struct GateScene {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 phase;
    /* 0x02C */ s32 step;
    /* 0x030 */ u8 unk030[8];
    /* 0x038 */ s32 timer;
    /* 0x03C */ s16 kind;
    /* 0x03E */ u8 unk03E[0xE];
    /* 0x04C */ s16 entryIndex;
    /* 0x04E */ u8 unk04E[0x4E];
    /* 0x09C */ u8 objBlock[0x630];
    /* 0x6CC */ u8 marked;
    /* 0x6CD */ u8 unk6CD;
    /* 0x6CE */ u8 unk6CE;
    /* 0x6CF */ u8 unk6CF[0x68D];
    /* 0xD5C */ GateInfo *info;
    /* 0xD60 */ GateText *text;
    /* 0xD64 */ u8 unkD64[8];
    /* 0xD6C */ u32 tableGroup;
    /* 0xD70 */ u8 unkD70[4];
    /* 0xD74 */ u32 scriptA;
    /* 0xD78 */ u8 unkD78[8];
    /* 0xD80 */ u32 infoWin;
    /* 0xD84 */ u8 unkD84[0x18];
    /* 0xD9C */ u32 scriptB;
    /* 0xDA0 */ u8 unkDA0[0xB8];
    /* 0xE58 */ u8 modelActive;
    /* 0xE59 */ u8 unkE59[3];
    /* 0xE5C */ NodeEnableOwner *model;
};

extern "C" {
extern s32 DAT_0044cfb8;

s32 FUN_0022afc4(NodeEnableOwner *model, s32 id, ...);
void objBlockInitAndMark(void *block);
void buttonHelpSelectByProgress(GateScene *scene);
void modelSetVisible(NodeEnableOwner *model, s32 visible);
void FUN_0022b6c4(void *block);
void nodeOwnerSetEnabled(NodeEnableOwner *owner, int enabled);
void FUN_0023d344(NodeEnableOwner *model);
void FUN_002636d0(s32 flag);
void dialogOpen(s32 flag);
void infoWinSetMessage(u32 infoWin, u8 message);
s32 FUN_002903f0(void);
u32 tableGroupFindEntryIndex(u32 group, u8 *name);
void infoWinStartTimer(s32 flag);
void scrScriptProcessStartEntry(u32 script, u32 entry);
void FUN_0029ee6c(s32 a, u32 color);
void messageStatesSetFirst(s32 flag);
void buttonHelpSetPreset(s32 preset);
void textFormatBuffer(u8 buffer[36], const char *format, const char *text);
void modelLoadBamAndEnable(NodeEnableOwner *model, const char *path);
s32 scrRunOpcodesStub(u32 script);
s32 listUpdateRevealTransition(void *block);
GateEntry *FUN_0022b238(void *block, s32 index);
void contentTransitionApplyCommand(ContentTransition *transition, const void *command);

/* Closes the gate scene back into the dialog phase. */
static __inline void gateEnterDialog(GateScene *scene)
{
    scene->phase = GATE_PHASE_DIALOG;
    scene->step = 0;
    dialogOpen(0);
    infoWinSetMessage(scene->infoWin, scene->info->message);
    DAT_0044cfb8 = 0;
    scene->unk6CE = 0;
}

void FUN_003b8e58(GateScene *scene)
{
    switch (scene->step) {
    case GATE_STEP_BEGIN:
        scene->step = GATE_STEP_RESET;
        return;

    case GATE_STEP_RESET:
        DAT_0044cfb8 = 0;
        infoWinStartTimer(0);
        scene->step = GATE_STEP_START_SCRIPT;
        return;

    case GATE_STEP_START_SCRIPT:
        if (DAT_0044cfb8 != 0) {
            gateEnterDialog(scene);
            return;
        }
        if (scene->text->name[0] == '0') {
            scene->step = GATE_STEP_CHOOSE_MODEL;
            return;
        }
        {
            u8 name[36];
            textFormatBuffer(name, "%s", scene->text->name);
            u32 entry = tableGroupFindEntryIndex(scene->tableGroup, name);
            messageStatesSetFirst(0);
            buttonHelpSetPreset(GATE_BUTTON_PRESET);
            scrScriptProcessStartEntry(scene->scriptA, entry);
            scene->marked = 1;
            scene->step++;
        }
        return;

    case GATE_STEP_RUN_SCRIPT:
        if (scrRunOpcodesStub(scene->scriptA) == GATE_SCRIPT_DONE)
            scene->step = GATE_STEP_CHOOSE_MODEL;
        return;

    case GATE_STEP_CHOOSE_MODEL: {
        s32 next;
        if (DAT_0044cfb8 != 0) {
            messageStatesSetFirst(1);
            buttonHelpSelectByProgress(scene);
            objBlockInitAndMark(scene->objBlock);
            FUN_0022b6c4(scene->objBlock);
            scene->marked = 0;
            DAT_0044cfb8 = 0;
            next = GATE_STEP_WAIT_CLOSE;
        } else {
            messageStatesSetFirst(1);
            if (scene->text->hasScript != 0 && FUN_002903f0() != 0) {
                scrScriptProcessStartEntry(scene->scriptB, GATE_ENTRY_EXIT);
                if (scene->marked == 0)
                    scene->marked = 1;
                buttonHelpSetPreset(GATE_BUTTON_PRESET);
                FUN_0029ee6c(0, GATE_FADE_COLOR);
                next = GATE_STEP_RUN_EXIT_SCRIPT;
            } else {
                if (scene->modelActive != 0) {
                    GateEntry *entry = FUN_0022b238(scene->objBlock, scene->entryIndex);
                    NodeEnableOwner *model = scene->model;
                    if (scene->kind != 4 && scene->kind != 3) {
                        FUN_0022afc4(model, entry->modelId, (s32)entry->kind);
                    } else {
                        s8 kind = entry->kind;
                        bool enabled = kind != 0 && kind != 6;
                        if (!enabled) {
                            FUN_0023d344(model);
                            FUN_0022afc4(model, entry->modelId, (s32)entry->kind);
                            modelLoadBamAndEnable(model, GATE_MODEL_PATH);
                            modelSetVisible(model, 1);
                        } else {
                            FUN_0022afc4(model, entry->modelId);
                            modelSetVisible(model, 0);
                        }
                        nodeOwnerSetEnabled(model, enabled);
                    }
                }
                scene->timer = 0;
                next = scene->step + 1;
            }
        }
        scene->step = next;
        return;
    }

    case GATE_STEP_WAIT_HOLD:
        scene->timer++;
        if (scene->timer >= GATE_HOLD_FRAMES)
            scene->step = GATE_STEP_TRANSITION;
        return;

    case GATE_STEP_RUN_EXIT_SCRIPT:
        messageStatesSetFirst(0);
        if (scrRunOpcodesStub(scene->scriptB) != GATE_SCRIPT_DONE)
            return;
        scene->step = GATE_STEP_WAIT_CLOSE_EXIT;
        buttonHelpSelectByProgress(scene);
        objBlockInitAndMark(scene->objBlock);
        FUN_0022b6c4(scene->objBlock);
        scene->marked = 0;
        DAT_0044cfb8 = 0;
        FUN_002636d0(1);
        dialogOpen(0);
        infoWinSetMessage(scene->infoWin, scene->info->message);
        return;

    case GATE_STEP_WAIT_CLOSE_EXIT:
        if (listUpdateRevealTransition(scene->objBlock) == 0)
            return;
        messageStatesSetFirst(1);
        gateEnterDialog(scene);
        return;

    case GATE_STEP_WAIT_CLOSE:
        if (listUpdateRevealTransition(scene->objBlock) == 0)
            return;
        gateEnterDialog(scene);
        return;

    case GATE_STEP_TRANSITION:
        contentTransitionApplyCommand(reinterpret_cast<ContentTransition *>(scene), scene->text);
        return;

    default:
        return;
    }
}

} /* extern "C" */
