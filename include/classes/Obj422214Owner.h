#ifndef CLASSES_OBJ422214_OWNER_H
#define CLASSES_OBJ422214_OWNER_H

#include "classes/Obj422214.h"

/* Nonpolymorphic owner of the concrete buffer window at offset 0x9bc. */
struct Obj422214Owner {
    ~Obj422214Owner();
    /* 0x000 */ u8 unk00[0x9bc];
    /* 0x9BC */ Obj422214 buffers;
};

#endif
