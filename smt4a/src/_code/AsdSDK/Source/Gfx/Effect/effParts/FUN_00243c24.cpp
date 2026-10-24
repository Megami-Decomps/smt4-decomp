/* NON_MATCHING: close: retail clears the whole record (word stores, including the type word and the two flag words) and then stores the 16-bit type and flag halves; the build merges the type into a halfword/word combine and orders the clears differently. */
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* One effect-parts handler (0x44 bytes); the first slot copies a resource's data. */
typedef struct Handler {
    /* 0x00 */ void *(*clone)(const void *resource);
    /* 0x04 */ u8 unk04[0x40];
} Handler;
extern Handler g_handlerTable[];

extern const char g_effPartsSourcePath[];

/* An effect-parts resource (0x2c bytes). */
struct Resource {
    Resource() : id(0xdc), data(NULL), unk0c(0), sizeA(0), countA(0), bufferA(NULL), unk1c(0), sizeB(0), countB(0), bufferB(NULL) {}

    /* 0x00 */ u32 id;
    /* 0x04 */ u16 type;          /* index into g_handlerTable */
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *data;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 sizeA;
    /* 0x14 */ u32 countA;
    /* 0x18 */ void *bufferA;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 sizeB;
    /* 0x24 */ u32 countB;
    /* 0x28 */ void *bufferB;
};

void *memAlloc(u32 heap, u32 alignClass, u32 unk08, u32 size, u32 alignment, u32 extra);

// Duplicates a resource: allocates a new one with the same id, flags and type and clones its data
// through the type's handler.
Resource *FUN_00243c24(const Resource *source)
{
    u16 type = source->type;
    asdDebugTrace(g_effPartsSourcePath, 46);
    Resource *copy = (Resource *)memAlloc(0x10000, 0x100, 0, 0x2c, 0x10, 1);
    *copy = Resource();
    copy->type = type;
    copy->id = source->id;
    *(u16 *)&copy->unk0c = *(const u16 *)&source->unk0c;
    *(u16 *)&copy->unk1c = *(const u16 *)&source->unk1c;
    copy->data = g_handlerTable[type].clone(source);
    return copy;
}

}
