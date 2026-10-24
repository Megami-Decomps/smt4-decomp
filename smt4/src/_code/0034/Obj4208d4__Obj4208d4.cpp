/* NON_MATCHING: store/load scheduling differs: retail stores 0.9 and 2.9 separately and loads the vtable pointer first; built merges them into one vstm. */
#include "classes/Obj4208d4.h"

Obj4208d4::Obj4208d4()
    : kind(0x24), param08(0.9f), param0c(2.9f), param10(0.4f), param1c(0.4f), param20(0.0f), param24(-7.0f),
      param28(0.0f)
{
    offset = Obj4208d4Vec2(0.0f, -11.0f);
    rotation = Obj4208d4Vec3(0.0f, 0.02f, -0.8f);
    size = Obj4208d4Vec2(50.0f, 32.0f);
}
