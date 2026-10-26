#include "common.h"
#include "code/Code003d_Smt4.h"

struct OwnerState {
    /* 0x0000 */ u8 unk00[0x1cf8];
    /* 0x1cf8 */ void *object;
};
extern "C" {
void *asdOperatorNew(u32 size);
void *_ZN9Obj4208d4C1Ev(void *object);
/* Allocates the owner's optional object. */
void FUN_003d9d74(OwnerState *owner)
{
    void *object = asdOperatorNew(0x44);
    owner->object = object ? _ZN9Obj4208d4C1Ev(object) : NULL;
}
}
