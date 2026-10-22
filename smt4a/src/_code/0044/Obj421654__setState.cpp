#include "classes/Obj421654.h"

/* Set the shared state and report successful completion. */
extern "C" s32 _ZN9Obj4216548setStateEj(Obj421654StateView *object, u32 state)
{
    object->state = state;
    return 0;
}
