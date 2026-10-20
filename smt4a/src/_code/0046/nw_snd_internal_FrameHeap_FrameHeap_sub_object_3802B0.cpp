/* NON_MATCHING: the cleared handle is written from r1 in retail, from r0 here. */
#include "common.h"

extern "C" {

/* nw::snd::internal::FrameHeap: only the heap handle is touched here. */
typedef struct {
    void *heap;      /* 0x00 */
} FrameHeap;

void FUN_0018c988(void *heap);
void nw_snd_internal_FrameHeap_ClearSection(FrameHeap *self);
void nw_ut_FrameHeap_Free(void *heap, int mode);

/* Releases the heap handle, if any, and returns `self`. */
FrameHeap *nw_snd_internal_FrameHeap_FrameHeap_sub_object_3802B0(FrameHeap *self)
{
    if (self->heap != NULL) {
        nw_snd_internal_FrameHeap_ClearSection(self);
        nw_ut_FrameHeap_Free(self->heap, 3);
        FUN_0018c988(self->heap);
        self->heap = NULL;
    }
    return self;
}

} /* extern "C" */
