#include "common.h"

extern "C" {

extern u32 g_aocMain;

int FUN_002a6c5c(u32 arg0, int id, u32 arg2);
int FUN_002a6d08(u32 arg);
int FUN_002a6f48(u32 name);

/* Resolves `name` to an id and runs FUN_002a6c5c on it; when `checked` is set it first requires FUN_002a6d08(g_aocMain) to succeed. */
bool FUN_002ae98c(u32 arg0, u32 name, u32 arg2, int checked)
{
    int id;

    if (checked != 0 && FUN_002a6d08(g_aocMain) == 0) {
        return false;
    }
    id = FUN_002a6f48(name);
    if (id == -1) {
        return false;
    }
    return FUN_002a6c5c(arg0, id, arg2) != 0;
}

} /* extern "C" */
