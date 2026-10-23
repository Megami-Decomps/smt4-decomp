#ifndef GFX_SHADER_UNIFORM_UPLOADS_H
#define GFX_SHADER_UNIFORM_UPLOADS_H
#include "common.h"
#include <stddef.h>

struct ShaderUniformData {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const u32 *data;
    /* 0x08 */ u32 wordCount;
};
struct ShaderUniformSlotConfig {
    u8 unk00[5];
    u8 enabled;
    u8 unk06[0x1A];
    u32 bias;
    u32 scale;
    u32 unk28;
};
struct ShaderUniformBindingState {
    u32 unk000;
    ShaderUniformSlotConfig slots[8]; /* 0x004 */
    u8 unk164[4];
    u8 enabled[8]; /* 0x168 */
    u8 vertexEnabled[8]; /* 0x170 */
    u8 geometryEnabled[8]; /* 0x178 */
    u8 unk180[0x20];
    u8 firstBinding; /* 0x1A0 */
    u8 bindingFlags; /* 0x1A1 */
    u8 secondBinding; /* 0x1A2 */
    u8 unk1A3[0x11];
    u32 values[8][4]; /* 0x1B4 */
    u32 unk234;
};
struct ShaderUniformRecord {
    union {
        /* 0x000 */ u8 unk000[0x238];
        ShaderUniformBindingState binding;
    };
    /* 0x238 */ ShaderUniformData *vertex[8];
    /* 0x258 */ ShaderUniformData *geometry[8];
};
struct ShaderUniformSelection {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 index;
};
struct ShaderUniformDefaults {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 geometryHeader;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 vertexHeader;
};

typedef char ShaderUniformRecordLayoutCheck[
    offsetof(ShaderUniformRecord, vertex) == 0x238 &&
    offsetof(ShaderUniformRecord, geometry) == 0x258 &&
    sizeof(ShaderUniformRecord) == 0x278 ? 1 : -1];
typedef char ShaderUniformDataLayoutCheck[
    offsetof(ShaderUniformData, data) == 4 &&
    offsetof(ShaderUniformData, wordCount) == 8 &&
    sizeof(ShaderUniformData) == 12 ? 1 : -1];
typedef char ShaderUniformSelectionOffsetCheck[
    offsetof(ShaderUniformSelection, index) == 0x20 ? 1 : -1];
typedef char ShaderUniformDefaultsOffsetCheck[
    offsetof(ShaderUniformDefaults, geometryHeader) == 0xC &&
    offsetof(ShaderUniformDefaults, vertexHeader) == 0x14 ? 1 : -1];
typedef char ShaderUniformBindingStateLayoutCheck[
    sizeof(ShaderUniformSlotConfig) == 0x2C &&
    offsetof(ShaderUniformSlotConfig, enabled) == 5 &&
    offsetof(ShaderUniformSlotConfig, bias) == 0x20 &&
    offsetof(ShaderUniformSlotConfig, scale) == 0x24 &&
    sizeof(ShaderUniformBindingState) == 0x238 &&
    offsetof(ShaderUniformBindingState, slots) == 4 &&
    offsetof(ShaderUniformBindingState, enabled) == 0x168 &&
    offsetof(ShaderUniformBindingState, vertexEnabled) == 0x170 &&
    offsetof(ShaderUniformBindingState, geometryEnabled) == 0x178 &&
    offsetof(ShaderUniformBindingState, firstBinding) == 0x1A0 &&
    offsetof(ShaderUniformBindingState, bindingFlags) == 0x1A1 &&
    offsetof(ShaderUniformBindingState, secondBinding) == 0x1A2 &&
    offsetof(ShaderUniformBindingState, values) == 0x1B4 &&
    offsetof(ShaderUniformRecord, binding) == 0 ? 1 : -1];
#endif
