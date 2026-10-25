#ifndef CLASSES_OBJ42233C_H
#define CLASSES_OBJ42233C_H

#include "classes/Obj422318.h"

/* An Obj422318 (vtable at 0x42233c, named after it until its real name is known) with nothing of its own
 * to destroy. */
class Obj42233c : public Obj422318 {
public:
    Obj42233c();
    virtual ~Obj42233c();
    virtual void start(); /* +0x08 */
    virtual void stop(); /* +0x10 */

private:
    /* 0x74 */ u8 flag;
    /* 0x75 */ u8 unk75[3];
    /* 0x78 */ u32 words[6];
    /* 0x90 */ u8 unk90[0xc];
};

typedef char Obj42233cSizeCheck[sizeof(Obj422318) == 0x74 &&
    sizeof(Obj42233c) == 0x9c ? 1 : -1];

#endif
