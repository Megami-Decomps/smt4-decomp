/* NON_MATCHING: compiler materializes a zero return instead of retail conditional branch. */
#include "common.h"
struct ActiveObject { u8 unk00[98]; u16 active; };
/* Tests the optional object's active field. */
extern "C" bool FUN_004bd730(const ActiveObject *object) { return object != NULL && object->active != 0; }
