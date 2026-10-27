#include "classes/Obj42080c.h"
#include "classes/Obj557b38Child.h"
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
extern "C" Obj42080c *filterCreateQuad(Filter4PolySource *source, u32 flags, s32 fading)
{
    Obj420794Child *child;
    if (fading != 0) {
        child = new Obj557d28;
    } else {
        child = new Obj557b38;
    }
    u32 owner; /* never set: retail passes whatever r4 held */
    Obj42080c *filter = new (owner) Obj42080c(child);
    filter->setRect(source);
    asdDebugTrace(DAT_0052730c, 49);
    filter->setBuffer(asdMemoryAlloc(0x100, 0x100, 0, 0x50, 1));
    texturedQuadSetCentered(filter);
    filter->refreshTextureCoordinates();
    mtx44Copy(filter->matrixSlot(), _ZN2nw4math5MTX448IdentityEv());
    btlFilterLoadTexture(filter, flags, static_cast<Filter4PolySource *>(filter->getRect())->textureId);
    child->setTarget(source->colorA, source->colorB, source->colorC);
    return filter;
}
