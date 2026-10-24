#include "common.h"

struct Obj50d67cTriple {
    u32 a, b, c;
};

struct Obj50d67c {
    u8 unk00[0xc];
    u32 extra;
    Obj50d67cTriple first;
    Obj50d67cTriple second;
};

struct Obj50d67cOut {
    Obj50d67cTriple first;
    Obj50d67cTriple second;
    u32 unk18;
    u32 extra;
};

/* Copies the object's two triples and its extra word into `out`. */
extern "C" void FUN_0050d67c(const Obj50d67c *obj, Obj50d67cOut *out)
{
    out->first = obj->first;
    out->second = obj->second;
    out->extra = obj->extra;
}
