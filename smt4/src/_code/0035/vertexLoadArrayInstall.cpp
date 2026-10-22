/* NON_MATCHING: vertex-slot and format temporaries occupy r4/ip in the opposite allocation from retail. */
#include "classes/Obj42072c.h"

/* Install a vertex stream in the first unused load array and cache each element's width. */
extern "C" void vertexLoadArrayInstall(VertexLoadArrayBank *bank,
                            const VertexLoadArrayInput *input, const void *buffer)
{
    VertexLoadArrayData *slot = NULL;
    for (s32 index = 0; index < 12; ++index) {
        if (bank->arrays[index].buffer == NULL) {
            slot = &bank->arrays[index];
            break;
        }
    }
    for (u32 index = 0; index < 12; ++index) {
        if (input->entries[index] == NULL) {
            slot->indices[index] = 0xFFFFFFFF;
        } else {
            slot->indices[index] = input->entries[index]->index;
            slot->buffer = buffer;
        }
        u8 format = input->formats[index];
        slot->formats[index] = format;
        u32 width;
        if ((s32)index < input->count) {
            switch (format) {
            case 0: case 1: width = 1; break;
            case 2: case 4: case 5: width = 2; break;
            case 3: case 6: case 12: case 13: width = 4; break;
            case 7: case 14: width = 8; break;
            case 8: case 9: width = 3; break;
            case 10: width = 6; break;
            case 11: width = 12; break;
            case 15: width = 16; break;
            default: width = 0; break;
            }
        } else {
            width = 0;
        }
        slot->elementSizes[index] = width;
    }
    bank->dirty = 0;
}
