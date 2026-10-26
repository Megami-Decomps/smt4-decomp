#ifndef CLASSES_OBJ42083C_H
#define CLASSES_OBJ42083C_H

#include "classes/Obj420794.h"

extern "C" void asdOperatorDelete(void *block);

/* A screen filter (vtable at 0x42083c, named after it until its real name is known) with one more
 * block, freed with the engine's delete. */
class Obj42083c : public Obj420794 {
public:
    Obj42083c(Obj420794Child *owned)
        : Obj420794(owned), unk58(0.0f), unk5c(1.0f), unk60(0), block(NULL)
    {
    }
    virtual ~Obj42083c();
    virtual void prepareGeometry(); /* +0x08 */
    virtual void draw();            /* +0x0c */
    virtual void refreshTextureCoordinates(); /* +0x10: stripped implementation */

protected:
    /* 0x18 */ u8 unk18[0x40];
    /* 0x58 */ f32 unk58;
    /* 0x5C */ f32 unk5c;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ void *block;
};

#endif
