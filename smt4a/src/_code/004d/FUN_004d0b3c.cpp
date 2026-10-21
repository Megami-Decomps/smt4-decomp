/* NON_MATCHING: constructor entry still needs a class-compatible symbol and the halfword field at +4 in Obj422594. */
#include "classes/Obj422594.h"
extern "C" {
extern u8 _ZTV9Obj422594[];
struct TouchObjectState { const u8 *vtable; u16 state; };
/* Installs the dispatch table and clears the initial state. */
TouchObjectState *FUN_004d0b3c(TouchObjectState *object) {
    object->vtable = _ZTV9Obj422594 + 8;
    object->state = 0;
    return object;
}
}
