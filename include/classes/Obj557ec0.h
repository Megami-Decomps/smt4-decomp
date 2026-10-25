#ifndef CLASSES_OBJ557EC0_H
#define CLASSES_OBJ557EC0_H

#include "classes/CecMessageId.h"

extern "C" int asdOperatorDelete(void *block);

/* Loads the two StreetPass icon packs (vtable at 0x557ec0; named after it until its real name is
 * known). */
class Obj557ec0 {
public:
    Obj557ec0();
    virtual ~Obj557ec0();

    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* 0x04 */ u32 icon48;
    /* 0x08 */ u32 icon40;
    /* 0x0C */ CecMessageId messageId;
};

typedef char Obj557ec0SizeCheck[sizeof(Obj557ec0) == 0x18 ? 1 : -1];

#endif
