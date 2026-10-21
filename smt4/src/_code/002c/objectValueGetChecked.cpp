#include "common.h"

namespace {
struct Value { u32 first, second, third; };
struct Object {
    /* 0x00 */ u8 padding[0x28];
    /* 0x28 */ s32 count;
    /* 0x2c */ u8 gap[0x58];
    /* 0x84 */ Value value;
};
}
extern "C" {
/* Copies the object's value when the requested index is in range. */
void objectValueGetChecked(const Object *object, s32 index, Value *output)
{
    if (index >= 0 && index < object->count) {
        *output = object->value;
    }
}
}
