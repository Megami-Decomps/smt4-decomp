#include "shard/Shard004C.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {

extern u32 padButtonIsPressed(u32 id);

u32 getMaskB6(s32 includeExtra)
{
    u32 mask = padButtonIsPressed(0x6);

    if (includeExtra != 0) {
        mask = mask | padButtonIsPressed(0xf);
    }
    return mask;
}

} /* extern "C" */
