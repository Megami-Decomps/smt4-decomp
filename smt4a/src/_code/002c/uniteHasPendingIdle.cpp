#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0000 */ u8 unk0000[0x430];
    /* 0x0430 */ u8 busy;
    /* 0x0431 */ u8 unk0431[0x8E2B];
    /* 0x925C */ s32 pending;
} Record;
extern Record *g_unite;

s32 messageMainIsIdle(void);

/* Returns 1 when the record has a pending item and is either idle or messageMainIsIdle reports 0; 0 when there is no record. */
u32 uniteHasPendingIdle(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    if (g_unite->pending != 0 && (g_unite->busy == 0 || messageMainIsIdle() == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
