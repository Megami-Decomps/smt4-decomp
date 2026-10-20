/* NON_MATCHING: the switch compiles to a jump table whose words differ in fdiff (retail: absolute addresses, build: __switch$$-relative relocs); registers also differ. */
#include "common.h"
#include "shard/S3GxQuad.h"

extern "C" {

void nn_gr_CTR_Vertex_DisableAttr(GxVertexState *state, u8 slot);

/* Components per attribute of a vertex data type (0 for unknown types). */
static s32 gxAttrComponents(u32 type)
{
    switch (type) {
    case 0:
    case 1:
        return 1;
    case 2:
    case 4:
    case 5:
        return 2;
    case 3:
    case 6:
    case 12:
    case 13:
        return 4;
    case 7:
    case 14:
        return 8;
    case 8:
    case 9:
        return 3;
    case 10:
        return 6;
    case 11:
        return 12;
    case 15:
        return 16;
    default:
        return 0;
    }
}

/* Binds `buffer` to the first free binding of the vertex state, one attribute per layout entry:
 * each attribute of the layout is disabled and re-enabled at its slot. */
void FUN_0042ca00(GxVertexState *state, const GxVertexLayout *layout, u32 buffer)
{
    GxVertexBinding *binding = NULL;

    for (s32 i = 0; i < GX_VERTEX_BINDING_COUNT; i++) {
        if (state->bindings[i].buffer == 0) {
            binding = &state->bindings[i];
            break;
        }
    }
    for (s32 i = 0; i < GX_VERTEX_ATTR_COUNT; i++) {
        if (layout->attr[i] == NULL) {
            binding->slot[i] = -1;
        } else {
            nn_gr_CTR_Vertex_DisableAttr(state, layout->attr[i]->slot);
            state->attrEnabled[layout->attr[i]->slot] = 1;
            binding->slot[i] = layout->attr[i]->slot;
            binding->buffer = buffer;
        }
        binding->type[i] = layout->type[i];
        binding->components[i] = i < layout->count ? gxAttrComponents(layout->type[i]) : 0;
    }
    state->unk000 = 0;
}

} /* extern "C" */
