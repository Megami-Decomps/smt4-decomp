#ifndef CLASSES_OBJ55B56C_H
#define CLASSES_OBJ55B56C_H

#include "classes/Obj55b87c.h"

/* An Obj55b87c with four more words and a packed tail (vtable at 0x55b56c; named after it until
 * its real name is known). */
class Obj55b56c : public Obj55b87c {
public:
    Obj55b56c(u32 owner);

    /* 0x60 */ u32 unk60;
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u32 unk6c;
    /* 0x70 */ Obj55b87cPacked packed70;
};

typedef char Obj55b56cSizeCheck[sizeof(Obj55b56c) == 0x74 ? 1 : -1];

#endif
