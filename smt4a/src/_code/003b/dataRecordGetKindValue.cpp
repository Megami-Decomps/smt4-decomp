#include "common.h"

extern "C" {

struct DataRecord {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8 kind;
};
DataRecord *FUN_00184310(u32 id);
s32 gameOptionResourceId(u32 kind);

s32 dataRecordGetKindValue(u32 id)
{
    return gameOptionResourceId(FUN_00184310(id)->kind);
}

} /* extern "C" */
