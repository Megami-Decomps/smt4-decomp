#include "common.h"

extern "C" void predicateTableAppendRow(const char*, const char*, const char*, const char*, const char*);

// Build the string predicate for the two supported commerce pricing selections.
extern "C" u32 pricingSelectionBuildPredicate(s32 selection)
{
    switch (selection) {
    case 0:
        predicateTableAppendRow("==", "string", "PricingSelection", "PURCHASABLE", "");
        break;
    case 1:
        predicateTableAppendRow("==", "string", "PricingSelection", "RELEASED", "");
        break;
    default:
        return 0xe0e13884;
    }
    return 0;
}
