/* NON_MATCHING: prologue only (cases and the 0x84-byte switch table match): retail compares the state before pushing and moves `this` to r4 only inside case 0 (case 6 uses r0 directly); the build pushes first and hoists mov r4, r0. The self tail call and the case-5 tail into FUN_00413144 also show as relocated branches in fdiff. */
#include "classes/Obj557c90.h"

extern "C" {
s32 FUN_002ea12c(void);
void FUN_00413144(Obj557c90 *job);
void FUN_00413e50(Obj557c90 *job);
void FUN_004134f8(Obj557c90 *job);
void FUN_004139ec(Obj557c90 *job);
void uiOpenSelectedValueDialog(Obj557c90 *job);
}

/* Moves the online job to `state`: opens the dialog (state 0, then on to 4), or runs the state's handler. */
void Obj557c90::setState(u32 state)
{
    switch (state) {
    case 0:
        dialogResult = FUN_002ea12c();
        if (dialogResult != 0) {
            setState(4);
        }
        break;
    case 6:
        failed = 1;
        break;
    case 1:
        FUN_00413e50(this);
        break;
    case 2:
        FUN_004134f8(this);
        break;
    case 3:
        FUN_004139ec(this);
        break;
    case 4:
        uiOpenSelectedValueDialog(this);
        break;
    case 5:
        FUN_00413144(this);
        break;
    }
}
