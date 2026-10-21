#include "common.h"

extern "C" {

#define SLOT_COUNT 0x25

typedef struct Registry {
    /* 0x0000 */ u8 unk0000[0x1B22];
    /* 0x1B22 */ s16 ids[SLOT_COUNT];      /* -1 = free */
    /* 0x1B6C */ u8 loaded;
    /* 0x1B6D */ u8 ready;
} Registry;

extern Registry *g_camp;

int ifTouchRegionRemove(void);
int ifTouchResetRecord(void);

/* If the registry is loaded, releases every used slot id (setting it to -1), clears its flags and runs ifTouchResetRecord. */
void FUN_002309dc(void)
{
    Registry *registry = g_camp;
    int i;

    if (registry->loaded == 0) {
        return;
    }
    i = 0;
    do {
        if (registry->ids[i] >= 0) {
            ifTouchRegionRemove();
            registry->ids[i] = -1;
        }
        i++;
    } while (i < SLOT_COUNT);
    registry->loaded = 0;
    registry->ready = 0;
    ifTouchResetRecord();
}

} /* extern "C" */
