#ifndef CLASSES_OBJ420A1C_H
#define CLASSES_OBJ420A1C_H

#include "classes/CecMessageId.h"

extern "C" {
int asdMemFree(u32 block);
void asdMemFreeNonNull(void *block);
int asdCecShutdown(void);
}

/* Loads the two StreetPass icon packs (vtable at 0x420a1c; named after it until its real name is
 * known). */
class Obj420a1c {
public:
    Obj420a1c();
    virtual ~Obj420a1c();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

    /* 0x04 */ u32 icon48;
    /* 0x08 */ u32 icon40;
    /* 0x0C */ CecMessageId messageId;
};

typedef char Obj420a1cSizeCheck[sizeof(Obj420a1c) == 0x18 ? 1 : -1];

#endif
