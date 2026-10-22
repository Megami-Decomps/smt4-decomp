#include "classes/Obj4223c4.h"

/* Invoke the current state's optional C++ member callback. */
extern "C" void bibleViewInvokeStateHandler(Obj4223c4HandlerView *object)
{
    if (object->handlers[object->state] != NULL) {
        (object->*object->handlers[object->state])();
    }
}
