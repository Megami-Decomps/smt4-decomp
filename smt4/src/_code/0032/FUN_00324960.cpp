#include "common.h"

struct ParameterData {
    /* 0x00 */ u8 data[0x34];
    /* 0x34 */ u32 value;
};

struct ParameterOwner {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ ParameterData *parameters;
};

extern "C" {

void FUN_00243d20(void *first, void *second, u32 value);

/* Virtual slot: applies the owner's parameter block. */
void FUN_00324960(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    FUN_00243d20(data->data + 0, data->data + 36, data->value);
}

} /* extern "C" */
