/* Replaces the object's resource (+0x44): releases the old one, if any, then creates a new one for `arg`. */
#include "common.h"

extern "C" {

struct Obj003026b0 {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ void *resource;
};

void handleBlockRefDrop(void *resource);
void *FUN_002491b4(u32 arg);

void objResourceReplace(Obj003026b0 *obj, u32 arg)
{
    if (obj->resource != NULL) {
        handleBlockRefDrop(obj->resource);
    }
    obj->resource = FUN_002491b4(arg);
}

}
