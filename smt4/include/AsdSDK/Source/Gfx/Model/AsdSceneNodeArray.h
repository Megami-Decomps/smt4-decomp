#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDSCENENODEARRAY_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDSCENENODEARRAY_H
#include "nw/gfx/SceneNode.h"

/* The out-of-line reserve for arrays of scene nodes (IV's allocator does not check for NULL). */
extern "C" u32 FUN_002af294(nw::ut::MoveArray<nw::gfx::SceneNode *> *array, u32 count);

#endif
