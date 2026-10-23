/* NON_MATCHING: memset lowers to __aeabi_memset instead of retail __aeabi_memset4; all other instructions agree. */
#include "ui/TouchRegionLayout.h"
#include <string.h>

extern "C" {
void ifTouchRegionRemove(void);
u16 FUN_002b8584(u32 group, s32 region);

// Replace the layout's touch registrations with the current mode's sprite regions.
void FUN_00232698(TouchRegionLayout *layout)
{
    if (layout->count > 0) {
        for (s32 index = 0; index < layout->count; ++index)
            ifTouchRegionRemove();
        memset(layout->handles, -1, sizeof(layout->handles));
        layout->count = 0;
    }
    if (layout->alternate) {
        layout->regions.controls[0] = FUN_002b8584(46, 332);
        layout->regions.controls[1] = FUN_002b8584(46, 333);
        layout->regions.controls[2] = FUN_002b8584(46, 334);
        layout->count += 3;
        for (s32 index = 0; index < 126; ++index) {
            layout->regions.entries[index] = FUN_002b8584(46, index + 206);
            ++layout->count;
        }
    } else {
        for (s32 index = 0; index < 90; ++index) {
            layout->regions.entries[index] = FUN_002b8584(46, index + 86);
            ++layout->count;
        }
        for (s32 index = 0; index < 3; ++index) {
            layout->regions.footer[index] = FUN_002b8584(46, index + 198);
            ++layout->count;
        }
    }
}
}
