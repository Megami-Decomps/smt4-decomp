#include "common.h"

extern "C" {

#define KEY_NONE 99

int FUN_0039a598(u32 id);
int FUN_00321a98(u32 *a, u32 *b);
int FUN_0019c6bc(u32 id);

/* Runs FUN_00321a98 on two entries when their category keys (99 when FUN_0019c6bc flags the id, else FUN_0039a598(id)) are equal. */
void FUN_002fd7c0(u32 *a, u32 *b)
{
    int keyA = (FUN_0019c6bc(*a) != 0) ? KEY_NONE : FUN_0039a598(*a);
    int keyB = (FUN_0019c6bc(*b) != 0) ? KEY_NONE : FUN_0039a598(*b);

    int diff = keyA - keyB;

    if (diff != 0) {
        return;
    }
    FUN_00321a98(a, b);
}

} /* extern "C" */
