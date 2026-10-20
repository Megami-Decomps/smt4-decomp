#include "common.h"

extern "C" {

typedef struct Obj33C8 {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
} Obj33C8;

extern Obj33C8 *DAT_00573808;

extern s32 scrGetArg(...);
extern s32 obj33C8IsEnabled(Obj33C8 *object);
extern void btlUnitSlotBind(Obj33C8 *object, s16 first, u16 second);

/* Script command: while flag 0x4000 is clear starts btlUnitSlotBind with arguments 0 and 1; once set returns 1 when the object is enabled. */
u32 FUN_0038d4c8(void)
{
    s32 first = scrGetArg();
    s32 second = scrGetArg(1);

    if ((DAT_00573808->flags & 0x4000) != 0) {
        if (obj33C8IsEnabled(DAT_00573808) != 0) {
            return 1;
        }
    } else {
        btlUnitSlotBind(DAT_00573808, first, second);
    }
    return 0;
}

} /* extern "C" */
