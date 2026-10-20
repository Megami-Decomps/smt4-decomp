#include "common.h"

extern "C" {

struct fn_0035ac98_arg0;

void nn_fnd_detail_UnlinkHeap(fn_0035ac98_arg0 *arg0);

/* Forwards to nn_fnd_detail_UnlinkHeap, the function that follows it. */
void nn_fnd_detail_DestroyHeap(fn_0035ac98_arg0 *arg0)
{
    nn_fnd_detail_UnlinkHeap(arg0);
}

} /* extern "C" */
