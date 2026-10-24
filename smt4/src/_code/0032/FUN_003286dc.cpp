#include "common.h"

extern "C" {

void FUN_00242234(const char *path, u32 length);

/* Hands the effect editor's resource directory to FUN_00242234. */
void FUN_003286dc(void)
{
    FUN_00242234("effect_editor/ep/", 32);
}

} /* extern "C" */
