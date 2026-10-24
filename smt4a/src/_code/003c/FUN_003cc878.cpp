#include "common.h"

extern "C" {

void FUN_003cd7c4(const char *path, u32 length);

/* Hands the effect editor's resource directory to FUN_003cd7c4. */
void FUN_003cc878(void)
{
    FUN_003cd7c4("effect_editor/ep/", 32);
}

} /* extern "C" */
