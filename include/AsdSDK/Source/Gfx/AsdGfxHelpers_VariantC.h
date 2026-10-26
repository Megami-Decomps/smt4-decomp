#pragma once
#include "common.h"

/* Graphics, texture and scene helpers of the Asd SDK. */
struct SkinObject;
extern "C" {

/* Rebuilds the skin matrices when the object is dirty or its bind matrix is not the identity. The skin
 * object is the draw context's color-target block. */
void skinObjectUpdateMatrices(struct SkinObject *obj);

} /* extern "C" */
