#include "classes/Obj4223ac.h"
#include "classes/Obj422594.h"

extern "C" {
s32 FUN_00231434(s32 table, s32 id, s32 *a, s32 *b, s32 *c, u32 *d);
void FUN_002346ac(Obj4223ac *obj, s32 a, s32 b, s32 c, u32 d);
void touchRegisterSecondRegion(Obj4223ac *obj, s32 a, s32 b, s32 c, u32 d);
void touchRegisterFirstRegion(Obj4223ac *obj, s32 a, s32 b, s32 c, u32 d);
}

/* Reads three entries of table 0x2b (ids 0xfa-0xfc, or 0xfd-0xff for type 9) and hands each to one
 * of the object's setters. */
void Obj4223ac::initialize(const void *param)
{
    s32 type = ((const Obj4223acParam *)param)->type;
    s32 a;
    s32 b;
    s32 c;
    u32 d;

    Obj422594::initialize(param);
    if (type != 9) {
        FUN_00231434(0x2b, 0xfa, &a, &b, &c, &d);
        touchRegisterFirstRegion(this, a, b, c, d);
        FUN_00231434(0x2b, 0xfb, &a, &b, &c, &d);
        touchRegisterSecondRegion(this, a, b, c, d);
        FUN_00231434(0x2b, 0xfc, &a, &b, &c, &d);
        FUN_002346ac(this, a, b, c, d);
        return;
    }
    FUN_00231434(0x2b, 0xfd, &a, &b, &c, &d);
    touchRegisterFirstRegion(this, a, b, c, d);
    FUN_00231434(0x2b, 0xfe, &a, &b, &c, &d);
    touchRegisterSecondRegion(this, a, b, c, d);
    FUN_00231434(0x2b, 0xff, &a, &b, &c, &d);
    FUN_002346ac(this, a, b, c, d);
}
