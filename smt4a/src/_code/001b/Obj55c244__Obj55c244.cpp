/* NON_MATCHING: constructor merges vtable/event stores and folds playback-byte addressing into this+0x2c; retail keeps separate stores and a playback subobject base. */
#include "classes/Obj55c244.h"


Obj55c244::Obj55c244()
{
    event.state = 0;
    event.lock = 0;
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
