/* NON_MATCHING: retail emits 'push {r4, lr}'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
struct Owner;
struct OwnerVtable { u8 unk00[0x10]; void (*release)(Owner *, void *); };
struct Owner { OwnerVtable *vtable; };
extern "C" {
extern const u8 _ZTV9Obj55b12c[];
extern struct { u8 unk00[0x2C]; Owner *owner; } DAT_005949d8;
void FUN_002eac60(void *object, u32 option);
void FUN_002eac8e(void *object, u32 option);
void *onlineUrlDestroy(void *url);
}
class Obj55b12c {
public:
    ~Obj55b12c();
    const void *vtable;
    u32 reserved;
    u8 url[0x68];
};
Obj55b12c::~Obj55b12c() {
    vtable = _ZTV9Obj55b12c + 8;
    FUN_002eac60(this, 0);
    FUN_002eac8e(this, 0);
    Owner *owner = DAT_005949d8.owner;
    owner->vtable->release(owner, url);
    onlineUrlDestroy(url);
}
