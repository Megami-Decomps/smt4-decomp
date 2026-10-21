/* NON_MATCHING: compiler preserves the object-slot address; retail stores NULL through the owner base. */
#include "common.h"

struct ScreenResourceOwner {
    u8 unk000[0x5a8]; // 0x000
    void* object;      // 0x5a8
    void* buffer;      // 0x5ac
};

extern "C" {
void* FUN_004279cc(void* object);
void asdOperatorDelete(void* object);
void asdMemFree(void* memory);

// Release the owned object and backing allocation.
void FUN_00473710(ScreenResourceOwner* owner)
{
    if (owner->object != NULL) {
        asdOperatorDelete(FUN_004279cc(owner->object));
        owner->object = NULL;
    }
    if (owner->buffer != NULL) {
        asdMemFree(owner->buffer);
        owner->buffer = NULL;
    }
}
}
