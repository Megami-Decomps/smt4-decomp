#include "shard/Shard004B.h"

extern "C" {

void halves34Copy(Halves34 *src, u16 *out)
{
    if (src != NULL) {
        out[0] = src->h[0];
        out[1] = src->h[1];
        out[2] = src->h[2];
        out[3] = src->h[3];
        out[4] = src->h[4];
        out[5] = src->h[5];
        out[6] = src->h[6];
        out[7] = src->h[7];
    }
}

} /* extern "C" */
