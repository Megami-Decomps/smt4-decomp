/* NON_MATCHING: filter factory matches in structure and calls (inline Obj42080c/child constructors, quad buffer, identity matrix, texture, colour push); retail passes a stale register as a second asdOperatorNew argument at the filter `new`, stores the child's scalar before its vtable/zero pair (stm), and numbers registers differently. */
#include "classes/Obj42080c.h"
#include "classes/Obj420708.h"
#include "classes/Obj420880.h"
#include "AsdSDK/AsdDebug.h"

/* What the filter is built from: its rectangle, texture id and three colour components. */
struct Filter4PolySource : Obj42080cRect {
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 blendMode;
    /* 0x1C */ u32 textureId;
    /* 0x20 */ u8 unk20[0x14];
    /* 0x34 */ u32 colorA;
    /* 0x38 */ u32 colorB;
    /* 0x3C */ u32 colorC;
};

extern "C" {
extern const char DAT_0052730c[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void texturedQuadSetCentered(Obj42080c *filter);
u32 _ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(void *dest, u32 source);
void btlFilterLoadTexture(Obj42080c *filter, u32 flags, u32 textureIndex);
}

/* Builds a four-polygon filter over `source`: a colour child (flat or fading), the quad buffer, the
 * identity matrix and the texture, then pushes the source's colour into the child. */
Obj42080c *FUN_004151b0(Filter4PolySource *source, u32 flags, s32 fading)
{
    Obj420794Child *child;
    if (fading != 0) {
        child = new Obj420880;
    } else {
        child = new Obj420708;
    }
    Obj42080c *filter = new Obj42080c(child);
    filter->setRect(source);
    asdDebugTrace(DAT_0052730c, 49);
    filter->setBuffer(asdMemoryAlloc(0x100, 0x100, 0, 0x50, 1));
    texturedQuadSetCentered(filter);
    filter->refreshTextureCoordinates();
    mtx44Copy(filter->matrixSlot(), _ZN2nw4math5MTX448IdentityEv());
    btlFilterLoadTexture(filter, flags, source->textureId);
    child->setTarget(source->colorA, source->colorB, source->colorC);
    return filter;
}
