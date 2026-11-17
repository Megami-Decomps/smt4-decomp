#include "common.h"

extern "C" {

struct Parameters { u32 words[4]; };
struct GlobalParameters { u8 unk000[0x100]; Parameters parameters; };
extern GlobalParameters g_vectorScratch;
void FUN_002cf09c(u32 value);
void FUN_001acb48(void *object, const Parameters *parameters);

void engineApplyGlobalParameters(void *object, u32 value)
{
    FUN_002cf09c(value);
    Parameters parameters = g_vectorScratch.parameters;
    FUN_001acb48(object, &parameters);
}

} /* extern "C" */
