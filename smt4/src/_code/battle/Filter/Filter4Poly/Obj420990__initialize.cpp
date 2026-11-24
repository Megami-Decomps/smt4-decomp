/* NON_MATCHING: some texture loads and the handle store use the opposite base/index registers. */
#include "classes/Obj420990.h"
#include "nw/math/MTX44Transform.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char g_asdFilterSourceFileName[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 resourceApplyNodeFlag(u32 kind, u32 source);
u32 asdTMTexTableLoadEntryAsync(u32 kind, u32 source);
u32 asdTMTexTableLoadEntryAsyncB(u32 kind, u32 source);
void FUN_0034c4a0(Obj420990 *filter);
} /* extern "C" */

/* Loads the quad textures and initializes their matrices. */
void Obj420990::initialize(Obj420990Rects *config, u32 flags)
{
    rects = config;
    asdDebugTrace(g_asdFilterSourceFileName, 814);
    buffer = asdMemoryAlloc(0x100, 0x100, 0, 0xA0, 1);
    asdDebugTrace(g_asdFilterSourceFileName, 815);
    handles = (Obj420990Handle *)asdMemoryAlloc(0x100, 0x100, 0, 0x88, 1);
    s32 i = 0;
    do {
        if ((flags & 8) != 0) {
            handles[i].handle = resourceApplyNodeFlag(0x16, rects->textureSource(i));
        } else if ((flags & 0x40) != 0) {
            handles[i].handle = asdTMTexTableLoadEntryAsyncB(0x16, rects->textureSource(i));
        } else if ((flags & 1) != 0) {
            handles[i].handle = asdTMTexTableLoadEntryAsync(0x16, rects->textureSource(i));
        }
    } while (++i < 2);
    FUN_0034c4a0(this);
    refreshTextureCoordinates();
    for (s32 index = 0; index < 2; ++index) {
        nw::math::MTX44Identity(&handles[index].matrix);
    }
}
