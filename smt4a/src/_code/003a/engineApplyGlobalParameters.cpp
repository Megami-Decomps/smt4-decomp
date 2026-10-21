/* NON_MATCHING: retail uses `add r1, r0, #256` where armcc emits `ldm r3, {r0, r1, r2, r3}`. */
#include "common.h"

extern "C" {

struct Parameters { u32 words[4]; };
struct GlobalParameters { u8 unk000[0x100]; Parameters parameters; };
extern GlobalParameters DAT_006471dc;
void FUN_002cf09c(u32 value);
void FUN_001acb48(void *object, const Parameters *parameters);

void engineApplyGlobalParameters(void *object, u32 value)
{
    FUN_002cf09c(value);
    Parameters parameters = DAT_006471dc.parameters;
    FUN_001acb48(object, &parameters);
}

} /* extern "C" */
