#include "common.h"
#include "code/Code0022_Smt4.h"
#include "addon/AocEntryKind.h"

extern "C" {

/* Whether the item is of kind 10. */
u8 aocEntryIsKindTen(u32 id)
{
    return aocEntryGetKind(id) == 10;
}

} /* extern "C" */
