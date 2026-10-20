#include "common.h"

extern "C" {

extern void asdLoadFileSync(int path, int a, int b, int mode);

/* Forwards to the function that follows it in the binary. */
void FUN_002c5c04(int path)
{
    asdLoadFileSync(path, 0, 0, 4);
}

} /* extern "C" */
