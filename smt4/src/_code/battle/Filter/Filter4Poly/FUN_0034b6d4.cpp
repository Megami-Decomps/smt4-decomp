/* NON_MATCHING: calls, stores and constants match retail; callee-saved numbering differs (retail: config r7, zero r6, child r8; built: config r6, zero r8, child r7), the filter null test is `movs r5, r0` where retail uses `moveq r5, #0`, and the motion address is formed after the IdentityEmit call instead of before. */
#include "classes/Obj42094c.h"
#include "classes/Obj420708.h"
#include "classes/Obj420880.h"
#include "AsdSDK/AsdDebug.h"

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
    Obj42094c *filter = new (flags) Obj42094c(child);
    filter->setConfig(config);
    FUN_0023b49c(filter, flags, config->unk1c);
    asdDebugTrace(DAT_003ff7fc, 296);
    filter->setBuffer(asdMemoryAlloc(0x100, 0x100, 0, 0x50, 1));
    asdDebugTrace(DAT_003ff7fc, 297);
    filter->setMotions(asdMemoryAlloc(0x100, 0x100, 0, filter->getConfig()->count * 0x50, 1));
    FUN_0034b884(filter);
    filter->refreshTextureCoordinates();
    for (s32 i = 0; i < filter->getConfig()->count; i++) {
        mtx44Copy(&((Filter4PolyMotion *)filter->getMotions())[i], _ZN2nw4math5MTX448IdentityEv());
    }
    child->setTarget(config->colorA, config->colorB, config->colorC);
    return filter;
}
