#include "gfx/TexturedQuad.h"

struct CenteredQuadView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TexturedQuadVertex *vertices;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1c */ TexturedQuadParameters *parameters;
};

// Write the four centered rectangle positions while preserving the other vertex attributes.
extern "C" void FUN_0034b884(CenteredQuadView *quad)
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
