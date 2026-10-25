#include "common.h"
struct ActiveObject { u8 unk00[98]; u16 active; };
/* Tests the optional object's active field. */
extern "C" bool FUN_004bd730(const ActiveObject *object)
{
    if (object == NULL)
        return false;
    return object->active != 0;
}
