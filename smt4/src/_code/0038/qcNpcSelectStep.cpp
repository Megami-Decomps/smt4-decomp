/* NON_MATCHING: 24 lines, registers and prologue order only: the choice count read for the list store
 * (retail r1, built r0), one temporary in the first marker-hiding loop, and the order of the hoisted
 * field addresses in the prologue (retail computes &choiceCount first). The highlight loop matches now
 * that the offered NPC's number is read before the cursor test. Retail's address order says the
 * choice-list loop of step 0 is an inlined function body: as a helper (with a 128-byte glyph buffer and
 * `path` declared before `messagePath`, which then give retail's 260-byte frame, and choiceNpc a plain
 * `static`) the count and the address order match and 22 lines remain, the prologue's first adds and the
 * marker-hiding temporary. That helper would have one call site and no other evidence, so the loop
 * stays in place. */
#include <stdio.h>
#include "ui/DummyAttachmentWork.h"
#include "script/scrScriptProcess.h"
#include "sys/FlagWord.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "quest_center/qcMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "code/Code0021_Smt4.h"
#include "code/Code002d_Smt4.h"
#include "code/Code002e_Smt4.h"

/* A row of data table 0x27/0 (0x88 bytes): a quest center NPC. */
struct QuestCenterNpcRecord {
    char name[0x6a];        // 0x00
    u16 resourceId;         // 0x6a, the "n%03d" directory and file number
    char scriptEntry[0x1c]; // 0x6c, the entry of the NPC's script to run
};
typedef char QuestCenterNpcRecordCheck[sizeof(QuestCenterNpcRecord) == 0x88 ? 1 : -1];

extern "C" {
extern const char DAT_004058cc[]; /* "<br>" */

u32 effIsFinished(AsdMdlNode *model);
QuestCenterNpcRecord *dataTable27Sub0GetRecord(u8 *table, u32 index);
s32 tableGroupFindEntryIndex(u32 table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
s32 scrScriptProcessStartMappedEntry(DummyAttachmentWork *work, const char *name);
u32 messageTargetGetValue(void);
u32 messageMainGetChoiceResult(void);
u8 messageWindowIsState1(void);
void messageMainRequestBanner(void);
void messageSetConfirmDisplayMode(void);
s8 *textConvertToGlyphPairs(const char *source, char *output);
char *libc_strcat(char *dst, const char *src);
}

/* The chosen NPC's model, as the model-owner and animation-owner helpers take it. */
static __inline ModelOwner *selectedNpcModel(DummyAttachmentWork *work)
{
    return (ModelOwner *)work->primary[work->selected->npc - 1];
}

static __inline AnimOwner *selectedNpcAnim(DummyAttachmentWork *work)
{
    return (AnimOwner *)work->primary[work->selected->npc - 1];
}

/* The 1-based marker number of the NPC offered as choice `choice`. */
static __inline s32 choiceNpc(DummyAttachmentWork *work, s32 choice)
{
    return work->npcEntries[work->choices[choice]].npc;
}

/* Whether the chosen NPC's motion has finished. */
static u32 selectedNpcIsFinished(DummyAttachmentWork *work)
{
    return effIsFinished(work->primary[work->selected->npc - 1]->node);
}

/* Hide every offered NPC's selection marker. */
static __inline void hideChoiceMarkers(DummyAttachmentWork *work)
{
    for (s32 i = 0; i < work->choiceCount; i++) {
        asdMdlObjectHide(work->secondary[work->npcEntries[work->choices[i]].npc - 1]);
    }
}

extern "C" {

/* Quest center state: offer the NPCs present (up to four) in a selection message, then load and
 * run the chosen NPC's conversation script. */
void qcNpcSelectStep(DummyAttachmentWork *work)
{
    switch (work->step) {
    case 0:
        /* Let the previous NPC's motion finish, then put it back to rest. */
        if (work->selected != NULL) {
            if (!selectedNpcIsFinished(work))
                return;
            FUN_00210194(selectedNpcModel(work), 0.0f);
            animOwnerSetScale(selectedNpcModel(work), 0.0f);
            FUN_002e1230(selectedNpcAnim(work), 0);
            work->selected = NULL;
        }
        work->step++;
        work->cursor = 0;
        memClear(work->choiceText, sizeof(work->choiceText));
        work->choiceCount = 0;
        for (s32 i = 0; i < work->npcEntryCount; i++) {
            char name[128];
            char glyphs[120];
            libc_strcpy((unsigned int *)name,
                        (unsigned int *)dataTable27Sub0GetRecord(&work->npcTable, 0)[work->npcEntries[i].record].name);
            textConvertToGlyphPairs(name, glyphs);
            libc_strcat(work->choiceText, glyphs);
            libc_strcat(work->choiceText, DAT_004058cc);
            work->choices[work->choiceCount] = i;
            work->choiceCount++;
            if (work->choiceCount >= sizeof(work->choices) / sizeof(work->choices[0]))
                break;
        }
        if (work->choiceCount < 2) {
            work->state = 5;
            work->step = 0;
            return;
        }
        FUN_00290d5c(0xa0);
        scrScriptProcessStartMappedEntry(work, "qc_NpcSelect");
        messageMainRequestBanner();
        break;
    case 1:
        if (scrRunOpcodesStub(*work->sceneScript) != 2) {
            /* Still choosing: show the marker of the highlighted NPC only. */
            if (!messageWindowIsState1())
                return;
            work->cursor = messageTargetGetValue();
            if (work->cursor == -1)
                return;
            work->playback.requested = choiceNpc(work, work->cursor);
            for (s32 i = 0; i < work->choiceCount; i++) {
                s32 npc = choiceNpc(work, i);

                if (work->cursor == i)
                    asdMdlObjectShow(work->secondary[npc - 1]);
                else
                    asdMdlObjectHide(work->secondary[npc - 1]);
            }
            return;
        }
        if (messageMainGetChoiceResult() != (u32)-1) {
            work->cursor = messageMainGetChoiceResult();
            work->selected = &work->npcEntries[work->choices[work->cursor]];
            animOwnerSetScale(selectedNpcModel(work), 1.0f);
            FUN_002e1230(selectedNpcAnim(work), 0);
            work->step++;
            flagWordSet(&work->flags, 0x100);
            hideChoiceMarkers(work);
            buttonHelpSetPreset(0xa2);
            work->lastChoice = work->cursor;
            return;
        }
        /* Cancelled. */
        work->step = 5;
        work->playback.requested = 0;
        flagWordClear(&work->flags, 0x100);
        hideChoiceMarkers(work);
        break;
    case 2: {
        char messagePath[64];
        char path[64];
        u16 id = dataTable27Sub0GetRecord(&work->npcTable, 0)[work->selected->record].resourceId;
        sprintf(path, "quest_center/npc/n%03d/n%03d.bf", id, id);
        sprintf(messagePath, "quest_center/npc/n%03d/n%03d.mbm", id, id);
        asdLoadFileAsyncSimple(path, &work->npcScriptFile, 0);
        asdLoadFileAsyncSimple(messagePath, &work->npcMessageFile, 0);
        work->step++;
        break;
    }
    case 3:
        if (work->npcScriptFile == 0 || work->npcMessageFile == 0)
            return;
        if (!selectedNpcIsFinished(work))
            return;
        FUN_00210194(selectedNpcModel(work), work->unkD44);
        animOwnerSetScale(selectedNpcModel(work), 0.0f);
        FUN_002e1230(selectedNpcAnim(work), 0);
        work->npcScript = scrScriptProcessCreate((void *)work->npcScriptFile, (void *)work->npcMessageFile);
        work->npcScript->mode = 2;
        {
            const char *entry = dataTable27Sub0GetRecord(&work->npcTable, 0)[work->selected->record].scriptEntry;
            jyoucyuGetTableEntry(0);
            scrScriptProcessStartEntry(work->npcScript, tableGroupFindEntryIndex(work->npcScriptFile, entry));
        }
        work->step++;
        break;
    case 4:
        if (scrRunOpcodesStub(work->npcScript) != 2)
            return;
        animOwnerSetScale(selectedNpcModel(work), 1.0f);
        FUN_002e1230(selectedNpcAnim(work), 0);
        messageSetConfirmDisplayMode();
        if (work->npcScript != NULL) {
            scrScriptProcessDestroy(work->npcScript);
            work->npcScript = NULL;
        }
        if (work->npcScriptFile != 0) {
            asdMemFree((void *)work->npcScriptFile);
            work->npcScriptFile = 0;
        }
        if (work->npcMessageFile != 0) {
            asdMemFree((void *)work->npcMessageFile);
            work->npcMessageFile = 0;
        }
        work->step = 0;
        flagWordClear(&work->flags, 0x100);
        break;
    case 5:
        flagWordClear(&work->flags, 0x100);
        work->state = 5;
        work->step = 0;
        break;
    }
}

} /* extern "C" */
