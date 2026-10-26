/* NON_MATCHING: `list` is built through r0 and moved (add; add; mov r4, r0) and the result compared as cmp r5, r0 in retail; here it is built directly in r4 and compared as cmp r0, r5. */
#include "common.h"
#include "util/FUN_0029ee54.h"

extern "C" {

typedef struct Cursor {
    /* 0x000 */ u8 unk000[0x4D4];
    /* 0x4D4 */ u8 list[4];
} Cursor;

extern Cursor *g_statusDown;

int FUN_0029efa8(void);

/* Returns whether FUN_0029efa8() is the last index of the cursor's list (list size - 1); false if there is no cursor. */
u32 FUN_002f6614(void)
{
    if (g_statusDown != NULL) {
        void *list = g_statusDown->list;
        int current = FUN_0029efa8();

        if (current == FUN_0029ee54(list) - 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
