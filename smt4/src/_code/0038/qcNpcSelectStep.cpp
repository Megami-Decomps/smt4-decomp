/* NON_MATCHING: 6 lines, both about &work->choiceCount in step 0's choice-list loop: retail hoists that address
 * first of the five field addresses in the prologue (the build: fourth, before &selected), and reads the count for
 * the list store into r1 (`ldr r1; add r0, r4, r1, lsl #2`; the build: r0). The rest is retail's with the real
 * buffers (128 bytes each, as Apocalypse's twin FUN_0046b18c has them; `path` below `messagePath` on the stack):
 * the 260-byte frame needs the two marker-hiding loops written in place (as an inline helper they cost 8 more bytes
 * of frame, which an earlier draft hid with a 120-byte glyph buffer), and the highlight loop needs choiceNpc as a
 * plain `static` like selectedNpcIsFinished. Tried on top: `++` in the test (26), a post-increment subscript
 * (stores the count first), the hide loops and the list loop sharing one `i` (18), the cursor test before the
 * NPC read (10). With step 0's list build (clear the text, zero the count, the loop) as a helper, inline or plain
 * static, this source is IDENTICAL; that helper has one call site, no real function has its body and the only other
 * inliner would be Apocalypse's twin, so it is not written. */
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
static s32 choiceNpc(DummyAttachmentWork *work, s32 choice)
{
    return work->npcEntries[work->choices[choice]].npc;
}

/* Whether the chosen NPC's motion has finished. */
static u32 selectedNpcIsFinished(DummyAttachmentWork *work)
{
    return effIsFinished(work->primary[work->selected->npc - 1]->node);
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
            modelOwnerApplyAnimationTime(selectedNpcModel(work), 0.0f);
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
            char glyphs[128];
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
        buttonHelpWorkSetPreset(0xa0);
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
            /* Hide every offered NPC's marker. */
            for (s32 i = 0; i < work->choiceCount; i++) {
                asdMdlObjectHide(work->secondary[choiceNpc(work, i) - 1]);
            }
            buttonHelpSetPreset(0xa2);
            work->lastChoice = work->cursor;
            return;
        }
        /* Cancelled. */
        work->step = 5;
        work->playback.requested = 0;
        flagWordClear(&work->flags, 0x100);
        for (s32 i = 0; i < work->choiceCount; i++) {
            asdMdlObjectHide(work->secondary[choiceNpc(work, i) - 1]);
        }
        break;
    case 2: {
        char path[64];
        char messagePath[64];
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
        modelOwnerApplyAnimationTime(selectedNpcModel(work), work->unkD44);
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
