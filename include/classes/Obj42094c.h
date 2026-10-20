#ifndef CLASSES_OBJ42094C_H
#define CLASSES_OBJ42094C_H

#include "classes/Obj420794.h"

/* The four-polygon screen filter (Filter4Poly; vtable at 0x42094c, named after it until its real
 * name is settled): the filter base plus a second heap block. */
class Obj42094c : public Obj420794 {
public:
    virtual ~Obj42094c();

protected:
    /* 0x18 */ void *dataB;     /* heap block */
};

#endif
