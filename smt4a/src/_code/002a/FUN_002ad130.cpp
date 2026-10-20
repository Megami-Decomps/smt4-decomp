#include "common.h"

extern "C" {

typedef struct EventTex {
    u8 unk00[0x90];
    f32 scaleX; /* 0x90 */
    f32 scaleY; /* 0x94 */
} EventTex;

extern EventTex *g_eventTex;

extern void *eventCommandGetPendingCleanup(void);
extern void FUN_003d8f24(void);
extern f32 *FUN_00208bfc(void *entry);

/* Script command: applies the current entry's 2D offset (times 30) to the event texture; returns 0. */
u32 FUN_002ad130(void)
{
    void *entry = eventCommandGetPendingCleanup();

    if (entry != NULL) {
        f32 *offset;

        FUN_003d8f24();
        offset = FUN_00208bfc(entry);
        g_eventTex->scaleX = offset[0] * 30.0f;
        g_eventTex->scaleY = offset[1] * 30.0f;
    }
    return 0;
}

} /* extern "C" */
