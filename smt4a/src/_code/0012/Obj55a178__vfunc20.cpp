#include "classes/Obj55a178.h"

struct TargetTable {
    void *reserved[5];
    void (*handle)(void *, Obj55a178 *);
};

/* Forward this source only when the target link is enabled. */
u32 Obj55a178::vfunc20()
{
    if ((~flags & 1) == 0) {
        (*(const TargetTable **)target)->handle(target, this);
    }
    return 1;
}
