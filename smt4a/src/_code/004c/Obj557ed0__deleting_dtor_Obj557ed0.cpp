/* NON_MATCHING: the member destructor call (a removed weak call, NOP) now matches; retail recovers the owner address from its result (sub r0,#0x400; sub r0,#0xd8) because floatPair is a typed member, here it is a raw byte block so armcc keeps this in r4. */
#include "classes/Obj557ed0.h"
#include "classes/FloatState.h"

/* The float-pair member's destructor is a release-build leftover armlink removed (its call is a NOP). */
class FloatStateMember : public FloatState {
public:
    ~FloatStateMember() __attribute__((weak));
};

/* Destroys the object's members and frees it. */
Obj557ed0::~Obj557ed0()
{
    reinterpret_cast<FloatStateMember *>(floatPair)->~FloatStateMember();
}
