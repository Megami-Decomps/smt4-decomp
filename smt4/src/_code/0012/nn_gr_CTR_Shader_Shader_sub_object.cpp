#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


typedef struct Shader {
    /* 0x00000 */ u32 unk00000;
    /* 0x00004 */ u32 unk00004;
    /* 0x00008 */ u8 unk00008;
    /* 0x00009 */ u8 unk00009[0x87];
    /* 0x00090 */ u32 unk00090;
    /* 0x00094 */ u8 unk00094[0x200];
    /* 0x00294 */ u32 unk00294;
    /* 0x00298 */ u8 unk00298;
    /* 0x00299 */ u8 unk00299[3];
    /* 0x0029C */ u32 unk0029C;
    /* 0x002A0 */ u32 unk002A0;
    /* 0x002A4 */ u8 unk002A4[0xC0];
    /* 0x00364 */ u32 unk00364;
    /* 0x00368 */ u8 unk00368[0x12500];
    /* 0x12868 */ u8 unk12868[0x80];
} Shader;

Shader *nn_gr_CTR_Shader_Shader_sub_object(Shader *shader)
{
    shader->unk00004 = 0xffffffff;
    shader->unk00298 = 3;
    shader->unk00000 = 0;
    shader->unk00008 = 0;
    shader->unk00090 = 0;
    shader->unk00294 = 0;
    shader->unk0029C = 0;
    shader->unk002A0 = 0;
    shader->unk00364 = 0;
    reinterpret_cast<int>(memClear(shader->unk12868, 0x80));
    return shader;
}

} /* extern "C" */
