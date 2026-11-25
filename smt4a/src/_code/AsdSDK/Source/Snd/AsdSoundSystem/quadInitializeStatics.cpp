#include "shard/W6_W6Match7_QuadVectors.h"
#include "util/BitsAndBytes.h"

extern "C" {

/* The default color and four corner vectors, constructed at startup. */
QuadVectorState g_quadColorState;

/* The indexed blend-mode mappings, packed at startup. */
u32 g_quadBlendModes[5] = {
    packNibblesAndByte(6, 7, 0),
    packNibblesAndByte(6, 1, 0),
    packNibblesAndByte(6, 1, 2),
    packNibblesAndByte(5, 0, 1),
    packNibblesAndByte(0, 2, 0)
};

} /* extern "C" */
