#include "common.h"

extern "C" {

extern const f32 DAT_00536bcc[];

f32 engineGetFloatTableValue(const f32 *values, u32 index)
{
    if (values == NULL) {
        values = DAT_00536bcc;
    }
    return values[index];
}

} /* extern "C" */
