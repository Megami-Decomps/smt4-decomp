#include "classes/Obj557b18.h"

/* Clears `mask` in the body's flags. */
static __inline void modelClearFlags(Obj557b18 *body, u32 mask) { body->flags &= ~mask; }

/* Clears the body's pending flag and resets its selection. */
extern "C" void FUN_003fd790(Obj557b18 *body)
{
    modelClearFlags(body, 4);
    body->pendingValue = 0;
    body->selection = -1;
}
