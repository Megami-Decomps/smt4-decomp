/* NON_MATCHING: the states, calls and strings are retail's (435 rows for retail's 434); what differs is which copy
 * of a shared tail armcc keeps and where it puts it:
 * - retail stores every state change through one `str r0, [r4]` at the end of state 0 (`mov r0, #N; b` from the
 *   others); the build keeps that store in state 4;
 * - state 1: retail lays the B-button block and the `return -1` epilogue before the mode menu, the build after;
 * - state 2: retail sends the fallback and the B button to state 3's `job->state = 0`; the build if-converts the
 *   fallback's store (strne) and reuses the zero it cleared the list with;
 * - state 6 keeps its own `job->state = 0` store in retail (the build branches to the shared one);
 * - state 0 tests and offsets the incoming state register (r1) for the first action pass; the build uses its
 *   saved copy (r5) in those two rows.
 * The enemy position editor (state 7) is the inlined step retail shows (it copies the incoming state register). */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlHelp.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "sys/RuntimeObjects.h"
#include "battle/BtlGlobals.h"

/* The editor job: its state, the list box it shows and the selection the sub-editors keep.
 * The first 0x14 bytes are shared with BtlActionSelection (member/category/variant at 0x10..0x13). */
struct BattleDebugEditorJob {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 list;
    /* 0x10 */ s16 selection;
    /* 0x12 */ s8 category;
    /* 0x13 */ s8 variant;
    /* 0x14 */ u16 cameraMode;
};
typedef char BattleDebugEditorJobLayout[offsetof(BattleDebugEditorJob, list) == 0xC &&
    offsetof(BattleDebugEditorJob, selection) == offsetof(BtlActionSelection, memberId) &&
    offsetof(BattleDebugEditorJob, category) == offsetof(BtlActionSelection, category) &&
    offsetof(BattleDebugEditorJob, cameraMode) == 0x14 ? 1 : -1];

/* unit-local: a position as the editor moves it between the list box, the records and the camera. */
struct EditorVectorWords {
    f32 x;
    f32 y;
    f32 z;
};

/* A battle unit record's position, as raw words. */
struct EditorUnitPosition {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EditorVectorWords position;
};

/* Camera positions the editor keeps in the battle state. */
struct EditorCameraState {
    /* 0x0000 */ u8 unk0000[0x1EA4];
    /* 0x1EA4 */ EditorVectorWords positionA;
    /* 0x1EB0 */ EditorVectorWords positionB;
};

/* The position arrangement file: its kind byte sits at 0x0A. */
struct PosArrangeFile {
    /* 0x00 */ u8 unk00[10];
    /* 0x0A */ u8 kind;
};

extern "C" {
void asdListBoxSetByteValue(u32 list, u8 value);
extern const char DAT_00400660[];
extern const char DAT_00400658[];
extern const char DAT_00400650[];
extern const char DAT_00400648[];
extern const char DAT_004005c8[];
extern const char DAT_004005bc[];
extern const char DAT_004005b0[];
extern const char DAT_004005a8[];
extern const char DAT_004005a0[];
extern const char DAT_00400598[];
extern const char DAT_00400588[];

s32 padIsButtonPressed(u32 button);
u32 asdListBoxCreate(u32 parent, s32 group, s32 x, s32 y, s32 flags);
void FUN_00192a9c(const Point2 *position, const u32 *handle, u32 value);
u32 textMeasureFixedWidth(const char *text);
void jobSetWork7C(u32 list, void (*draw)(const Point2 *, const u32 *, u32), u32 (*measure)(const char *));
void debugEditorListSetCellSize(u32 list, s32 width, s32 height);
void asdListBoxAddItem(u32 list, const char *text);
u32 asdListBoxGetSelectedItemId(u32 list);
const char *btlPosArrangeGetFilePath(BtlMainState *state);
char *libc_strcpy(char *destination, const char *source);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enabled);
EditorUnitPosition *FUN_0033a5ec(BtlMainState *state, s32 unit);
void btlDebugEditorRestoreSelection(BattleDebugEditorJob *job, BtlMainState *state);
void FUN_003d8b34(BattleDebugEditorJob *job, BtlMainState *state, u32 parent);
void FUN_003d9628(BattleDebugEditorJob *job, BtlMainState *state, const PosArrangeFile *file);
void btlDebugNavigateActionEditor(BattleDebugEditorJob *job, BtlMainState *state);
void btlCameraEditorInitializeList(BattleDebugEditorJob *job, BtlMainState *state, u32 parent, u32 mode);

/* Creates the editor's list box under the battle's job and applies the shared layout. */
static __inline void debugListCreate(BattleDebugEditorJob *job, u32 parent)
{
    job->list = asdListBoxCreate(parent, 0xEB, 16, 32, 4);
    jobSetWork7C(job->list, FUN_00192a9c, textMeasureFixedWidth);
    debugEditorListSetCellSize(job->list, 12, 16);
}

/* The first menu: three entries. */
static __inline void debugMenuOpenRoot(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state->editor.job);
    jobSetText(job->list, DAT_00400660);
    asdListBoxAddItem(job->list, DAT_00400658);
    asdListBoxAddItem(job->list, DAT_00400650);
    asdListBoxAddItem(job->list, DAT_00400648);
    asdListBoxSetByteValue(job->list, 1);
}

/* The editor choice menu: action editor or camera editor. */
static __inline void debugMenuOpenMode(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state->editor.job);
    jobSetText(job->list, DAT_004005c8);
    asdListBoxAddItem(job->list, DAT_004005bc);
    asdListBoxAddItem(job->list, DAT_004005b0);
    asdListBoxSetByteValue(job->list, 1);
}

/* The camera editor's menu (three entries); the job waits in state 4 for the choice. */
static __inline void debugMenuOpenCamera(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state->editor.job);
    jobSetText(job->list, DAT_004005a8);
    asdListBoxAddItem(job->list, DAT_004005a0);
    asdListBoxAddItem(job->list, DAT_00400598);
    asdListBoxAddItem(job->list, DAT_00400588);
    asdListBoxSetByteValue(job->list, 1);
    job->state = 4;
}

/* Closes the job's list box. */
static __inline void debugListClose(BattleDebugEditorJob *job)
{
    jobStop(job->list, 0);
    job->list = 0;
}

/* The enemy position editor (state 7): B closes it; otherwise the three list values become the
 * selected enemy's position, in its editor record and in its battle unit. */
static __inline void debugEnemyPositionStep(BattleDebugEditorJob *job, BtlMainState *state)
{
    if (padIsButtonPressed(1)) {
        debugListClose(job);
        job->state = 3;
    } else {
        struct EnemyEditorRecords {
            u8 unk0000[0x1E98];
            u8 *records;
        };
        u32 list = job->list;
        EditorUnitPosition *record = reinterpret_cast<EditorUnitPosition *>(
            reinterpret_cast<EnemyEditorRecords *>(state)->records + job->selection * 0x114);
        btlFindEntryBlockByMemberId(state, job->selection);
        EditorUnitPosition *unit = FUN_0033a5ec(state, job->selection);
        record->position.x = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 1));
        record->position.y = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 2));
        record->position.z = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 3));
        unit->position.x = record->position.x;
        unit->position.y = record->position.y;
        unit->position.z = record->position.z;
    }
}

/* Clears flag 8 of the enemies' flagged actions. Retail tests the state and its action table once for this
 * pass and again for the next one, as two functions with the same guard do. */
static __inline void debugActionsClearHidden(BtlMainState *state)
{
    if (state != NULL && state->actions != NULL) {
        for (s32 index = 4; index < 54; ++index) {
            BtlActionRecord *action = &state->actions[index];
            if ((action->status & 1) && (action->status & 0x80))
                action->status &= ~8;
        }
    }
}

/* Puts every action's saved value back. */
static __inline void debugActionsRestore(BtlMainState *state)
{
    if (state != NULL && state->actions != NULL) {
        for (s32 index = 0; index < 109; ++index) {
            BtlActionRecord *action = &state->actions[index];
            action->editorRestore.current = action->editorRestore.saved;
        }
    }
}

/* Drives the battle debug editor: root menu, mode menu, action/enemy/camera editors and the position arrangement load. */
u32 btlDebugEditorStep(BattleDebugEditorJob *job, BtlMainState *state)
{
    switch (job->state) {
    case 0:
        debugActionsClearHidden(state);
        debugActionsRestore(state);
        debugMenuOpenRoot(job, state);
        job->state = 1;
        break;
    case 1:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            if (selected == 0) {
                debugMenuOpenMode(job, state);
                job->state = 2;
                break;
            } else if (selected == 1) {
                job->state = 5;
                break;
            } else if (selected == 2) {
                job->state = 6;
                break;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
        } else {
            break;
        }
        return 0xFFFFFFFF;
    case 2:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            switch (selected) {
            case 0:
                btlDebugEditorRestoreSelection(job, state);
                job->state = 3;
                break;
            case 1:
                debugMenuOpenCamera(job, state);
                break;
            default:
                job->state = 0;
                break;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
            job->state = 0;
        }
        break;
    case 6: {
        char path[128];
        memClear(path, sizeof(path));
        libc_strcpy(path, btlPosArrangeGetFilePath(state));
        s32 rawPaths = asdLoadFileGetUseRawPaths();
        asdLoadFileSetUseRawPaths(1);
        const PosArrangeFile *file = static_cast<const PosArrangeFile *>(asdLoadFileSyncDefault(path));
        asdLoadFileSetUseRawPaths(rawPaths);
        if (file->kind == 1)
            FUN_003d9628(job, state, file);
        job->state = 0;
        break;
    }
    case 3:
        if (padIsButtonPressed(0)) {
            FUN_003d8b34(job, state, state->editor.job);
            job->state = 7;
            break;
        } else if (padIsButtonPressed(1)) {
            job->state = 0;
            break;
        } else {
            btlDebugNavigateActionEditor(job, state);
        }
        break;
    case 5:
        job->state = 0;
        break;
    case 7:
        debugEnemyPositionStep(job, state);
        break;
    case 4:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            switch (selected) {
            case 0:
            case 1:
            case 2:
                btlCameraEditorInitializeList(job, state, state->editor.job, (u16)selected);
                job->state = 8;
                break;
            default:
                debugMenuOpenMode(job, state);
                job->state = 2;
                break;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
            debugMenuOpenMode(job, state);
            job->state = 2;
            break;
        }
        break;
    case 8:
        if (padIsButtonPressed(1)) {
            debugListClose(job);
            debugMenuOpenCamera(job, state);
        } else {
            u32 list = job->list;

            switch (job->cameraMode) {
            case 0:
            case 1: {
                EditorCameraState *camera = reinterpret_cast<EditorCameraState *>(state);
                EditorVectorWords *saved = job->cameraMode == 0 ? &camera->positionA : &camera->positionB;
                EditorVectorWords *current = reinterpret_cast<EditorVectorWords *>(
                    job->cameraMode == 0 ? g_btlMain->vectors[0] : g_btlMain->vectors[1]);
                current->x = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 0));
                current->y = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 1));
                current->z = *reinterpret_cast<const f32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 2));
                *saved = *current;
                *reinterpret_cast<EditorVectorWords *>(g_btlMain->cameraPosition) = *current;
                break;
            }
            case 2:
                g_btlMain->editorValue = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(list), 0);
                break;
            }
        }
        break;
    case 9:
        return 0xFFFFFFFF;
    }
    return 0;
}
}
