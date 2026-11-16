/* NON_MATCHING: only the playback byte at +0x2C differs: retail stores it through the playback member's base (`add r0, r4, #20; strb r1, [r0, #24]`), the build folds it into `strb r1, [r4, #44]`. */
#include "classes/Obj55c244.h"


Obj55c244::Obj55c244() : event(1), unk0c(0), unk0d(0), unk0e(0), unk0f(0), unk10(0)
{
    unk30 = 0.0f;
    unk34 = 0;
    unk35 = 0;
    unk38 = 0.0f;
    unk3c = 0.0f;
    nn_os_LightEvent_Signal(&event.event);
}
