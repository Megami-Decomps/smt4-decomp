/* NON_MATCHING: retail emits 'movs r0, r1'; compiler emits 'cmp r1, #0' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj559ecc[],DAT_00559504;
struct Object {
    const void *vtable;
    u8 active;
    u8 pad[3];
    u8 first[8];
    u8 second[8];
};
void *onlineStringCopyConstruct(void *,const void *);
void FUN_0030c5d8(void *,Object *object,const Object *source) {
    if(object) {
        object->vtable=_ZTV9Obj559ecc+8;
        object->active=source->active;
        onlineStringCopyConstruct(object->first,source->first);
        onlineStringCopyConstruct(object->second,source->second);
        object->vtable=&DAT_00559504;
    }
}
}
