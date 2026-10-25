#include "AsdSDK/Source/Util/AsdListBox.h"
#include "battle/ReserveEditor.h"
#include "battle/btlMain.h"

extern "C" {
s32 jobIsValid(u32 job);
void FUN_003592dc(u32 job);
u32 jobStop(u32 job, u16 arg);
u32 asdListBoxCreateDefaultFlags(u32 parent, u32 id, u32 argument, u32 flags);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *items, s32 count);
void asdListBoxSetByteValue(u32 list, s32 value);
void jobSetText(u32 job, const char *text);
void asdListBoxSetIntItem(u32 list, s32 index, s32 value, s32 min, s32 max, s32 flags);
void asdListBoxSetFloatItem(u32 list, s32 index, s32 min, s32 max, f32 value);
s32 FUN_004d8688(u32 kind);

extern const AsdListBoxEntry DAT_00572f60[];
extern s32 DAT_00571140;
extern BtlAuxA *g_btlAux;

/* Opens the reserve-unit debug list: position, scale and yaw controls for the marked record. */
void btlReserveEditorOpenList(ReserveEditorWork *work, BtlMainStateA *battle)
{
    /* The auxiliary scalar is beyond the shared BtlAuxA prefix. */
    struct AuxEditorView { u8 unk0000[0x9C70]; f32 scalar; };
    if (jobIsValid(work->listBox)) {
        FUN_003592dc(work->listBox);
        jobStop(work->listBox, 0);
    }
    work->listBox = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
    asdListBoxAddItems(work->listBox, DAT_00572f60, 10);
    asdListBoxSetByteValue(work->listBox, 1);
    jobSetText(work->listBox, "btl EnemyModel Menu");
    ReserveEditorRecord *record = reinterpret_cast<ReserveEditorRecord *>(btlFindMarkedReserveRecord(battle));
    if (record != NULL) {
        asdListBoxSetFloatItem(work->listBox, 2, -999, 999, record->position[0]);
        asdListBoxSetFloatItem(work->listBox, 3, -999, 999, record->position[1]);
        asdListBoxSetFloatItem(work->listBox, 4, -999, 999, record->position[2]);
        asdListBoxSetFloatItem(work->listBox, 5, 0, 100, record->scale);
        asdListBoxSetFloatItem(work->listBox, 6, -3, 3, record->yaw);
        asdListBoxSetIntItem(work->listBox, 0, record->value, 0, FUN_004d8688(record->kind) - 1, 0);
        asdListBoxSetIntItem(work->listBox, 1, 0, 0, 42, 0);
    } else {
        asdListBoxSetFloatItem(work->listBox, 2, -999, 999, 0.0f);
        asdListBoxSetFloatItem(work->listBox, 3, -999, 999, 0.0f);
        asdListBoxSetFloatItem(work->listBox, 4, -999, 999, 0.0f);
        asdListBoxSetFloatItem(work->listBox, 5, 0, 100, 0.0f);
        asdListBoxSetFloatItem(work->listBox, 6, -10, 10, 0.0f);
        asdListBoxSetIntItem(work->listBox, 0, 0, 0, 32, 0);
        asdListBoxSetIntItem(work->listBox, 1, 0, 0, 42, 0);
    }
    asdListBoxSetFloatItem(work->listBox, 7, 0, 100, ((AuxEditorView *)g_btlAux)->scalar);
    asdListBoxSetIntItem(work->listBox, 8, DAT_00571140, 0, 255, 0);
    asdListBoxSetIntItem(work->listBox, 9, 0, 0, 1, 0);
}
}
