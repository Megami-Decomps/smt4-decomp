/* Constructs the object and returns it. */
#include "common.h"

extern "C" {

struct ObjFUN_002e9300 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 member[4];
};

extern const u8 DAT_0055affc[];
void strDuplicateInto(void *member);

ObjFUN_002e9300 *onlineStringConstruct(ObjFUN_002e9300 *obj)
{
    obj->vtable = DAT_0055affc;
    strDuplicateInto(obj->member);
    return obj;
}

}
