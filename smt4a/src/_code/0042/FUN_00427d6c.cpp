#include "common.h"

extern "C" void FUN_00427c74(const char*, const char*, const char*, const char*, const char*);

// Build the string predicate for the two supported commerce pricing selections.
extern "C" u32 FUN_00427d6c(s32 selection)
{
    switch (selection) {
    case 0:
        FUN_00427c74("==", "string", "PricingSelection", "PURCHASABLE", "");
        break;
    case 1:
        FUN_00427c74("==", "string", "PricingSelection", "RELEASED", "");
        break;
    default:
        return 0xe0e13884;
    }
    return 0;
}
