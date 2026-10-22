/* NON_MATCHING: Native destruction saves this in r4; retail recovers it by subtracting 0x1c from the embedded teardown result. */
#include "classes/Obj559010.h"

extern "C" void FUN_002eb624(u32 *value);

Obj559010::~Obj559010()
{
    FUN_002eb624(unk1c);
}
