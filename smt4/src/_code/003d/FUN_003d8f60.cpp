/* NON_MATCHING: readable rewrite of the battle debug editor job (nine states, same calls and strings as retail); armcc places the shared menu-open blocks and allocates the action-scan index/pointer registers differently. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlHelp.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "sys/RuntimeObjects.h"

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

/* Three raw words (a position's floats move between the list box and the records unconverted). */
struct EditorVectorWords {
    u32 x;
    u32 y;
    u32 z;
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
extern BtlMain *g_btlMain;
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
void FUN_00227200(u32 list, void (*draw)(const Point2 *, const u32 *, u32), u32 (*measure)(const char *));
void FUN_002271e8(u32 list, s32 width, s32 height);
void asdListBoxAddItem(u32 list, const char *text);
u32 asdListBoxGetSelectedItemId(u32 list);
const char *btlPosArrangeGetFilePath(BtlMainState *state);
char *libc_strcpy(char *destination, const char *source);
s32 asdLoadFileGetUseRawPaths(void);
void asdLoadFileSetUseRawPaths(s32 enabled);
EditorUnitPosition *FUN_0027da30(BtlMainState *state, s32 unit);
EditorUnitPosition *FUN_0033a5ec(BtlMainState *state, s32 unit);
void FUN_003d8a18(BattleDebugEditorJob *job, BtlMainState *state);
void FUN_003d8b34(BattleDebugEditorJob *job, BtlMainState *state, u32 parent);
void FUN_003d9628(BattleDebugEditorJob *job, BtlMainState *state, const PosArrangeFile *file);
void btlDebugNavigateActionEditor(BattleDebugEditorJob *job, BtlMainState *state);
void btlCameraEditorInitializeList(BattleDebugEditorJob *job, BtlMainState *state, u32 parent, u32 mode);

/* Creates the editor's list box under the battle's job and applies the shared layout. */
static __inline void debugListCreate(BattleDebugEditorJob *job, BtlMainState *state)
{
    job->list = asdListBoxCreate(state->editor.job, 0xEB, 16, 32, 4);
    FUN_00227200(job->list, FUN_00192a9c, textMeasureFixedWidth);
    FUN_002271e8(job->list, 12, 16);
}

/* The first menu: three entries. */
static __inline void debugMenuOpenRoot(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state);
    jobSetText(job->list, DAT_00400660);
    asdListBoxAddItem(job->list, DAT_00400658);
    asdListBoxAddItem(job->list, DAT_00400650);
    asdListBoxAddItem(job->list, DAT_00400648);
    asdListBoxSetByteValue(job->list, 1);
}

/* The editor choice menu: action editor or camera editor. */
static __inline void debugMenuOpenMode(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state);
    jobSetText(job->list, DAT_004005c8);
    asdListBoxAddItem(job->list, DAT_004005bc);
    asdListBoxAddItem(job->list, DAT_004005b0);
    asdListBoxSetByteValue(job->list, 1);
}

/* The camera editor's menu (three entries); the job waits in state 4 for the choice. */
static __inline void debugMenuOpenCamera(BattleDebugEditorJob *job, BtlMainState *state)
{
    debugListCreate(job, state);
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

/* Drives the battle debug editor: root menu, mode menu, action/enemy/camera editors and the position arrangement load. */
u32 FUN_003d8f60(BattleDebugEditorJob *job, BtlMainState *state)
{
    u32 next;
    switch (job->state) {
    case 0:
        if (state != NULL) {
            BtlActionRecord **actions = &state->actions;
            s32 index;
            if (*actions != NULL) {
                for (index = 4; index < 54; ++index) {
                    BtlActionRecord *action = &(*actions)[index];
                    if ((action->status & 1) && (action->status & 0x80))
                        action->status &= ~8;
                }
            }
            if (state != NULL && *actions != NULL) {
                for (index = 0; index < 109; ++index) {
                    BtlActionRecord *action = &(*actions)[index];
                    action->editorRestore.current = action->editorRestore.saved;
                }
            }
        }
        debugMenuOpenRoot(job, state);
        next = 1;
        break;
    case 1:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            if (selected == 0) {
                debugMenuOpenMode(job, state);
                next = 2;
            } else if (selected == 1) {
                next = 5;
            } else if (selected == 2) {
                next = 6;
            } else {
                return 0xFFFFFFFF;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
            return 0xFFFFFFFF;
        } else {
            return 0;
        }
        break;
    case 2:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            if (selected == 0) {
                FUN_003d8a18(job, state);
                next = 3;
            } else if (selected == 1) {
                debugMenuOpenCamera(job, state);
                return 0;
            } else {
                next = 0;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
            next = 0;
        } else {
            return 0;
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
        return 0;
    }
    case 3:
        if (padIsButtonPressed(0)) {
            FUN_003d8b34(job, state, state->editor.job);
            next = 7;
        } else if (padIsButtonPressed(1)) {
            next = 0;
        } else {
            btlDebugNavigateActionEditor(job, state);
            return 0;
        }
        break;
    case 5:
        next = 0;
        break;
    case 7:
        if (padIsButtonPressed(1)) {
            debugListClose(job);
            next = 3;
        } else {
            struct EnemyEditorRecords {
                u8 unk0000[0x1E98];
                u8 *records;
            };
            u32 list = job->list;
            EditorUnitPosition *record = reinterpret_cast<EditorUnitPosition *>(
                reinterpret_cast<EnemyEditorRecords *>(state)->records + job->selection * 0x114);
            FUN_0027da30(state, job->selection);
            EditorUnitPosition *unit = FUN_0033a5ec(state, job->selection);
            record->position.x = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 1));
            record->position.y = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 2));
            record->position.z = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 3));
            unit->position = record->position;
            return 0;
        }
        break;
    case 4:
        if (padIsButtonPressed(0)) {
            u32 selected = asdListBoxGetSelectedItemId(job->list);
            debugListClose(job);
            if (selected == 0 || selected == 1 || selected == 2) {
                btlCameraEditorInitializeList(job, state, state->editor.job, (u16)selected);
                next = 8;
            } else {
                debugMenuOpenMode(job, state);
                next = 2;
            }
        } else if (padIsButtonPressed(1)) {
            debugListClose(job);
            debugMenuOpenMode(job, state);
            next = 2;
        } else {
            return 0;
        }
        break;
    case 8:
        if (padIsButtonPressed(1)) {
            debugListClose(job);
            debugMenuOpenCamera(job, state);
            return 0;
        } else {
            u32 list = job->list;
            u32 mode = job->cameraMode;
            if (mode == 0 || mode == 1) {
                EditorCameraState *camera = reinterpret_cast<EditorCameraState *>(state);
                EditorVectorWords *saved = mode == 0 ? &camera->positionA : &camera->positionB;
                EditorVectorWords *current = reinterpret_cast<EditorVectorWords *>(
                    mode == 0 ? g_btlMain->cameraEditor.vectors[0] : g_btlMain->cameraEditor.vectors[1]);
                current->x = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 0));
                current->y = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 1));
                current->z = *reinterpret_cast<const u32 *>(asdListBoxGetItemText(reinterpret_cast<void *>(list), 2));
                *saved = *current;
                *reinterpret_cast<EditorVectorWords *>(g_btlMain->cameraPosition) = *current;
            } else if (mode == 2) {
                g_btlMain->cameraEditor.value = *asdListBoxGetItemValuePtr(reinterpret_cast<void *>(list), 0);
            }
            return 0;
        }
    case 9:
        return 0xFFFFFFFF;
    default:
        return 0;
    }
    job->state = next;
    return 0;
}
}

