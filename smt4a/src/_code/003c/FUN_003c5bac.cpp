/* NON_MATCHING: retail keeps the table address in a register and adds the offset at run time; armcc folds it into the pool word. */
#include "common.h"

struct ParameterData {
    /* 0x00 */ u8 data[0x8c];
    /* 0x8C */ u32 value;
};

struct ParameterOwner {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ ParameterData *parameters;
};

extern "C" {

extern u8 DAT_0059ee68[];

void FUN_0031ab38(void *source, u32 value, void *destination);

/* Virtual slot: applies the owner's parameter block at +96 to the table at DAT_0059ee68 +112. */
void FUN_003c5bac(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    FUN_0031ab38(data->data + 96, data->value, DAT_0059ee68 + 112);
}

} /* extern "C" */
