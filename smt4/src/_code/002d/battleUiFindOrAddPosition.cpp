/* NON_MATCHING: 70 lines, register allocation only: the unrolled clearing loop swaps its index and the odd-count test (retail: index in r2), the search loop swaps the id and pool registers, and the append addresses its last fields in another order. */
#include "battle/btlUI.h"

/* Returns the handle of the cached position request equal to `request` (same id and position), marking it
 * active and taking its mode; otherwise appends the request and returns its new handle. */
extern "C" u32 battleUiFindOrAddPosition(BtlUiObjC *owner, const BtlUiPositionQuery *request)
{
    for (s32 i = 0; i < owner->positionCount; ++i) {
        owner->positions[i].used = 0;
    }
    s32 count = owner->positionCount;
    for (s32 i = 0; i < count; ++i) {
        if (owner->positions[i].request.id == request->id && owner->positions[i].request.x == request->x &&
            owner->positions[i].request.y == request->y && owner->positions[i].request.z == request->z) {
            owner->positions[i].active = 1;
            owner->positions[i].request.mode = request->mode;
            return owner->positions[i].handle;
        }
    }
    owner->positions[count].request.id = request->id;
    owner->positions[count].request.first = request->first;
    owner->positions[count].request.second = request->second;
    owner->positions[count].request.mode = request->mode;
    owner->positions[count].request.x = request->x;
    owner->positions[count].request.y = request->y;
    owner->positions[count].request.z = request->z;
    owner->positions[count].request.value = request->value;
    owner->positions[count].active = 1;
    owner->positions[count].used = 0;
    owner->positions[count].handle = count;
    return owner->positionCount++;
}
