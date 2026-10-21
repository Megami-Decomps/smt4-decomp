#include "shard/W6_W6Match2_HelpResources.h"

struct QuestTalkActor {
    u8 unk000[0x1fc];
    f32 speed;
};
struct QuestTalkModel {
    u32 unk00;
    QuestTalkActor *actor;
};
struct QuestTalkWork {
    u32 unk000;
    s32 state;
    s32 step;
    u8 unk00c[0x29c];
    void *bytecode;
    void *messages;
    ScriptProcess *script;
    u8 unk2b4[0x774];
    QuestTalkModel *model;
    u8 unka2c[0x30];
    f32 startFrame;
};

extern "C" {
void sysPlaySe(s32 sound);
void asdLoadFileAsyncSimple(const char *path, void **output, s32 flags);
ScriptProcess *FUN_00275bc8(void *bytecode, void *messages);
u32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *script, u32 entry);
s32 scrRunOpcodesStub(ScriptProcess *script);
f32 candidateGetPreferredValue(QuestTalkActor *actor);
void FUN_003fe86c(QuestTalkActor *actor, u32 animation, u32 mode, f32 frame, f32 blend);

void questCenterUpdateTalkMasterScript(QuestTalkWork *work)
{
    switch (work->step) {
    case 0:
        sysPlaySe(0xa5);
        if (work->bytecode == NULL) {
            asdLoadFileAsyncSimple("quest_center/talkMaster/qc_talkMaster.bf", &work->bytecode, 0);
        }
        if (work->messages == NULL) {
            asdLoadFileAsyncSimple("quest_center/talkMaster/qc_talkMaster.mbm", &work->messages, 0);
        }
        work->step = 1;
        return;
    case 1:
        if (work->bytecode != NULL && work->messages != NULL) {
            QuestTalkActor *actor = work->model->actor;
            if (work->startFrame > candidateGetPreferredValue(actor)) {
                break;
            }
            work->script = FUN_00275bc8(work->bytecode, work->messages);
            u32 entry = tableGroupFindEntryIndex(work->bytecode, "qc_TalkMaster");
            scrScriptProcessStartEntry(work->script, entry);
            FUN_003fe86c(actor, 0, 0, work->startFrame, 0.0f);
            actor->speed = 0.0f;
            work->step = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(work->script) == 2) {
            work->model->actor->speed = 1.0f;
            if (work->script != NULL) {
                scrScriptProcessDestroy(work->script);
                work->script = NULL;
            }
            if (work->bytecode != NULL) {
                asdMemFree(work->bytecode);
                work->bytecode = NULL;
            }
            if (work->messages != NULL) {
                asdMemFree(work->messages);
                work->messages = NULL;
            }
            work->step = 3;
        }
        break;
    case 3:
        work->state = 5;
        work->step = 0;
        break;
    }
}
}
