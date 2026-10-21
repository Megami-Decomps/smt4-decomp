/* NON_MATCHING: compiler uses VFP block copies for the 20-byte parameter payload instead of retail's integer loads/stores. */
#include "shard/W6_W6Match5_SelectionTransition.h"

// Copy the new selection, enter transition state nineteen, and release its old resource.
extern "C" void FUN_0047bc90(SelectionTransition *transition, const RequestParameters *parameters)
{
    transition->parameters = *parameters;
    transition->state = 0x13;
    transition->progress = 0;
    if (transition->resource != NULL) {
        transition->resource->vtable->release(transition->resource);
        transition->resource = NULL;
    }
}
