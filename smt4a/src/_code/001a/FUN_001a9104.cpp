#include "battle/btlUI.h"

extern "C" {

extern void ARM_common_memcpy4_8(void *destination, const void *source);

/* Forwards to the function that follows it in the binary. */
void FUN_001a9104(BtlUiObjCA *object, u16 *ids)
{
    ARM_common_memcpy4_8(object->unk + 0x38a8, ids);
}

} /* extern "C" */
