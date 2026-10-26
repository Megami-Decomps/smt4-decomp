/* skinObjectUpdateMatrices.h */
#ifndef INCLUDE_UTIL_SKINOBJECTUPDATEMATRICES_H
#define INCLUDE_UTIL_SKINOBJECTUPDATEMATRICES_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
struct SkinObject;
/* Rebuilds the skin matrices when the object is dirty or its bind matrix is not the identity. The skin
 * object is the draw context's color-target block. */
void skinObjectUpdateMatrices(struct SkinObject *obj);
#ifdef __cplusplus
}
#endif

#endif
