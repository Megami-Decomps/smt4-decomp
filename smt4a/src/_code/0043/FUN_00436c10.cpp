/* NON_MATCHING: sentinel/result register lifetimes and allocation-failure block merging differ. */
#include "gfx/MaskWork.h"
#include <new>
extern "C" {
s32 rt_memcmp(const void *left, const void *right, u32 bytes);
void *rt_memcpy(void *destination, const void *source, u32 bytes);
void *FUN_004387f0(void *allocator, u32 kind);
s32 FUN_00434d04(MaskWorkBody *body, void *allocator, u32 bytes, s32 clear);
u32 FUN_0043756c(MaskSourceProcessor *processor, MaskWorkState **state);

// Construct and append one state to the intrusive list.
static inline MaskWorkState *maskStateListAppend(MaskStateList *list)
{
    MaskWorkState *state = static_cast<MaskWorkState *>(FUN_004387f0(list->allocator, 3));
    if (state != NULL) {
        new (state->body()) MaskWorkBody;
        MaskWorkState *sentinel = reinterpret_cast<MaskWorkState *>(list);
        state->links.previous = list->previous;
        state->links.next = sentinel;
        list->previous = state;
        state->links.previous->links.next = state;
    }
    return state;
}

// Find the mask state for this baseline, or allocate, link and populate a new state.
void FUN_00436c10(MaskWorkState **output, MaskSourceProcessor *processor, const u8 *key)
{
    MaskWorkState *sentinel = reinterpret_cast<MaskWorkState *>(&processor->states);
    MaskWorkState *state = processor->states.next;
    while (state != sentinel) {
        if (rt_memcmp(state->baseline, key, processor->byteCount) == 0)
            break;
        state = state->links.next;
    }
    if (state != sentinel) {
        *output = state;
        return;
    }
    state = maskStateListAppend(&processor->states);
    MaskWorkState *newState = state;
    if (state != NULL && FUN_00434d04(state->body(), processor->allocator, processor->byteCount, 0)) {
        rt_memcpy(state->baseline, key, processor->byteCount);
        newState = state;
        if (FUN_0043756c(processor, &newState)) {
            *output = state;
            return;
        }
    }
    *output = NULL;
}
}
