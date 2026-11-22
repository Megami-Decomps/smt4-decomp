#ifndef CLASSES_OBJ5333C0_H
#define CLASSES_OBJ5333C0_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "quest_center/QuestRecordA.h"
#include "Model/MoriModelContent.h"

class Obj5333c0;
struct ScriptProcess;

/* A step function of the scene: a member-function pointer (function address and `this` adjustment). */
typedef void (Obj5333c0::*SceneStep)();

/* The model of the scene's camera transform; the node holds its named joints. */
struct SceneTransformModel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdMdlNode *node;
};

/* The transform the scene's camera follows (observed prefix). */
struct SceneTransform {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ SceneTransformModel *model;
};


/* One of the NPCs that can be talked to: its row in data table 0x27 and its NPC number (1-based: it selects
 * npcControllersA/B[npc - 1]; 8 and 9 also choose the camera transform). */
struct SceneTalkEntry {
    /* 0x00 */ s32 record;
    /* 0x04 */ s32 npc;
};

/* A row of data table 0x27 (0x88 bytes): an NPC's display name, the number of its talk script and the script
 * entry to start. */
struct SceneTalkRecord {
    /* 0x00 */ char name[0x6A];
    /* 0x6A */ u16 scriptId;
    /* 0x6C */ char entryName[0x1C];
};

/* A choice row's save-flag test: the mask tested in the scene's flag word and the result shown in the list. */
struct SceneChoiceFlag {
    /* 0x00 */ u8 set;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 mask;
    /* 0x05 */ u8 unk05[5];
};

typedef char SceneTalkRecordCheck[sizeof(SceneTalkRecord) == 0x88 ? 1 : -1];

extern "C" {
/* Row `index` of data table 0x27, or NULL when out of range. Callers pass the address of the scene's table byte
 * (Obj5333c0::talkTable), which the lookup does not use. */
SceneTalkRecord *dataTable27GetEntry(const u8 *table27, u32 index);
void FUN_0046b18c(Obj5333c0 *scene);
void FUN_0046ba10(Obj5333c0 *scene);
void FUN_004688c8(Obj5333c0 *scene);
u16 idOwnerGetRecordHalf(Obj5333c0 *scene);
s32 pickObjStart(Obj5333c0 *scene, const char *entry);
void qcCtrlStart(Obj5333c0 *scene, s32 kind, s32 mode, s32 frozen);
}

/* A scene whose step functions are listed in the table at 0x5333c0 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj5333c0 {
public:
    /* Once the transition (screenFadeIsBusy) is over, moves to state 5 when the mode byte is 1,
     * otherwise to state 4. */
    void chooseNextState();

    /* State 1 of the healing counter: plays the healing talk, offers the choice, takes the fee and
     * records which kind of healing was received. */
    void healingStep();

    /* Final state of the table: raises the first flag bit and moves to state 19. */
    void finishScene();

    /* Runs the step function of the current state, then keeps the camera transform following the
     * scene and, the first time through, points each quest NPC's controllers at its dummy marker. */
    void update();

    friend void FUN_0046b18c(Obj5333c0 *scene);
    friend void FUN_0046ba10(Obj5333c0 *scene);
    friend void FUN_004688c8(Obj5333c0 *scene);
    friend u16 idOwnerGetRecordHalf(Obj5333c0 *scene);
    friend s32 pickObjStart(Obj5333c0 *scene, const char *entry);
    friend void qcCtrlStart(Obj5333c0 *scene, s32 kind, s32 mode, s32 frozen);

protected:
    /* Raises or clears bits of the scene's flag word. */
    void setFlags(u32 mask) { flags |= mask; }
    void clearFlags(u32 mask) { flags &= ~mask; }

    /* Switches to `next` and restarts the substate. */
    void startState(s32 next)
    {
        state = next;
        substate = 0;
    }

    /* The NPC conversation state's steps (defined with it, FUN_0046b18c). */
    void refreshChoiceFlags();
    bool talkScriptReady();
    void endTalkScript();

    /* Resolve the selected row through the quest table before applying its delivery reward. */
    u16 deliveryQuestId() const
    {
        return questDataGetRecord(static_cast<u16>(deliveryQuest))->id;
    }

    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ s8 kind;
    /* 0x11 */ u8 mode;
    /* 0x12 */ u8 unk12[6];
    /* 0x18 */ u8 location;                    /* which region's quests are handled here */
    /* 0x19 */ u8 talkTable;                    /* passed (by address) as data table 0x27's unused first argument */
    /* 0x1A */ u8 frozen;                       /* nonzero: the camera transform and the NPC placement are held */
    /* 0x1B */ u8 unk1B[0x269];
    /* 0x284 */ void *primaryData;
    /* 0x288 */ void *primaryInfo;
    /* 0x28C */ ScriptProcess *primary;
    /* 0x290 */ void *secondaryData;
    /* 0x294 */ void *secondaryInfo;
    /* 0x298 */ ScriptProcess *secondary;
    /* 0x29C */ void *talkScriptFile;           /* "quest_center/npc/n<id>/n<id>.bf" of the NPC talked to */
    /* 0x2A0 */ void *talkMessageFile;          /* its ".mbm" */
    /* 0x2A4 */ ScriptProcess *talkScript;
    /* 0x2A8 */ u8 unk2A8[0xC];
    /* 0x2B4 */ ScriptProcess **script;
    /* 0x2B8 */ SceneStep steps[20]; /* step function of each state; slot 0 and 19 stay empty */
    /* 0x358 */ u8 unk358[0x6B4];
    /* 0xA0C */ u32 deliveryQuest;             /* selection returned by the quest menu */
    /* 0xA10 */ MoriModelContent *npcControllersA[9];   /* "<location>_npc<n>.bam"; controllerSetDestination moves their bodies */
    /* 0xA34 */ MoriModelContent *npcControllersB[9];   /* "<location>_npc<n>_add1.bam", shown with the first */
    /* 0xA58 */ u8 npcsPlaced;                  /* the NPC controllers were sent to their dummy markers */
    /* 0xA59 */ u8 unkA59[3];
    /* 0xA5C */ f32 unkA5C;                     /* 30 when the scene starts */
    /* 0xA60 */ u8 unkA60[0x10];
    /* 0xA70 */ SceneTalkEntry talkEntries[9];
    /* 0xAB8 */ s32 talkEntryCount;
    /* 0xABC */ s32 npcCount;
    /* 0xAC0 */ s32 choiceEntries[4];           /* talkEntries index of each row of the NPC choice list */
    /* 0xAD0 */ s32 choiceCount;
    /* 0xAD4 */ s32 choice;                     /* row under the cursor, then the row chosen */
    /* 0xAD8 */ SceneTalkEntry *talkEntry;      /* the NPC being talked to; NULL when none */
    /* 0xADC */ char choiceText[0x200];         /* the list's rows, "<br>" after each */
    /* 0xCDC */ SceneTransform *transform;
    /* 0xCE0 */ u32 transformWanted;
    /* 0xCE4 */ u32 transformCurrent;
    /* 0xCE8 */ MoriModelContent *backgroundModel;   /* "<location>.bam", loaded only for a frozen (2) scene */
    /* 0xCEC */ u8 unkCEC[4];
    /* 0xCF0 */ s32 chosenRow;                  /* the choice list row last confirmed */
    /* 0xCF4 */ u16 choiceFlagWord;             /* save flag word the choice rows' masks are tested in */
    /* 0xCF6 */ u8 unkCF6[0x150];
    /* 0xE46 */ SceneChoiceFlag choiceFlags[4];
};

#endif
