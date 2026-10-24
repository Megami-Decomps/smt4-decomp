#include "common.h"

/* The object a secondary base is embedded in: only its fifth virtual slot is called. */
class OuterObject {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4(u32 value);
};

extern "C" {

/* Adjusting thunk of a secondary base 12 bytes into the object: calls the outer object's fifth slot. */
void FUN_0050d4e4(u8 *self, u32 value)
{
    reinterpret_cast<OuterObject *>(self - 12)->slot4(value);
}

} /* extern "C" */
