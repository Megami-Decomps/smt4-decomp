#include "battle/btlUI.h"

extern "C" {

/* Starts slot `slot` with mode/kind and adds `amount` to its kind-0 or kind-1 accumulator (`unused` is never read). */
void btlUiSlotMeterStart(BtlUiObjC *ui, s32 amount, s32 slot, u8 mode, s8 kind, s32 unused)
{
    ui->slotMeters.active[slot] = 1;
    ui->slotMeters.kind[slot] = kind;
    ui->slotMeters.mode[slot] = mode;
    ui->slotMeters.elapsed[slot] = 0;
    if (kind == 0) {
        ui->slotMeters.addA[slot] += amount;
    } else if (kind == 1) {
        ui->slotMeters.addB[slot] += amount;
    }
}

} /* extern "C" */
