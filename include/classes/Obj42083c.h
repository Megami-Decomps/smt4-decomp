#ifndef CLASSES_OBJ42083C_H
#define CLASSES_OBJ42083C_H

#include "classes/Obj420794.h"

extern "C" int asdOperatorDelete(void *block);

/* A screen filter (vtable at 0x42083c, named after it until its real name is known) with one more
 * block, freed with the engine's delete. */
class Obj42083c : public Obj420794 {
public:
    virtual ~Obj42083c();

protected:
    /* 0x18 */ u8 unk18[0x4C];
    /* 0x64 */ void *block;
};

#endif
