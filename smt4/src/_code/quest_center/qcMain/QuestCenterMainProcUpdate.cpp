/* NON_MATCHING: block layout of the area-to-kind chain and constant/register order differ; the rest of the update follows retail */
#include "common.h"
#include "quest_center/qcMain.h"
#include "classes/SelectionState.h"

/* The quest center's globals as the update reads them (qcMain.h's QcGlobals is the 8-byte head). */
struct QcMainState {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 restoreMenus;           /* set when the menus have to be reset on exit */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ QcWork *work;
    /* 0x08 */ s32 area;                  /* the area the quest center was opened from */
    /* 0x0c */ u32 argument;
    /* 0x10 */ s32 resident;              /* nonzero: the screen's shared UI stays up */
};

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
    static void *operator new(u32 size);
};

/* The game state's current-area field the finishing sequence reads. */
struct QcGameState {
    /* 0x000 */ u8 unk000[0x2fc];
    /* 0x2fc */ s32 camera;
};

extern "C" {
extern QcMainState g_qcMain;
extern QcStartSequence DAT_0044dbb0[3];
extern QcGameState g_gameState;
void *asdOperatorNew(u32 size);
s32 gameFlagIsSet(u32 flag);
s32 gameStateIsFlagSetAndLarge(void);
s32 FUN_00287304(void);
void FUN_00287328(u32 bgm);
void FUN_00287528(s32 mode);
u32 FUN_00287704(u32 mode);
void FUN_00289880(void);
void FUN_002898e4(void);
s32 bgmGetStateById(u32 id);
s32 objectFlagBitIsSet(u32 object, u32 bit);
s32 questIsCompleted(u32 quest);
void FUN_002a03d8(s32 first, s32 second);
void FUN_002a6fb8(void);
void asdMemFreeNonNull(QuestEntry *entry);
void libc_strcpy(char *destination, const char *source);
void asdSequenceRequest(u32 kind, const void *argument, u32 size);
void FUN_0032c69c(void);
void FUN_00381b8c(void);
void FUN_003840f4(QuestEntry *entry, s32 area, u32 argument, s32 resident);
void dummyAttachmentUpdate(QuestEntry *entry);
s32 entryRequestSequence(void);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
void buttonHelpRelease(void);
void buttonHelpTexturesUnref(void);
void uiFadeRelease(void);

void *QuestEntry::operator new(u32 size)
{
    return asdOperatorNew(size);
}

/* Per-frame update of the quest center screen: opens the entry list (playing a start sequence if
   a row of the table asks for one), waits for it, then closes it again. Returns -1 once finished. */
s32 QuestCenterMainProcUpdate(u32 handle)
{
    QcWork *work = g_qcMain.work;
    switch (work->mode) {
    case 0: {
        s16 kind;
        if (g_qcMain.area == 11) {
            kind = 3;
        } else if (g_qcMain.area > 11) {
            if (g_qcMain.area == 12 || g_qcMain.area == 13) {
                kind = 3;
            } else {
                kind = 1;
            }
        } else if (g_qcMain.area == 1) {
            kind = 0;
        } else if (g_qcMain.area == 9) {
            kind = 2;
        } else if (g_qcMain.area == 10) {
            kind = 3;
        } else {
            kind = 1;
        }
        if (g_qcMain.resident == 0) {
            if (kind == 1 && gameFlagIsSet(0x235)) {
                if (!gameFlagIsSet(0x1c0) || !gameFlagIsSet(0x424) || objectFlagBitIsSet(FUN_00287704(1), 4)) {
                    FUN_00287528(0);
                }
            }
            for (u32 i = 0; i < 3; i++) {
                const QcStartSequence *row = &DAT_0044dbb0[i];
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
                    if (row != NULL) {
                        struct {
                            u32 argument;
                            s32 unk04;
                            char name[28];
                        } request;
                        request.argument = row->sequenceArgument;
                        request.unk04 = -1;
                        libc_strcpy(request.name, row->name);
                        asdSequenceRequest(4, &request, 0x20);
                        return 0;
                    }
                    break;
                }
            }
            u32 bgm;
            s32 bgmState;
            if (g_qcMain.area != 1) {
                bgm = 0x100005a;
                bgmState = bgmGetStateById(bgm);
            } else {
                bgm = 0x100005d;
                bgmState = bgmGetStateById(bgm);
            }
            if (bgmState != 1) {
                FUN_00287328(bgm);
            }
            FUN_002898e4();
            buttonHelpAcquireResources();
            buttonHelpCreate();
            FUN_00289880();
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
        work->done = 1;
        if (work->entry != NULL) {
            FUN_002a6fb8();
            asdMemFreeNonNull(work->entry);
            work->entry = NULL;
        }
        break;
    case 3:
        if ((work->entry == NULL || entryRequestSequence() == 0) && FUN_00287304() != 0 &&
            g_qcMain.resident == 0) {
            if (gameStateIsFlagSetAndLarge()) {
                s32 argument = g_gameState.camera - 200;
                asdSequenceRequest(0xe, &argument, 4);
            } else {
                asdSequenceRequest(6, NULL, 0);
            }
        }
        work->mode = 4;
        work->done = 1;
        if (work->entry != NULL) {
            FUN_002a6fb8();
            asdMemFreeNonNull(work->entry);
            work->entry = NULL;
        }
        if (g_qcMain.resident == 0) {
            uiFadeRelease();
            buttonHelpRelease();
            buttonHelpTexturesUnref();
        }
        break;
    case 4:
        if (g_qcMain.restoreMenus != 0) {
            FUN_002a03d8(0, 1);
            FUN_002a03d8(1, 1);
            FUN_0032c69c();
        }
        return 0xffffffff;
    }
    return 0;
}

} /* extern "C" */
