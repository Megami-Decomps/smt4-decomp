#ifndef UI_FLOAT_TABLE_LOOKUP_H
#define UI_FLOAT_TABLE_LOOKUP_H

#include "common.h"

extern "C" {
extern const f32 DAT_00536bcc[];
f32 engineGetFloatTableValue(const f32 *values, u32 index);
} /* extern "C" */

/* Reads the selected value, using the built-in table if no override was supplied. */
static __inline f32 engineFloatTableValue(const f32 *values, u32 index)
{
    if (values == NULL) {
        values = DAT_00536bcc;
    }
    return values[index];
}

#endif
