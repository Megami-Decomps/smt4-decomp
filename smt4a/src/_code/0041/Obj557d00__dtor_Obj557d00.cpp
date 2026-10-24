#include "classes/Obj557d00.h"

/* The object unk88 points at: deleted through its virtual destructor. */
class Obj557d00Child {
public:
    virtual ~Obj557d00Child();
};

extern "C" void asdMemFree(void *block);

/* Frees the six owned buffers and the child object, and the 0x40 block unless flag bit 0 marks it borrowed. */
Obj557d00::~Obj557d00()
{
    if (unk44 != NULL) {
        asdMemFree(unk44);
        unk44 = NULL;
    }
    if (unk48 != NULL) {
        asdMemFree(unk48);
        unk48 = NULL;
    }
    if (unk4C != NULL) {
        asdMemFree(unk4C);
        unk4C = NULL;
    }
    if (unk50 != NULL) {
        asdMemFree(unk50);
        unk50 = NULL;
    }
    if (unk54 != NULL) {
        asdMemFree(unk54);
        unk54 = NULL;
    }
    if (unk58 != NULL) {
        asdMemFree(unk58);
        unk58 = NULL;
    }
    if (unk88 != NULL) {
        delete static_cast<Obj557d00Child *>(unk88);
        unk88 = NULL;
    }
    if (!(flags & 1) && unk40 != 0) {
        asdMemFree((void *)unk40);
        unk40 = 0;
    }
}
