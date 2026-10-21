#include "common.h"
extern "C" {
struct BoundedValue { u8 unk00[14]; s16 maximum; u8 unk10[0x1A]; s16 value; };
/* Clamp and store a signed value between one and the record maximum. */
s32 recordClampCurrentCount(BoundedValue *record,s32 value)
{
    if (record==NULL) return 0;
    if (value>record->maximum) value=record->maximum;
    else if (value<1) value=1;
    record->value=(s16)value;
    return (s16)value;
}
}
