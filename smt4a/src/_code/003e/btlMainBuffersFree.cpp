#include "common.h"

extern "C" {

/* The battle module global, as the buffer release sees it: five owned buffers. */
typedef struct BtlMainBuffers003ec580 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void *shared0;  /* the three shared buffers are freed only when releasing everything */
    /* 0x10 */ void *shared1;
    /* 0x14 */ void *shared2;
    /* 0x18 */ void *buffer18;
    /* 0x1c */ void *buffer1c;
} BtlMainBuffers003ec580;

typedef struct BtlMainState003ec580 {
    /* 0x0000 */ u8 unk0000[0x4e48];
    /* 0x4e48 */ void *buffer;
} BtlMainState003ec580;

void asdMemFree(void);

extern BtlMainBuffers003ec580 g_btlMain; /* 0x573920 */

/* Frees the battle's buffers: the shared ones too when releaseShared is set, then those of the battle state. */
void btlMainBuffersFree(BtlMainState003ec580 *state, s32 releaseShared)
{
    if (releaseShared != 0) {
        if (g_btlMain.shared0 != NULL) {
            asdMemFree();
            g_btlMain.shared0 = NULL;
        }
        if (g_btlMain.shared1 != NULL) {
            asdMemFree();
            g_btlMain.shared1 = NULL;
        }
        if (g_btlMain.shared2 != NULL) {
            asdMemFree();
            g_btlMain.shared2 = NULL;
        }
    }
    if (g_btlMain.buffer18 != NULL) {
        asdMemFree();
        g_btlMain.buffer18 = NULL;
    }
    if (g_btlMain.buffer1c != NULL) {
        asdMemFree();
        g_btlMain.buffer1c = NULL;
    }
    if (state->buffer != NULL) {
        asdMemFree();
        state->buffer = NULL;
    }
}

} /* extern "C" */
