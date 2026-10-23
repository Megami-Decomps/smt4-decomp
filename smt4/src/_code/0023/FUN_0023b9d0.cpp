/* NON_MATCHING: attribute slot search and initialization allocate fewer callee-saved registers than retail. */
#include "gfx/VertexAttributeState.h"

extern "C" {
void nn_gr_CTR_Vertex_DisableAttr(VertexAttributeState* state, u32 attribute);

// Register one vertex stream with its packed format size and clear the remaining components.
void FUN_0023b9d0(VertexAttributeState* state, const VertexAttributeDescription* description,
                  u32 address, u32 format)
{
    u32 attribute = description->index;
    u32 stride;
    switch (format) {
    case 0: case 1: stride = 1; break;
    case 2: case 4: case 5: stride = 2; break;
    case 8: case 9: stride = 3; break;
    case 10: stride = 6; break;
    case 11: stride = 12; break;
    case 3: case 6: case 12: case 13: stride = 4; break;
    case 7: case 14: stride = 8; break;
    case 15: stride = 16; break;
    default: stride = 0; break;
    }
    nn_gr_CTR_Vertex_DisableAttr(state, attribute);
    VertexAttributeSlot* slot = NULL;
    for (s32 index = 0; index < 12; ++index) {
        if (state->slots[index].address == 0) {
            slot = &state->slots[index];
            break;
        }
    }
    state->enabled[attribute] = 1;
    slot->address = address;
    slot->format = format;
    slot->attribute = attribute;
    slot->stride = stride;
    for (s32 index = 0; index < 11; ++index) {
        slot->values[index] = 0;
        slot->indices[index] = -1;
    }
    state->dirty = 0;
}
}
