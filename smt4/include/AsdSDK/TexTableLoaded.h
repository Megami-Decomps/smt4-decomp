/* The resource a texture table entry's node has loaded. */
#ifndef SMT4_ASDSDK_TEXTABLELOADED_H
#define SMT4_ASDSDK_TEXTABLELOADED_H

#include "common.h"

struct AsdTexture;

extern "C" {

/* The texture loaded for node `node` of texture table entry `table`. */
struct AsdTexture *asdTMTexTableGetNodeTexture(s32 table, s32 node);

} /* extern "C" */

#endif
