/* NON_MATCHING: 16 rows, one allocation choice: retail keeps the hoisted constant 1 in r9 and 0 in sl, this build
 * the other way round (every store of either differs). One more store of 1 anywhere in the function gives retail's
 * registers, so retail's source holds a use of 1 this one does not. */
#include "common.h"
#include "quest_center/qcMain.h"
#include "classes/SelectionState.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/AsdMemUtil.h"
#include "game/GameState.h"

/* A quest center start sequence: the table row selects it by kind, area and quest conditions. */
struct QcStartSequence {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ u16 sequenceArgument;
    /* 0x12 */ u16 requiredFlag;          /* 0xffff: the first three quests must be completed */
    /* 0x14 */ u16 skipFlag;              /* the sequence is skipped once this flag is set */
    /* 0x16 */ u16 kind;
    /* 0x18 */ s16 area;                  /* -1: any area */
};

/* The quest center's entry list screen: a state word and its selection flags at 0x658. */
struct QuestEntry {
    /* 0x000 */ u32 state;
    /* 0x004 */ u8 unk004[0x654];
    /* 0x658 */ SelectionFlags selection;
    /* 0x667 */ u8 unk667[0x95d];

    QuestEntry() : state(0) {}
    static void *operator new(u32 size) throw();
};


extern "C" {
extern QcGlobals g_qcMain;
extern QcStartSequence g_qcStartSequences[3];
void *asdOperatorNew(u32 size);
s32 gameFlagIsSet(u32 flag);
s32 gameStateIsFlagSetAndLarge(void);
s32 FUN_00287304(void);
void bgmResumeOrRequestTrack(u32 bgm);
void questCompletionSetTierFlags(s32 mode);
void commonBgStopChildAndBeginTransition(void);
void commonBgAcquire(void);
s32 bgmGetStateById(u32 id);
s32 objectFlagBitIsSet(u32 object, u32 bit);
s32 questIsCompleted(u32 quest);
void titleSetSlotValueState2(s32 first, s32 second);
void menuSceneTeardown(void *scene);
void libc_strcpy(char *destination, const char *source);
void asdSequenceRequest(u32 kind, const void *argument, u32 size);
void bgmStopWithoutEntry(void);
void FUN_00381b8c(void);
void FUN_003840f4(QuestEntry *entry, s32 area, u32 argument, s32 resident);
void dummyAttachmentUpdate(QuestEntry *entry);
s32 entryRequestSequence(void);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
void buttonHelpRelease(void);
void buttonHelpTexturesUnref(void);
void uiFadeRelease(void);

void *QuestEntry::operator new(u32 size) throw()
{
    return asdOperatorNew(size);
}

/* Marks the screen finished and tears its entry list down (effectQcFinish's body). */
static __inline void qcWorkFinish(QcWork *work)
{
    work->done = 1;
    if (work->entry != NULL) {
        menuSceneTeardown(work->entry);
        asdMemFreeNonNull(work->entry);
        work->entry = NULL;
    }
}

/* Per-frame update of the quest center screen: opens the entry list (playing a start sequence if
   a row of the table asks for one), waits for it, then closes it again. Returns -1 once finished. */
s32 QuestCenterMainProcUpdate(u32 handle)
{
    QcWork *work = g_qcMain.work;
    switch (work->mode) {
    case 0: {
        s16 kind;
        switch (g_qcMain.area) {
        case 1:
            kind = 0;
            break;
        case 9:
            kind = 2;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
            kind = 3;
            break;
        default:
            kind = 1;
            break;
        }
        if (g_qcMain.resident == 0) {
            if (kind == 1 && gameFlagIsSet(0x235)) {
                if (!gameFlagIsSet(0x1c0) || !gameFlagIsSet(0x424) || objectFlagBitIsSet(qcGetCenterSlotGroups(1), 4)) {
                    questCompletionSetTierFlags(0);
                }
            }
            const QcStartSequence *sequence = NULL;
            for (u32 i = 0; i < 3; i++) {
                const QcStartSequence *row = &g_qcStartSequences[i];
                if (row->kind != kind || (row->area != -1 && row->area != g_qcMain.area)) {
                    continue;
                }
                if (row->requiredFlag != 0) {
                    if (row->requiredFlag == 0xffff) {
                        if (!questIsCompleted(0x65) || !questIsCompleted(0x66) || !questIsCompleted(0x67)) {
                            continue;
                        }
                    } else if (!gameFlagIsSet(row->requiredFlag)) {
                        continue;
                    }
                }
                if (row->skipFlag == 0 || !gameFlagIsSet(row->skipFlag)) {
                    sequence = row;
                    break;
                }
            }
            if (sequence != NULL) {
                struct {
                    u32 argument;
                    s32 unk04;
                    char name[28];
                } request;
                request.argument = sequence->sequenceArgument;
                request.unk04 = -1;
                libc_strcpy(request.name, sequence->name);
                asdSequenceRequest(4, &request, 0x20);
                break;
            }
            if (g_qcMain.area == 1) {
                if (bgmGetStateById(0x100005d) != 1) {
                    bgmResumeOrRequestTrack(0x100005d);
                }
            } else {
                if (bgmGetStateById(0x100005a) != 1) {
                    bgmResumeOrRequestTrack(0x100005a);
                }
            }
            commonBgAcquire();
            buttonHelpAcquireResources();
            buttonHelpCreate();
            commonBgStopChildAndBeginTransition();
        }
        work->entry = new QuestEntry;
        FUN_00381b8c();
        FUN_003840f4(work->entry, g_qcMain.area, g_qcMain.argument, g_qcMain.resident);
        work->mode = 1;
        break;
    }
    case 1:
        dummyAttachmentUpdate(work->entry);
        if ((work->entry->state & 1) != 0) {
            work->mode = 3;
        }
        break;
    case 2:
        work->mode = 4;
        qcWorkFinish(work);
        break;
    case 3:
        if ((work->entry == NULL || entryRequestSequence() == 0) && FUN_00287304() != 0 &&
            g_qcMain.resident == 0) {
            if (gameStateIsFlagSetAndLarge()) {
                s32 argument = g_gameState.savedMapId - 200;
                asdSequenceRequest(0xe, &argument, 4);
            } else {
                asdSequenceRequest(6, NULL, 0);
            }
        }
        work->mode = 4;
        qcWorkFinish(work);
        if (g_qcMain.resident == 0) {
            uiFadeRelease();
            buttonHelpRelease();
            buttonHelpTexturesUnref();
        }
        break;
    case 4:
        if (g_qcMain.restoreMenus != 0) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            bgmStopWithoutEntry();
        }
        return 0xffffffff;
    }
    return 0;
}

} /* extern "C" */
