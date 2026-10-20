#include "shard/Shard0046.h"

extern "C" {

typedef struct SinkOwner SinkOwner;
typedef struct VSink VSink;

typedef struct VSinkVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ void (*slot2)(VSink *self, SinkOwner *owner, u32 a, u32 b);
} VSinkVtbl;

struct VSink {
    /* 0x00 */ const VSinkVtbl *vtbl;
};

struct SinkOwner {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ VSink *sink;
};

/* Forwards to slot 2 of the object's sink (tail call). */
void sinkOwnerForward(SinkOwner *obj, u32 a, u32 b)
{
    obj->sink->vtbl->slot2(obj->sink, obj, a, b);
}

} /* extern "C" */
