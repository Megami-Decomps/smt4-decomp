#include "common.h"

extern "C" void FUN_00352fd8(const char*, const char*, const char*, const char*, const char*);

// Build the string predicate for the two supported commerce pricing selections.
extern "C" u32 FUN_00353098(s32 selection)
{
    switch (selection) {
    case 0:
        FUN_00352fd8("==", "string", "PricingSelection", "PURCHASABLE", "");
        break;
    case 1:
        FUN_00352fd8("==", "string", "PricingSelection", "RELEASED", "");
        break;
    default:
        return 0xe0e13884;
    }
    return 0;
}
