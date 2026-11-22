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
    _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(&first, &static_cast<const Obj55a5a8RawArray &>(Obj55a5a8RawArray()));
    firstFlag = 0;
    _ZNSt6vectorIPv12AsdAllocatorIS0_EEaSERKS3_(&second, &static_cast<const Obj55a5a8RawArray &>(Obj55a5a8RawArray()));
    kind = 0xffff;
    firstPair = *g_defaultWordPairValue;
    secondPair = *g_defaultWordPairValue;
    thirdPair = *g_defaultWordPairValue;
    fourthPair = *g_defaultWordPairValue;
    unk48 = 0;
    firstState = 0;
    secondState = 0;
    FUN_00110b28(&text, &static_cast<const SmallTextString &>(SmallTextString()));
    ready = 0;
    elements = Obj55aff4Vector();
    result = 0;
    pending = 0;
}
