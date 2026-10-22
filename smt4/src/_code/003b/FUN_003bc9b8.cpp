/* NON_MATCHING: armcc emits an explicit moveq #0; retail retains the already-zero result and branches to the return instruction. */
#include "shard/Shard003B.h"

/* Report whether the optional object's state flag is set. */
extern "C" s32 FUN_003bc9b8(const StateFlag46 *object)
{
    return object != NULL && object->state != 0;
}
