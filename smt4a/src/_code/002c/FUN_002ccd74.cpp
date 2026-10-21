#include "common.h"
extern "C" {
struct Object {
    u8 pad[0x2C];
    s16 limit;
};
s32 FUN_004bcbb4();
s32 FUN_004009d0(u32,u32);
s32 FUN_002ccd74(Object *object,u32 value) {
    if(object && FUN_004bcbb4()<=object->limit) return FUN_004009d0(value,0)==0;
    return 0;
}
}
