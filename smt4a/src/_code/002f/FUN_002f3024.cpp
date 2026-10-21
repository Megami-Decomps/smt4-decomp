/* NON_MATCHING: compiler does not combine the initial dispatch-pointer stores; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 DAT_005586e8, DAT_0055b07c;
struct Object { const void *baseVtable; const void *childVtable; u32 values[6]; };
/* Initializes both dispatch pointers and clears the object's values. */
void FUN_002f3024(Object *object)
{
    object->baseVtable = &DAT_005586e8;
    object->childVtable = &DAT_0055b07c;
    for (u32 index = 0; index < 6; ++index) object->values[index] = 0;
}
}
