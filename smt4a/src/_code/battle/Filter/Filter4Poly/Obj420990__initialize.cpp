/* NON_MATCHING: twin of smt4 Obj420990::initialize (same near miss): armcc picks r0/r1 the other way round for the base/offset temporaries of the texture-source loads. */
#include "classes/Obj420990.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_0052730c[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 resourceApplyNodeFlag(u32 kind, u32 source);
u32 asdTMTexNodeSetMode(u32 kind, u32 source);
u32 asdTMTexLoadMainHeap(u32 kind, u32 source);
void FUN_0041d910(Obj420990 *filter);
u32 _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(void *dest, u32 source);
}

void Obj420990::initialize(Obj420990Rects *config, u32 flags)
{
    rects = config;
    asdDebugTrace(DAT_0052730c, 814);
    buffer = asdMemoryAlloc(0x100, 0x100, 0, 0xA0, 1);
    asdDebugTrace(DAT_0052730c, 815);
    handles = (Obj420990Handle *)asdMemoryAlloc(0x100, 0x100, 0, 0x88, 1);
    for (s32 i = 0; i < 2; i++) {
        if ((flags & 8) != 0) {
            handles[i].handle = resourceApplyNodeFlag(0xe, rects->textureSource(i));
        } else if ((flags & 0x40) != 0) {
            handles[i].handle = asdTMTexNodeSetMode(0xe, rects->textureSource(i));
        } else if ((flags & 1) != 0) {
            handles[i].handle = asdTMTexLoadMainHeap(0xe, rects->textureSource(i));
        }
    }
    FUN_0041d910(this);
    refreshTextureCoordinates();
    for (s32 i = 0; i < 2; i++) {
        Obj420990Handle *entry = &handles[i];
        mtx44Copy(entry, _ZN2nw4math5MTX448IdentityEv());
    }
}
