#include "common.h"

extern "C" const u8 DAT_0053625b[];

// Lookup the bounded category value, using the default for unknown categories.
extern "C" u32 FUN_002bd718(u32 category)
{
    return category < 11 ? DAT_0053625b[category] : 50;
}
