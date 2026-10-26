#include "classes/Obj421aa4Requests.h"

/* Resets every parameter to its default and announces the object to the sound manager. */
void Obj421aa4::init()
{
    u32 id = vfunc20();
    Obj421aa4Manager *manager = FUN_002baed8();
    Obj421aa4Node *node;

    unk04[0] = 0;
    unk04[1] = 0;
    unk04[2] = 0;
    unk04[3] = 0;
    unk04[4] = 0;
    unk04[5] = 0;
    unk9c = -1;
    unk1c[0] = 0;
    unk1c[1] = 0;
    unk1c[2] = 0;
    unk1c[3] = 0;
    unk1c[4] = 0;
    unk8a[0] = 0;
    unk8a[1] = 0;
    unk8a[2] = 0;
    unk85[0] = 0;
    unk85[1] = 0;
    unk85[2] = 0;
    unk85[3] = 0;
    unk85[4] = 0;
    unk90[0] = 0;
    unk90[1] = 0;
    unk64[0] = 1.0f;
    unk64[1] = 1.0f;
    unk6c[0] = 0;
    unk6c[1] = 0;
    unk74[0] = 1.0f;
    unk74[1] = 1.0f;
    unk7c[0] = 0;
    unk7c[1] = 0;
    unkb0 = 1.0f;
    unkb4 = 0.0f;
    unkb8 = 1.0f;
    unka0[0] = 1.0f;
    unka0[1] = 1.0f;
    unka8[0] = 0;
    unka8[1] = 0;
    unkbc[0] = 0.0f;
    unk99 = 0;
    unkbc[1] = 0.0f;
    unkbc[5] = 0.0f;
    unkbc[2] = 0.0f;
    unkbc[3] = 0.0f;
    unkbc[4] = 0.0f;
    unk30[0] = 1.0f;
    unk30[1] = 1.0f;
    unk38[0] = 0.0f;
    unk38[1] = 0.0f;
    unk38[2] = 0.0f;
    unk38[3] = 0.0f;
    unk38[4] = 0.0f;
    unk4c[0] = 0;
    unk4c[1] = 0;
    unk4c[2] = 0;
    unk58[1] = 1.0f;
    unk58[0] = 1.0f;
    unk60 = 0.0f;
    node = soundRequestBegin(manager, 6);
    node->type = 3;
    node->arg = &unk85[4];
    node->id = id;
    listAppendNode(manager, node);
    active = 1;
}
