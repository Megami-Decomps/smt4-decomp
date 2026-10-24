#include "common.h"

/* A packed selection record: its two words, a flag byte and a series of halfwords and bytes. */
struct Obj4ad4acRecord {
    u8 unk00[4];
    u32 active;     /* 0x04 */
    u32 kind;       /* 0x08 */
    u8 unk0c[0xc];
    u8 flags;       /* 0x18 */
    u8 unk19;
    u16 first;      /* 0x1a */
    u16 second;     /* 0x1c */
    u16 third;      /* 0x1e */
    u16 fourth;     /* 0x20 */
    u8 fifth;       /* 0x22 */
    u8 sixth;       /* 0x23 */
    u8 seventh;     /* 0x24 */
    u8 eighth;      /* 0x25 */
    u16 ninth;      /* 0x26 */
    u16 tenth;      /* 0x28 */
    u16 eleventh;   /* 0x2a */
    u16 twelfth;    /* 0x2c */
};

/* Copies the packed values and the common record words. */
extern "C" void _ZN9Obj55c9c010copyValuesEPKS_(Obj4ad4acRecord *destination, const Obj4ad4acRecord *source)
{
    destination->seventh = source->seventh;
    destination->eighth = source->eighth;
    destination->ninth = source->ninth;
    destination->tenth = source->tenth;
    destination->eleventh = source->eleventh;
    destination->twelfth = source->twelfth;
    destination->first = source->first;
    destination->second = source->second;
    destination->third = source->third;
    destination->fourth = source->fourth;
    destination->fifth = source->fifth;
    destination->sixth = source->sixth;
    destination->flags = source->flags;
    destination->active = source->active;
    destination->kind = source->kind;
}
