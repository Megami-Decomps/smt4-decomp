#include "classes/Obj557b58.h"
/* Initializes the body vector and the object's state from the model resource. */
Obj557b58::Obj557b58(u32 resource)
    : count(0), content(NULL), unk18(0)
{
    moriModelArrayConstruct(this, reinterpret_cast<UnitModelContent *>(resource));
}
