#include "classes/EffGeomRecord.h"


/* Clears the draw state, the vertex-array slots and the color slots. */
EffGeomRecord::EffGeomRecord()
{
    EffGeomState *drawState = &state;
    drawState->flag00 = 0;
    drawState->unk04 = 0;
    drawState->unk08 = -1;
    drawState->unk0C = 0;
    drawState->unk14 = 0;
    drawState->unk18 = 0;
    drawState->unk20 = 0x2010000;
    drawState->unk24 = 0;
    drawState->unk28 = 0;
    drawState->unk30[0] = 0;
    drawState->unk30[1] = 0;
    drawState->unk30[2] = 0;
    drawState->unk30[3] = 0;
    drawState->unk30[4] = 0;
    drawState->unk30[5] = 0;
    vertices = NULL;
}
