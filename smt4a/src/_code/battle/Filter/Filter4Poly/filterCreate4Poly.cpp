/* NON_MATCHING: the constructor and everything outside the identity loop match (conditional construction `memory != NULL ? ::new (memory) T(child) : NULL`, child assigned after the derived members, motions base read in the loop); retail forms each motion's address before the identity call (base in r1, index in r0, address kept in r6), the build after it. Taking the address before the call (a `motion` local) fixes the loop but moves the filter copy into r5 ahead of the vptr/config stores (18 lines). */
#include "classes/Obj42094c.h"
#include "classes/Obj557b38Child.h"
#include "AsdSDK/AsdDebug.h"
#include <new>

extern "C" {
extern const char g_asdFilterSourceFileName[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_0041cd5c(Obj42094c *filter);
u32 _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(void *dest, u32 source);
void btlFilterLoadTexture(Obj42094c *filter, u32 flags, u32 textureId);
}

/* Builds the four-polygon filter over `config`: a colour child (flat or fading), the vertex and
 * motion buffers, one identity matrix per motion and the texture, then pushes the config's colour. */
extern "C" Obj42094c *filterCreate4Poly(Filter4PolyConfig *config, u32 flags, s32 fading)
{
    Obj420794Child *child = NULL;
    if (fading != 0) {
        child = new Obj557d28;
    } else {
        child = new Obj557b38;
    }
    void *memory = Obj420794::operator new(sizeof(Obj42094c), flags);
    Obj42094c *filter = memory != NULL ? ::new (memory) Obj42094c(child) : NULL;
    filter->setConfig(config);
    btlFilterLoadTexture(filter, flags, config->unk1c);
    asdDebugTrace(g_asdFilterSourceFileName, 296);
    filter->setBuffer(asdMemoryAlloc(0x100, 0x100, 0, 0x50, 1));
    asdDebugTrace(g_asdFilterSourceFileName, 297);
    filter->setMotions(asdMemoryAlloc(0x100, 0x100, 0, filter->getConfig()->count * 0x50, 1));
    FUN_0041cd5c(filter);
    filter->refreshTextureCoordinates();
    for (s32 i = 0; i < filter->getConfig()->count; i++) {
        Filter4PolyMotion *motions = (Filter4PolyMotion *)filter->getMotions();
        mtx44Copy(&motions[i], _ZN2nw4math5MTX448IdentityEv());
    }
    child->setTarget(config->colorA, config->colorB, config->colorC);
    return filter;
}
