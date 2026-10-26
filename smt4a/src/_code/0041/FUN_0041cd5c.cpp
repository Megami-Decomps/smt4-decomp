#include "gfx/TexturedQuad.h"

/* Apocalypse layout: the parameters pointer sits at 0x1c. */
struct TexturedQuadA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TexturedQuadVertex *vertices;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1c */ TexturedQuadParameters *parameters;
};

/* Rebuilds a centered quad from its horizontal and vertical half-extents. */
extern "C" void FUN_0041cd5c(TexturedQuadA *quad)
{
    texturedQuadSetPosition(&quad->vertices[0], -quad->parameters->halfWidth,
                             quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[1], -quad->parameters->halfWidth,
                             -quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[2], quad->parameters->halfWidth,
                             quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[3], quad->parameters->halfWidth,
                             -quad->parameters->halfHeight, 0.0f);
}
