/* NON_MATCHING: the two quad records index correctly, but some texture loads and the handle store use the opposite base/index registers. */
#include "classes/Obj420990.h"
#include "nw/math/MTX44Transform.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char g_asdFilterSourceFileName[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 resourceApplyNodeFlag(u32 kind, u32 source);
u32 asdTMTexNodeSetMode(u32 kind, u32 source);
u32 asdTMTexLoadMainHeap(u32 kind, u32 source);
void FUN_0041d910(Obj420990 *filter);
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
            handles[i].handle = resourceApplyNodeFlag(0xe, rects->textureSource(i));
        } else if ((flags & 0x40) != 0) {
            handles[i].handle = asdTMTexNodeSetMode(0xe, rects->textureSource(i));
        } else if ((flags & 1) != 0) {
            handles[i].handle = asdTMTexLoadMainHeap(0xe, rects->textureSource(i));
        }
    } while (++i < 2);
    FUN_0041d910(this);
    refreshTextureCoordinates();
    for (s32 index = 0; index < 2; ++index) {
        nw::math::MTX44Identity(&handles[index].matrix);
    }
}
