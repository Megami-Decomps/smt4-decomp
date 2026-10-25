#include "addon/AocEntryKind.h"

extern "C" {

u32 aocEntryGetKindForward(u32 id)
{
    return aocEntryGetKind(id);
}

} /* extern "C" */
