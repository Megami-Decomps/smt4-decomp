#include "common.h"

extern "C" {

#define KEY_NONE 99

int dataTable04GetCategoryOrder(u32 id);
int FUN_00321a98(u32 *a, u32 *b);
int idIsAbove400(u32 id);

/* Runs FUN_00321a98 on two entries when their category keys (99 when idIsAbove400 flags the id, else dataTable04GetCategoryOrder(id)) are equal. */
void FUN_002fd7c0(u32 *a, u32 *b)
{
    int keyA = (idIsAbove400(*a) != 0) ? KEY_NONE : dataTable04GetCategoryOrder(*a);
    int keyB = (idIsAbove400(*b) != 0) ? KEY_NONE : dataTable04GetCategoryOrder(*b);

    int diff = keyA - keyB;

    if (diff != 0) {
        return;
    }
    FUN_00321a98(a, b);
}

} /* extern "C" */
