#ifndef CLASSES_OBJ422214_OWNER_H
#define CLASSES_OBJ422214_OWNER_H

#include "classes/Obj422214.h"
#include "nn/fnd/DateTime.h"
#include <stddef.h>

/* Nonpolymorphic owner of the concrete buffer window at offset 0x9bc. */
struct Obj422214Owner {
    Obj422214Owner();
    ~Obj422214Owner();
    /* 0x000 */ u8 header[0x80];
    /* 0x080 */ u8 directory[0x100];
    /* 0x180 */ u8 contents[0x800];
    /* 0x980 */ u8 unk980[0x20];
    /* 0x9A0 */ nn::fnd::DateTime modified;
    /* 0x9A8 */ u32 unk9A8;
    /* 0x9AC */ u8 flags[8];
    /* 0x9B4 */ u8 unk9B4[8];
    /* 0x9BC */ Obj422214 buffers;
};

typedef char Obj422214Owner_buffers_offset[
    offsetof(Obj422214Owner, buffers) == 0x9bc ? 1 : -1];
typedef char Obj422214Owner_size[sizeof(Obj422214Owner) == 0x9c8 ? 1 : -1];

#endif
