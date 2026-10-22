#include "common.h"

extern "C" {

typedef struct Obj119ee6 {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 flag;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 sub[8];            /* copied by _ZN9Obj55aff4aSERKS_ */
    /* 0x10 */ u32 value;
    /* 0x14 */ u8 mode;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 extra;
} Obj119ee6;

__weak void FUN_00119ee6_hook(void);
int _ZN9Obj55aff4aSERKS_(void *dst, const void *src);

/* Copy assignment: copies the fields of `src` into `self` and returns `self`. */
Obj119ee6 *FUN_00119ee6(Obj119ee6 *self, const Obj119ee6 *src)
{
    FUN_00119ee6_hook();
    self->flag = src->flag;
    _ZN9Obj55aff4aSERKS_(self->sub, src->sub);
    self->value = src->value;
    self->mode = src->mode;
    self->extra = src->extra;
    return self;
}

} /* extern "C" */
