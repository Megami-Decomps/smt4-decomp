/* NON_MATCHING: 108 of 108 rows and the callee-saved numbering now match (conditional construction `memory != NULL ? ::new (memory) T(child) : NULL`, child assigned after the derived members, motion address local); remaining differences: the inline constructor copies the filter into r5 before the vptr/config stores (retail after them, with the vptr literal in r1) and the motion base/index registers are swapped. */
#include "classes/Obj42094c.h"
#include "classes/Obj420708.h"
#include "classes/Obj420880.h"
#include "AsdSDK/AsdDebug.h"
#include <new>

extern "C" {
extern const char DAT_003ff7fc[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_0034b884(Obj42094c *filter);
u32 _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(void *dest, u32 source);
void FUN_0023b49c(Obj42094c *filter, u32 flags, u32 textureId);
}

/* Builds the four-polygon filter over `config`: a colour child (flat or fading), the vertex and
 * motion buffers, one identity matrix per motion and the texture, then pushes the config's colour. */
extern "C" Obj42094c *FUN_0034b6d4(Filter4PolyConfig *config, u32 flags, s32 fading)
{
    Obj420794Child *child = NULL;
    if (fading != 0) {
        child = new Obj420880;
    } else {
        child = new Obj420708;
    }
    void *memory = Obj420794::operator new(sizeof(Obj42094c), flags);
    Obj42094c *filter = memory != NULL ? ::new (memory) Obj42094c(child) : NULL;
    filter->setConfig(config);
    FUN_0023b49c(filter, flags, config->unk1c);
    asdDebugTrace(DAT_003ff7fc, 296);
    filter->setBuffer(asdMemoryAlloc(0x100, 0x100, 0, 0x50, 1));
    asdDebugTrace(DAT_003ff7fc, 297);
    filter->setMotions(asdMemoryAlloc(0x100, 0x100, 0, filter->getConfig()->count * 0x50, 1));
    FUN_0034b884(filter);
    filter->refreshTextureCoordinates();
    for (s32 i = 0; i < filter->getConfig()->count; i++) {
        Filter4PolyMotion *motion = &((Filter4PolyMotion *)filter->getMotions())[i];
        mtx44Copy(motion, _ZN2nw4math5MTX448IdentityEv());
    }
    child->setTarget(config->colorA, config->colorB, config->colorC);
    return filter;
}
