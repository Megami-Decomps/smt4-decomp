/* NON_MATCHING: destructor class hierarchy and embedded base vtable are not fully recovered. */
#include "classes/Obj55af5c.h"
extern "C" {
extern const u8 _ZTV9Obj55af5c[], DAT_00558e90;
void sharedRefRelease(void *reference);
void _ZN9Obj5593b8D1Ev(void *object);
}
Obj55af5c::~Obj55af5c() {
    if (reference != NULL) sharedRefRelease(reference);
    baseVtable = &DAT_00558e90;
    _ZN9Obj5593b8D1Ev(this);
}
