/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[8]; u8 *values; u8 fallback; };
s32 FUN_002eabfc(void);
/* Writes the selected indexed byte, or the fallback byte if none is selected. */
Object *FUN_002f27c0(Object *object, const u8 *value) {
    s32 index = FUN_002eabfc();
    if (index != 0) object->values[index] = *value;
    else object->fallback = *value;
    return object;
}
}
