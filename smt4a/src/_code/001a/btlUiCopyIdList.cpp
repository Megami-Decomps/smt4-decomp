#include "battle/btlUI.h"

extern "C" {

extern void __ARM_common_memcpy4_8(void *destination, const void *source);

/* Forwards to the function that follows it in the binary. */
void btlUiCopyIdList(BtlUiObjCA *object, u16 *ids)
{
    __ARM_common_memcpy4_8(object->unk + 0x38a8, ids);
}

} /* extern "C" */
