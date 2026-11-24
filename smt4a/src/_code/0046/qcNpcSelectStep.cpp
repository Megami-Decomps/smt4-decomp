/* NON_MATCHING: 111 lines (49 by shape). Every call, branch and store is retail's and so is the 256-byte frame, with
 * the text buffers in the blocks that use them (two 128-byte buffers in the choice loop, the two 64-byte paths in
 * substates 2 and 6; at function scope armcc no longer tail-calls FUN_0046a278 from substate 1). What is left:
 * &choiceCount is hoisted first of the field addresses in retail's prologue and the count is read into r1 for the
 * list store (both exactly as in IV's twin qcNpcSelectStep, where the choice-list build as a single-use helper gives
 * them and is not written for lack of other evidence); which substates share the "store substate, return" tail;
 * two scratch registers (the NPC index in the ready test, the flag loop's row address); and the
 * load of the flags ahead of the substate store in substate 5. */
#include <stdio.h>
#include "classes/Obj5333c0.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "code/Code003c_Smt4a.h"
#include "gfx/ControllerModel.h"
#include "kernel/jyoucyuGetTableEntry.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "shop/ShopItemDescription.h"
#include "text/TextDraw.h"
#include "util/MemoryHelpers_VariantC.h"

enum {
    SCENE_FLAG_TALKING = 0x100, /* Obj5333c0::flags: an NPC conversation is in progress */
    SE_TALK_START = 0xa4,
    BUTTON_HELP_NPC_SELECT = 0xa2
};

extern "C" {

extern const char DAT_00533564[]; /* "<br>" */

char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
char *libc_strcat(char *destination, const char *source);
void sysPlaySe(u32 id);
void buttonHelpSetSelectedId(u16 value);
void messageSetIndexedFlag(u32 index, u8 value);
u8 gameSaveTestFlag(s32 flagIndex, u8 mask);
u8 messageWindowIsState1(void);
u32 messageMainGetValue(void);
u32 animationChannelsAllFinished(const Obj557b18 *body);
f32 candidateGetPreferredValue(Obj557b18 *body);
s32 tableGroupFindEntryIndex(void *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void FUN_0046a278(Obj5333c0 *scene, s32 index);

} /* extern "C" */

/* Shows, in each row of the choice list, whether the row's save flag is set. */
inline void Obj5333c0::refreshChoiceFlags()
{
    for (u32 i = 0; i < 4; i++) {
        u8 set = gameSaveTestFlag(choiceFlagWord, choiceFlags[i].mask);
        choiceFlags[i].set = set;
        messageSetIndexedFlag(i, set);
    }
}

/* Whether both talk files are loaded and the NPC's motion has reached the talk frame. */
inline bool Obj5333c0::talkScriptReady()
{
    if (talkScriptFile == NULL || talkMessageFile == NULL) {
        return false;
    }
    if (candidateGetPreferredValue(npcControllersA[talkEntry->npc - 1]->body) < unkA5C) {
        return false;
    }
    return true;
}

/* After the talk script has finished: lets the NPC's motion run again and frees the script and its files. */
inline void Obj5333c0::endTalkScript()
{
    npcControllersA[talkEntry->npc - 1]->body->speed = 1.0f;
    messageSetScriptDisplayMode();
    if (talkScript != NULL) {
        scrScriptProcessDestroy(talkScript);
        talkScript = NULL;
    }
    if (talkScriptFile != NULL) {
        asdMemFree(talkScriptFile);
        talkScriptFile = NULL;
    }
    if (talkMessageFile != NULL) {
        asdMemFree(talkMessageFile);
        talkMessageFile = NULL;
    }
}

extern "C" {

/* The scene's NPC conversation state: lists the NPCs that can be talked to, lets the player choose one (or takes
 * the only one), runs that NPC's talk script and returns to state 5. */
void qcNpcSelectStep(Obj5333c0 *scene)
{
    switch (scene->substate) {
    case 0: {
        /* Wait for the previous NPC's motion, then build the choice list. */
        if (scene->talkEntry != NULL) {
            Obj557b18 *body = scene->npcControllersA[scene->talkEntry->npc - 1]->body;
            if (!animationChannelsAllFinished(body)) {
                return;
            }
            body->speed = 0.0f;
            modelPlayClip(body, 0, 0, 0.0f, 0.0f);
            scene->talkEntry = NULL;
        }
        scene->substate++;
        scene->choice = 0;
        sysMemClear(scene->choiceText, sizeof(scene->choiceText));
        scene->choiceCount = 0;
        for (s32 i = 0; i < scene->talkEntryCount; i++) {
            char name[128];
            char expanded[128];
            libc_strcpy(name, dataTable27GetEntry(&scene->talkTable, 0)[scene->talkEntries[i].record].name);
            textExpandGlyphsToBuffer(name, expanded, 0);
            libc_strcat(scene->choiceText, expanded);
            libc_strcat(scene->choiceText, DAT_00533564);
            scene->choiceEntries[scene->choiceCount] = i;
            scene->choiceCount++;
            if (scene->choiceCount >= sizeof(scene->choiceEntries) / sizeof(scene->choiceEntries[0])) {
                break;
            }
        }
        if (scene->choiceCount <= 0) {
            scene->state = 5;
            scene->substate = 0;
            return;
        }
        if (scene->choiceCount == 1) {
            scene->substate = 6;
            return;
        }
        buttonHelpSetSelectedId(BUTTON_HELP_NPC_SELECT);
        pickObjStart(scene, "qc_NpcSelect");
        messageMainRequestBanner();
        if (scene->location != 0) {
            return;
        }
        scene->refreshChoiceFlags();
        return;
    }
    case 1:
        /* The choice list is open. */
        if (scrRunOpcodesStub(*scene->script) == 2) {
            if (messageGetChoiceResult() == (u32)-1) {
                scene->transformWanted = 0;
                scene->substate = 5;
                scene->clearFlags(SCENE_FLAG_TALKING);
                for (s32 i = 0; i < scene->choiceCount; i++) {
                    moriModelBodyShow(scene->npcControllersB[scene->talkEntries[scene->choiceEntries[i]].npc - 1]->body);
                }
                return;
            }
            scene->choice = messageGetChoiceResult();
            FUN_0046a278(scene, scene->choice);
            scene->talkEntry = &scene->talkEntries[scene->choiceEntries[scene->choice]];
            Obj557b18 *body = scene->npcControllersA[scene->talkEntry->npc - 1]->body;
            body->speed = 1.0f;
            modelPlayClip(body, 0, 0, 0.0f, 0.0f);
            scene->substate++;
            scene->setFlags(SCENE_FLAG_TALKING);
            for (s32 i = 0; i < scene->choiceCount; i++) {
                moriModelBodyShow(scene->npcControllersB[scene->talkEntries[scene->choiceEntries[i]].npc - 1]->body);
            }
            sysPlaySe(SE_TALK_START);
            scene->chosenRow = scene->choice;
            return;
        }
        if (messageWindowIsState1()) {
            scene->choice = messageMainGetValue();
            if (scene->choice != -1) {
                FUN_0046a278(scene, scene->choice);
            }
        }
        return;
    case 2: {
        char path[64];
        char messagePath[64];
        u16 id = dataTable27GetEntry(&scene->talkTable, 0)[scene->talkEntry->record].scriptId;
        sprintf(path, "quest_center/npc/n%03d/n%03d.bf", id, id);
        sprintf(messagePath, "quest_center/npc/n%03d/n%03d.mbm", id, id);
        asdLoadFileAsyncSimple(path, (u32 *)&scene->talkScriptFile, 0);
        asdLoadFileAsyncSimple(messagePath, (u32 *)&scene->talkMessageFile, 0);
        scene->substate++;
        return;
    }
    case 3:
        if (!scene->talkScriptReady()) {
            return;
        }
        break;
    case 4:
        if (scene->location == 0) {
            scene->refreshChoiceFlags();
        }
        if (scrRunOpcodesStub(scene->talkScript) == 2) {
            scene->endTalkScript();
            scene->substate = 0;
            scene->clearFlags(SCENE_FLAG_TALKING);
        }
        return;
    case 5:
        scene->substate = 0;
        scene->clearFlags(SCENE_FLAG_TALKING);
        scene->state = 5;
        return;
    case 6: {
        /* Only one NPC: talk to it without the list. */
        char path[64];
        char messagePath[64];

        scene->transformWanted = scene->talkEntries[scene->choiceEntries[0]].npc;
        if (scene->talkEntries[scene->choiceEntries[scene->choice]].npc == 8) {
            scene->transformWanted = 5;
        }
        if (scene->talkEntries[scene->choiceEntries[scene->choice]].npc == 9) {
            scene->transformWanted = 4;
        }
        scene->talkEntry = &scene->talkEntries[scene->choiceEntries[scene->choice]];
        Obj557b18 *body = scene->npcControllersA[scene->talkEntry->npc - 1]->body;
        body->speed = 1.0f;
        modelPlayClip(body, 0, 0, 0.0f, 0.0f);
        sysPlaySe(SE_TALK_START);
        u16 id = dataTable27GetEntry(&scene->talkTable, 0)[scene->talkEntry->record].scriptId;
        sprintf(path, "quest_center/npc/n%03d/n%03d.bf", id, id);
        sprintf(messagePath, "quest_center/npc/n%03d/n%03d.mbm", id, id);
        asdLoadFileAsyncSimple(path, (u32 *)&scene->talkScriptFile, 0);
        asdLoadFileAsyncSimple(messagePath, (u32 *)&scene->talkMessageFile, 0);
        scene->setFlags(SCENE_FLAG_TALKING);
        scene->substate = 7;
        return;
    }
    case 7:
        if (!scene->talkScriptReady()) {
            return;
        }
        break;
    case 8:
        if (scrRunOpcodesStub(scene->talkScript) == 2) {
            scene->endTalkScript();
            scene->clearFlags(SCENE_FLAG_TALKING);
            scene->substate = 5;
            scene->transformWanted = 0;
        }
        return;
    default:
        return;
    }

    /* Substates 3 and 7, once ready: hold the NPC's motion at the talk frame and start its talk script. */
    Obj557b18 *body = scene->npcControllersA[scene->talkEntry->npc - 1]->body;
    body->speed = 0.0f;
    modelPlayClip(body, 0, 0, scene->unkA5C, 0.0f);
    scene->talkScript = scrScriptProcessCreate(scene->talkScriptFile, scene->talkMessageFile);
    scene->talkScript->mode = 2;
    const char *entryName = dataTable27GetEntry(&scene->talkTable, 0)[scene->talkEntry->record].entryName;
    jyoucyuGetTableEntry(0);
    scrScriptProcessStartEntry(scene->talkScript, tableGroupFindEntryIndex(scene->talkScriptFile, entryName));
    scene->substate++;
}

} /* extern "C" */
