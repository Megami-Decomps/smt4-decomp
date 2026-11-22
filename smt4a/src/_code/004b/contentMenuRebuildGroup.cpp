/* NON_MATCHING: 137 lines. Retail keeps the entry's x/y in r2/r3 across uiClampScrollOffset (it knows the
   callee's clobbers: the unit's multifile partner, which leaves the core registers alone), which frees r4 for the scroll's duration
   (stm of elapsed/duration) and moves the loop registers (index r5/entry r6, the script in fp and the name table
   spilled in the first loop); its second loop reads the name table before the script; frame 324 against 340. */
#include <stdio.h>
#include "camp/ScriptPanelResources.h"
#include "mikado/mikadoMain.h"
#include "gamedata/TableGroup.h"
#include "script/scrScriptProcess.h"
#include "addon/AocSystemA.h"
#include "AsdSDK/AsdMemUtil.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "gamedata/GameDataAccess_VariantG.h"

extern "C" {

MikadoRecord *dataTable33Type0GetEntry(u8 *table, u32 index);
s32 dataTable33Type0Count(u8 *table);
ListEntry20 *dataTable33GetEntryByGroup(u8 *table, s32 group, u32 index);
s32 dataTable33GroupCount(u8 *table, s32 group);
void FUN_001b4a74(Menu4C *menu);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);
void resultGetListEntryLabel(Menu4C *menu, ListEntry20 *entry, s32 mode);
s32 packageListCountSectionRecords(AocSystemA *system, u32 section);
void transformInterpolationStep(TransformInterpolation *transform);
bool gameStateIsFlagSetAndLarge(void);
void menu4CScrollToKind(Menu4C *menu, u32 kind);
ListEntry20 *menu4CGetCurrentEntry(Menu4C *menu);
void menu4CReset(Menu4C *menu);
void widgetShow(Menu4C *menu);

extern char DAT_005328fc[];  /* the condition script's entry name format */
extern s32 g_scrConditionRejected;     /* set by a condition script that hides its entry */

/* Fills the panel's list for location `id` (group `group`, or the location's own when -1) with the entries whose
   condition script and flags allow them, then scrolls the view to the starting entry. */
void contentMenuRebuildGroup(CampScriptPanelResources *work, s32 id, s32 group)
{
    u8 table[20];
    char listed[256];
    char conditionName[32];
    MikadoRecord *records = dataTable33Type0GetEntry(table, 0);
    s32 recordCount = dataTable33Type0Count(table);

    work->panel.record = NULL;
    for (s32 i = 0; i < recordCount; i++) {
        if (records[i].id == id) {
            work->panel.record = &records[i];
            break;
        }
    }
    FUN_001b4a74(&work->panel.menu);
    if (group == -1) {
        work->panel.group = work->panel.record->group;
    } else {
        work->panel.group = group;
    }

    ListEntry20 *entries = dataTable33GetEntryByGroup(table, work->panel.group, 0);
    s32 count = dataTable33GroupCount(table, work->panel.group);
    sysMemClear(listed, sizeof(listed));
    for (s32 i = 0; i < count; i++) {
        ListEntry20 *entry = &entries[i];

        if (entry->kind == 0 || listed[entry->kind] == 0) {
            ScriptProcess *script = work->conditionScript;
            TableGroupHeader *names = work->conditionNames;

            if (entry->conditionName[0] != '0') {
                g_scrConditionRejected = 0;
                sprintf(conditionName, DAT_005328fc, entry->conditionName);
                scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(names, conditionName));
                while (scrRunOpcodesStub(script) != 2) {
                }
                if (g_scrConditionRejected != 0) {
                    continue;
                }
            }
            if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
                listed[entry->kind] = 1;
                resultGetListEntryLabel(&work->panel.menu, entry, id);
            }
        }
    }

    /* The same for the add-on content's entries of the group. */
    count = packageListCountSectionRecords(g_aocSystem, work->panel.group + 1);
    for (s32 i = 0; i < count; i++) {
        ListEntry20 *entry = (ListEntry20 *)contentEntryGetFromFilesByKind(g_aocSystem, work->panel.group + 1, i);

        if (entry->kind == 0 || listed[entry->kind] == 0) {
            ScriptProcess *script = work->conditionScript;
            TableGroupHeader *names = work->conditionNames;

            if (entry->conditionName[0] != '0') {
                g_scrConditionRejected = 0;
                sprintf(conditionName, DAT_005328fc, entry->conditionName);
                scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(names, conditionName));
                while (scrRunOpcodesStub(script) != 2) {
                }
                if (g_scrConditionRejected != 0) {
                    continue;
                }
            }
            if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
                listed[entry->kind] = 1;
                resultGetListEntryLabel(&work->panel.menu, entry, id);
            }
        }
    }
    widgetShow(&work->panel.menu);

    s32 kind = -1;
    if (gameStateIsFlagSetAndLarge() != 0) {
        kind = g_gameState.savedAreaId;
    }
    if (work->mikado.startEntryId != 0) {
        kind = work->mikado.startEntryId;
    }
    if (kind != -1) {
        menu4CScrollToKind(&work->panel.menu, kind);
    }

    ListEntry20 *current = menu4CGetCurrentEntry(&work->panel.menu);
    transformInterpolationScrollTo(&work->scroll, current->x, current->y, 1);
    transformInterpolationStep(&work->scroll);
    menu4CReset(&work->panel.menu);
}

} /* extern "C" */
