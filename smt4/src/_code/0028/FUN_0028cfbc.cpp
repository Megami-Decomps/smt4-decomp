#include "common.h"
#include "code/Code0028_Smt4.h"

extern "C" {

typedef struct Widget {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 sub[0x3A];
    /* 0x62 */ u8 hidden;
} Widget;

s32 FUN_002fc240(u8 *sub);

/* Runs the sub-object's update unless the widget is hidden; returns 0 when hidden. */
s32 FUN_0028cfbc(Widget *widget)
{
    if (widget->hidden == 0) {
        return FUN_002fc240(widget->sub);
    }
    return 0;
}

} /* extern "C" */
