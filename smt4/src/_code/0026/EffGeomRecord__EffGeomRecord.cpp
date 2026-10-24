/* NON_MATCHING: retail addresses the rest of the record from the pointer the color-slot vector constructor returns (r5 = that - 0x6a0) and keeps the 0.0f in s16; armcc keeps `this` as the base, so the address arithmetic and the constructor-call literal pool differ */
#include "classes/EffGeomRecord.h"

extern "C" {
void memClear(void *block, u32 size);
void nn_gr_CTR_Vertex_LoadArray_DisableAll(void *array);
}

/* Clears the draw state, the vertex-array slots and the color slots. */
EffGeomRecord::EffGeomRecord()
{
    unk4C = 0;
    memClear(unk50, sizeof(unk50));
    for (u32 i = 0; i < 12; i++) {
        slotFlags[i] = 0;
        nn_gr_CTR_Vertex_LoadArray_DisableAll(&vertexSlots[i]);
        colorSlots[i].enabled = 0;
        colorSlots[i].values[0] = 0.0f;
        colorSlots[i].values[1] = 0.0f;
        colorSlots[i].values[2] = 0.0f;
        colorSlots[i].values[3] = 0.0f;
    }
    unk7DC = 0;
    unk7E0 = 0;
    unk7E4 = 0;
    state.flag00 = 0;
    state.unk04 = 0;
    state.unk08 = 0xff;
    state.unk0C = 0;
    state.unk14 = 0;
    state.unk18 = 0;
    state.unk20 = 0x2010000;
    state.unk24 = 0;
    state.unk28 = 0;
    state.unk30[0] = 0;
    state.unk30[1] = 0;
    state.unk30[2] = 0;
    state.unk30[3] = 0;
    state.unk30[4] = 0;
    state.unk30[5] = 0;
}
