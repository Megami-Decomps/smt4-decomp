/* NON_MATCHING: native base/member construction is integrated; temporary stack layout and initialization scheduling remain unmatched. */
#include "classes/Obj5597fc.h"

extern "C" {
extern const ZeroWordPair *g_defaultWordPairValue;
void _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(Obj55a5a8RawArray *destination, const Obj55a5a8RawArray *source);
void FUN_00110b28(SmallTextString *destination, const SmallTextString *source);
}

/* Resets the derived state after reserving the base's vector storage. */
Obj5597fc::Obj5597fc()
{
    enabled = 1;
    {
        Obj55a5a8RawArray empty;
        _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(&first, &empty);
    }
    firstFlag = 0;
    {
        Obj55a5a8RawArray empty;
        _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(&second, &empty);
    }
    kind = 0xffff;
    firstPair = *g_defaultWordPairValue;
    secondPair = *g_defaultWordPairValue;
    thirdPair = *g_defaultWordPairValue;
    fourthPair = *g_defaultWordPairValue;
    unk48 = 0;
    firstState = 0;
    secondState = 0;
    {
        SmallTextString empty;
        FUN_00110b28(&text, &empty);
    }
    ready = 0;
    elements = Obj55aff4Vector();
    result = 0;
    pending = 0;
}
