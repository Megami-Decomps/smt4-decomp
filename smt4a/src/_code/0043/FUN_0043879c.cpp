/* NON_MATCHING: buffer pointer and end pointer register allocation differs. */
#include "common.h"
struct BufferState { u8 *begin; u8 *end; u32 size; };
extern "C" {
void rt_memclr(void *buffer,u32 size);
/* Binds and clears a 3072-byte buffer. */
void FUN_0043879c(BufferState *state,u8 *buffer) { state->begin=buffer; state->end=buffer+3072; state->size=0; rt_memclr(buffer,3072); }
}
