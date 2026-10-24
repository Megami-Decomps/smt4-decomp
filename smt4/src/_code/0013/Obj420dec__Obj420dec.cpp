/* NON_MATCHING: retail clears the words one by one and stores the vtable pointer between the two groups of leading words; built merges the stores */
#include "classes/Obj420dec.h"

/* Everything starts cleared; the two heap records initialize themselves. */
Obj420dec::Obj420dec() : unk04(0), unk08(0), unk0c(0), unk10(0), unk14(0), unk18(0), unk1c(0)
{
    for (s32 i = 0; i < 20; i++) {
        words[i] = 0;
    }
}
