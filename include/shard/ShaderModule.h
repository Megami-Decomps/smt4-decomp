#ifndef SHARD_SHADERMODULE_H
#define SHARD_SHADERMODULE_H

#include "common.h"

struct ShaderModuleContext {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 first;
    /* 0x0c */ u32 second;
};
struct ShaderModuleCounters {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};
struct ShaderModuleChannel {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u32 unk04;
};
struct ShaderModuleStorage {
    /* 0x00000 */ u8 unk00000[0x128e8];
    /* 0x128e8 */ ShaderModuleChannel channels[2];
};
struct ShaderModule {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ ShaderModuleStorage shader;
};

#endif
