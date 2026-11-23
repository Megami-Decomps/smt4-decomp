/* NON_MATCHING: 297 lines (261 by shape). The rotation's table lookups run through more registers here (retail converts
 * the three phases through one scratch register and needs only d8), the texture-coordinate pairs are copied
 * through core registers where retail uses VFP ones, and the ring loop's products are scheduled
 * differently. */
#include "AsdSDK/AsdDebug.h"
#include "battle/Filter/FilterXPoly.h"
#include "gfx/EulerPhaseRotation.h"
#include "nw/math/MTX44.h"

#define XPOLY_UNITS_PER_DEGREE (256.0f / 360.0f)
#define XPOLY_SOURCE "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Filter\\FilterXPoly.cpp"

extern "C" {

void btlFilterLoadTexture(XPolyFilter *filter, u32 argument, u32 base);
void *asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void *asdOperatorNewE(u32 size);
void mtx44Copy(void *destination, const nw::math::MTX44 *source);

/* Sets the filter up from `params`: loads its texture, allocates the vertex and index buffers and builds
 * the vertex fan: the centre, then one rim vertex per segment, each the previous one turned about Z by
 * a segment's angle, with the two rim texture coordinates alternating. */
void btlFilterXPolySetup(XPolyFilter *filter, XPolyParams *params, u32 argument)
{
    filter->params = params;
    btlFilterLoadTexture(filter, argument, params->baseArgument);
    asdDebugTrace(XPOLY_SOURCE, 48);
    filter->vertices = (XPolyVertex *)asdMemoryAlloc(0x100, 0x100, 0,
                                                     (filter->params->segments + 1) * sizeof(XPolyVertex), 1);
    filter->indices = asdOperatorNewE((filter->params->segments + 1) * 12);

    Matrix34Data turn;
    buildEulerPhaseRotationBatched(&turn, g_sinCosTable, 0.0f, 0.0f, 360.0f / (f32)filter->params->segments * XPOLY_UNITS_PER_DEGREE);

    f32 radius = filter->params->radius;
    Vec3f position;
    position.x = 0.0f;
    position.y = 0.0f;
    position.z = 0.0f;
    filter->vertices[0].position = position;
    filter->vertices[0].uv = filter->params->centerUv;
    position.x = radius;
    filter->vertices[1].position = position;
    filter->vertices[1].uv = filter->params->oddUv;
    for (s32 i = 2; i < filter->params->segments + 1; i++) {
        Vec3f turned;
        turned.x = turn.values[0] * position.x + turn.values[1] * position.y + turn.values[2] * position.z;
        turned.y = turn.values[4] * position.x + turn.values[5] * position.y + turn.values[6] * position.z;
        turned.z = turn.values[8] * position.x + turn.values[9] * position.y + turn.values[10] * position.z;
        position = turned;
        filter->vertices[i].position = position;
        if (i & 1) {
            filter->vertices[i].uv = filter->params->oddUv;
        } else {
            filter->vertices[i].uv = filter->params->evenUv;
        }
    }

    filter->depth = 0.0f;
    filter->scale = 1.0f;
    mtx44Copy(filter->matrix, &nw::math::MTX44::Identity());
}

} /* extern "C" */
