/* NON_MATCHING: array-member address hoisting adds a saved register; packet stores and upload argument scheduling differ. */
#include "gfx/ShaderUniformUploads.h"

extern "C" {
extern ShaderUniformDefaults DAT_0053ccc8;
void nnnstdMemCpy(void *destination, const void *source, u32 size);
void FUN_001a063c(u32 **commands, const u32 *data, u32 bytes);

// Upload each present vertex and geometry uniform block for the selected shader.
void FUN_00193840(void *, u32 **commands, const ShaderUniformSelection *selection,
                  ShaderUniformRecord **records)
{
    for (u32 index = 0; index < 8; ++index) {
        ShaderUniformRecord *record = &(*records)[selection->index];
        ShaderUniformData *data = record->vertex[index];
        if (data != NULL) {
            u64 header = (static_cast<u64>(DAT_0053ccc8.vertexHeader) << 32) |
                (((index & 0xFF) << 8) + 0x800);
            nnnstdMemCpy(*commands, &header, sizeof(header));
            *commands += 2;
            FUN_001a063c(commands, data->data, data->wordCount << 2);
        }
        data = record->geometry[index];
        if (data != NULL) {
            u64 header = (static_cast<u64>(DAT_0053ccc8.geometryHeader) << 32) |
                (((index & 0xFF) << 8) + 0x1000);
            nnnstdMemCpy(*commands, &header, sizeof(header));
            *commands += 2;
            FUN_001a063c(commands, data->data, data->wordCount << 2);
        }
    }
}
}
