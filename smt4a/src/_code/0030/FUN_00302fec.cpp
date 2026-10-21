/* NON_MATCHING: retail emits 'push {r3, r4, r5, lr}'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Data {
    u8 pad[12];
    const u32 *values;
    u32 count;
    u32 reserved;
    u32 mode;
};
void streamWriterWriteArray(void *,const void *,u32,u32);
void FUN_0030fb34(void *,u32,u32);
void *FUN_00302fec(void *writer,const Data *data) {
    streamWriterWriteArray(writer,&data->count,4,1);
    if(data->count) FUN_0030fb34(writer,(u32)data->values+data->mode,data->count<<3);
    return writer;
}
}
