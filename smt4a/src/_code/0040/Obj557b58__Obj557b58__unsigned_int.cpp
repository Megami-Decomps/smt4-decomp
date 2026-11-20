#include "classes/Obj557b58.h"
extern "C" void moriModelArrayConstruct(Obj557b58 *object, u32 resource);
/* Initializes the owned-item vector and the object's state from the model resource. */
Obj557b58::Obj557b58(u32 resource)
    : unk10(0), unk14(0), unk18(0)
{
    moriModelArrayConstruct(this, resource);
}
