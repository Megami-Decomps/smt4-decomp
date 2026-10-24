/* NON_MATCHING: member function with every call and loop matching; armcc picks r0/r1 the other way round for the base/offset temporaries of the second and third texture loads and keeps the 28 offset in r7 instead of retail's r7/r8 pair. */
#include "classes/Obj420990.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_003ff7fc[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 resourceApplyNodeFlag(u32 kind, u32 source);
u32 asdTMTexTableLoadEntryAsync(u32 kind, u32 source);
u32 asdTMTexTableLoadEntryAsyncB(u32 kind, u32 source);
void FUN_0034c4a0(Obj420990 *filter);
u32 _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(void *dest, u32 source);
}

void Obj420990::initialize(Obj420990Rects *config, u32 flags)
{
    rects = config;
    asdDebugTrace(DAT_003ff7fc, 814);
    buffer = asdMemoryAlloc(0x100, 0x100, 0, 0xA0, 1);
    asdDebugTrace(DAT_003ff7fc, 815);
    handles = (Obj420990Handle *)asdMemoryAlloc(0x100, 0x100, 0, 0x88, 1);
    for (s32 i = 0; i < 2; i++) {
        if ((flags & 8) != 0) {
            handles[i].handle = resourceApplyNodeFlag(0x16, rects->textureSource(i));
        } else if ((flags & 0x40) != 0) {
            handles[i].handle = asdTMTexTableLoadEntryAsyncB(0x16, rects->textureSource(i));
        } else if ((flags & 1) != 0) {
            handles[i].handle = asdTMTexTableLoadEntryAsync(0x16, rects->textureSource(i));
        }
    }
    FUN_0034c4a0(this);
    refreshTextureCoordinates();
    for (s32 i = 0; i < 2; i++) {
        Obj420990Handle *entry = &handles[i];
        mtx44Copy(entry, _ZN2nw4math5MTX448IdentityEv());
    }
}
