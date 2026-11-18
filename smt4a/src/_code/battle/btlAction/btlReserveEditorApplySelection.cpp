#include "battle/ReserveEditor.h"
#include "battle/btlMain.h"

extern "C" {
extern s32 DAT_00571140;
extern BtlAuxA *g_btlAux;
u32 asdListBoxGetSelectedItemId(u32);
s32 *asdListBoxGetIntValuePtr(u32, s32);
f32 *asdListBoxGetFloatValuePtr(u32, s32);

/* Apply the selected debug-list value to a reserve record or its shared scalar. */
void btlReserveEditorApplySelection(ReserveEditorWork *work, u32 id)
{
    s32 item = asdListBoxGetSelectedItemId(work->listBox);
    ReserveEditorRecord *record = reinterpret_cast<ReserveEditorRecord *>(btlFindMarkedReserveRecord(reinterpret_cast<BtlMainStateA *>(id)));
    ReserveEditorAuxStateA *aux = reinterpret_cast<ReserveEditorAuxStateA *>(g_btlAux);
    if (record != NULL) {
        switch (item) {
        case 2:
            record->previousPosition[0] = record->position[0] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 3:
            record->previousPosition[1] = record->position[1] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 4:
            record->previousPosition[2] = record->position[2] = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 5:
            record->scale = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 6:
            record->yaw = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 7:
            aux->scalar = *asdListBoxGetFloatValuePtr(work->listBox, item);
            break;
        case 8:
            DAT_00571140 = *asdListBoxGetIntValuePtr(work->listBox, item);
            break;
        case 0:
            record->value = *asdListBoxGetIntValuePtr(work->listBox, item);
            break;
        case 1:
            asdListBoxGetIntValuePtr(work->listBox, item);
            break;
        default:
            break;
        }
    } else if (item == 7) {
        aux->scalar = *asdListBoxGetFloatValuePtr(work->listBox, item);
    }
}
}
