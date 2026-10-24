#include "common.h"

struct Data00326f64 {
    /* 0x00 */ u8 data[0x24];
    /* 0x24 */ u8 second[0x10];
    /* 0x34 */ u32 value;
};

struct Object00326f64 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Data00326f64 *data;
};

extern "C" {

void FUN_00243d20(void *first, void *second, u32 value);

/* Forwards the object's data record (0xc): its start, the block at 0x24 and the value at 0x34. */
void FUN_00326f64(Object00326f64 *object)
{
    Data00326f64 *data = object->data;
    FUN_00243d20(data->data, data->second, data->value);
}

} /* extern "C" */
