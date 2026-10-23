/* NON_MATCHING: compiler merges the shared scalar case after the switch instead of before integer cases. */
#include "battle/ReserveEditor.h"
#include "battle/btlMain.h"

extern "C" {
extern s32 DAT_00571140;
extern BtlAuxA *g_btlAux;
u32 asdListBoxGetSelectedItemId(u32);
s32 *asdListBoxGetIntValuePtr(u32, s32);
f32 *asdListBoxGetFloatValuePtr(u32, s32);
ReserveEditorRecord *btlFindMarkedReserveRecord(u32);

/* Apply the selected debug-list value to a reserve record or its shared scalar. */
void FUN_004d3c94(ReserveEditorWork *work, u32 id)
{
    /* The auxiliary scalar is beyond the shared BtlAuxA prefix. */
    struct AuxEditorView { u8 unk0000[0x9C70]; f32 scalar; };
    typedef char AuxEditorScalarOffset[offsetof(AuxEditorView, scalar) == 0x9C70 ? 1 : -1];
    s32 item = asdListBoxGetSelectedItemId(work->listBox);
    ReserveEditorRecord *record = btlFindMarkedReserveRecord(id);
    AuxEditorView *aux = (AuxEditorView *)g_btlAux;
    if (record != NULL) {
        switch (item) {
        case 2:
            record->previousPosition[0] = record->position[0] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 3:
            record->previousPosition[1] = record->position[1] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 4:
            record->previousPosition[2] = record->position[2] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 5:
            record->scale = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 6:
            record->yaw = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 7:
            aux->scalar = *asdListBoxGetFloatValuePtr(work->listBox, item);
            return;
        case 8:
            DAT_00571140 = *asdListBoxGetIntValuePtr(work->listBox, item);
            return;
        case 0:
            record->value = *asdListBoxGetIntValuePtr(work->listBox, item);
            return;
        case 1:
            asdListBoxGetIntValuePtr(work->listBox, item);
            return;
        default:
            return;
        }
    }
    if (item == 7) {
        aux->scalar = *asdListBoxGetFloatValuePtr(work->listBox, item);
    }
}
}
