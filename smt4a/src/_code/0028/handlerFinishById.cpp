/* NON_MATCHING: only the literal pool differs: retail loads the symbol address and reaches the list head and count with pre-indexed loads ([r2,#1884]!, [r2,#4]); the build folds the offset into the pooled address */
#include "common.h"

extern "C" {

typedef struct Handler00280f98 {
    /* 0x00 */ s32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 callback;
    /* 0x0c */ u8 done;
    /* 0x0d */ u8 unk0d[3];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ struct Handler00280f98 *next;
    /* 0x18 */ s32 id;
} Handler00280f98;

typedef struct HandlerRange00280f98 {
    /* 0x0 */ Handler00280f98 *head;
    /* 0x4 */ s32 count;
} HandlerRange00280f98;

typedef struct HandlerList00280f98 {
    /* 0x000 */ u8 unk000[0x75c];
    /* 0x75c */ HandlerRange00280f98 handlers;
} HandlerList00280f98;

void asdSoundObjectStop(void);

extern HandlerList00280f98 g_asdSoundSystem; /* 0x63e1e8 */

/* Finishes the handler with the given id: stops its job (when it has one), marks it done and clears its callback. */
void handlerFinishById(s32 id)
{
    HandlerRange00280f98 *range = &g_asdSoundSystem.handlers;
    Handler00280f98 *handler = range->head;
    s32 i = 0;

    if (range->count > 0 && handler != NULL) {
        do {
            if (handler->id == id) {
                if (handler->job != 0) {
                    asdSoundObjectStop();
                }
                handler->done = 1;
                handler->callback = 0;
                return;
            }
            handler = handler->next;
            i++;
        } while (i < range->count);
    }
}

} /* extern "C" */
