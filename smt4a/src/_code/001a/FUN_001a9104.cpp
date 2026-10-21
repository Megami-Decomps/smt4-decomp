#include "battle/btlUI.h"

extern "C" {

extern void wordPairCopy(void *destination, const void *source);

/* Forwards to the function that follows it in the binary. */
void FUN_001a9104(BtlUiObjCA *object, u16 *ids)
{
    wordPairCopy(object->unk + 0x38a8, ids);
}

} /* extern "C" */
