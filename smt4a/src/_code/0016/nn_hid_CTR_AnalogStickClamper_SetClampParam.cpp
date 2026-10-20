#include "common.h"

extern "C" {

typedef struct SizeRecord {
    u8 unk00[0xe];
} SizeRecord;

typedef struct SizeOwner0016ea8c {
    u8 unk00[0xc];
    SizeRecord record;             /* 0x0C */
} SizeOwner0016ea8c;

void nn_hid_CTR_AnalogStickClamper_SetClampParamImpl(SizeRecord *record, int width, int height);

/* Passes the record at the object's +0xC on to nn_hid_CTR_AnalogStickClamper_SetClampParamImpl, the function that follows it. */
void nn_hid_CTR_AnalogStickClamper_SetClampParam(SizeOwner0016ea8c *owner, int width, int height)
{
    nn_hid_CTR_AnalogStickClamper_SetClampParamImpl(&owner->record, width, height);
}

} /* extern "C" */
