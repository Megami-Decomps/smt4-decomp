/* NON_MATCHING: C ABI retained for the conflicting inherited slot signatures; the zero-key branch layout still differs. */
#include "classes/Obj5596dc.h"

extern "C" {
void strInit(u8 *string);
void strDestroy(u8 *string);
void FUN_002ec8a8(u32 destination, u8 *string);

struct Obj5596dcStringView;
struct Obj5596dcStringVtable {
    void *slots00[4];
    s32 (*fill)(Obj5596dcStringView *object, u32 key, u8 *string);
};
struct Obj5596dcStringView {
    const Obj5596dcStringVtable *vtable;
};

s32 _ZN9Obj5596dc7vfunc14Ej(Obj5596dcStringView *object, u32 key)
{
    if (key == 0) {
        return 3;
    }
    u8 string[36];
    strInit(string);
    s32 result = object->vtable->fill(object, key, string);
    if (result == 0) {
        FUN_002ec8a8(key, string);
    }
    strDestroy(string);
    return result;
}
}
