/* NON_MATCHING: retail stores the vtable pointer and the event words separately (str/str/str, no stm) and addresses the u8 at 0x2c as `[this+0x14]+0x18` (a sub-object based at 0x14 holds the playback floats and that byte); the build merges the first stores into stm and uses [this, #44]. */
#include "classes/Obj55c244.h"

Obj55c244::Obj55c244()
{
    nn_os_LightEvent_Initialize(&event, 1);
    unk0c = 0;
    unk0d = 0;
    unk0e = 0;
    unk0f = 0;
    unk10 = 0;
    unk14 = 1.0f;
    unk18 = 1.0f;
    unk1c = 0.0f;
    unk20 = 0.0f;
    unk24 = 0.0f;
    unk2e = 0;
    unk2c = 0xff;
    unk28 = 0.0f;
    unk30 = 0.0f;
    unk34 = 0;
    unk35 = 0;
    unk38 = 0.0f;
    unk3c = 0.0f;
    nn_os_LightEvent_Signal(&event);
}
