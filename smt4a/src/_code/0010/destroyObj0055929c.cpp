#include "common.h"

extern "C" {

extern const u8 DAT_0055929c[];  /* vtable */
void FUN_00128588(u32 stream);
s32 deflateEnd(u32 stream);
void asdOperatorDeleteArray(u32 memory);
void FUN_002fa0f4(void *self);

typedef struct Object55929c {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x11C];
    /* 0x120 */ u32 stream;    /* heap-allocated zlib stream */
} Object55929c;

/* Destructor: restores the vtable, ends and frees the deflate stream, then runs the base destructor body. */
void destroyObj0055929c(Object55929c *self)
{
    self->vtbl = DAT_0055929c;
    FUN_00128588(self->stream);
    deflateEnd(self->stream + 0x38);
    asdOperatorDeleteArray(self->stream);
    self->stream = 0;
    FUN_002fa0f4(self);
}

} /* extern "C" */
