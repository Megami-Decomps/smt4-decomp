#ifndef CLASSES_OBJ4222AC_H
#define CLASSES_OBJ4222AC_H

#include "classes/Obj422318.h"

/* An Obj422318 (vtable at 0x4222ac, named after it until its real name is known) with nothing of its own
 * to destroy. */
class Obj4222ac : public Obj422318 {
public:
    Obj4222ac();
    virtual ~Obj4222ac();
    virtual void start(); /* +0x08 */
    virtual void updateMotion(); /* +0x18 */

    /* 0x74 */ f32 position[3];
};

typedef char Obj4222acSizeCheck[sizeof(Obj4222ac) == 0x80 ? 1 : -1];

#endif
