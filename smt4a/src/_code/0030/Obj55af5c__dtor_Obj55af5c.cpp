/* NON_MATCHING: destructor class hierarchy and embedded base vtable are not fully recovered. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj55af5c[], DAT_00558e90;
void sharedRefRelease(void *reference);
void _ZN9Obj5593b8D1Ev(void *object);
}
class Obj55af5c {
public:
    const void *vtable;
    u8 unk04[0x8C];
    const void *baseVtable;
    u8 unk94[0x44];
    void *reference;
    ~Obj55af5c();
};
Obj55af5c::~Obj55af5c() {
    vtable = _ZTV9Obj55af5c + 8;
    if (reference != NULL) sharedRefRelease(reference);
    baseVtable = &DAT_00558e90;
    _ZN9Obj5593b8D1Ev(this);
}
