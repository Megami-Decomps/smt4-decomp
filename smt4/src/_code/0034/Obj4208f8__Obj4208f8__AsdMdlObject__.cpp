#include "classes/Obj4208f8.h"

extern "C" {
void resourceGetPosition(AsdMdlNode *node, u32 unused, Obj4208f8Vec3 *position);
void FUN_002b2ae8(AsdMdlNode *node, u32 unused, Obj4208f8Vec3 *vector);
}

/* Clears the effect state, reads the model's vector and position, and takes over the position. */
Obj4208f8::Obj4208f8(AsdMdlObject *m)
    : model(m), unk08(0), unk0C(0.0f, 0.0f, 0.0f)
{
    int i = 0;
    while (i < 3) {
        unk3C[i].set(0.0f, 0.0f, 0.0f);
        i++;
    }
    resourceGetPosition(model->node, 0, &unk30);
    FUN_002b2ae8(model->node, 0, &unk18);
    unk24.set(0.0f, 0.0f, 0.0f);
    unk0C.set(0.0f, unk30.y * 0.5f, 0.0f);
    unk90 = unk18;
    unk9C.set(0.0f, 0.0f, 0.0f);
    unkA8 = unk30;
    AsdMdlObject *mdl = model;
    mdl->flags &= ~2u;
    mdl->node->resource->positionFollowed = 1;
}
