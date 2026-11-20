/* NON_MATCHING: armcc uses ip + offset #32 instead of retail's add r2, r2, #32 when clearing the two trailing arrays. */
#include "common.h"

struct SoundCallbackTables {
    void *args[8];
    void *funcs[8];
};

extern "C" {
extern void *g_dspCallbackSlots[8];
extern SoundCallbackTables DAT_0061a664;

/* Unregisters a callback matching `target`, clearing its slot and returning 1 if found. */
u32 sndUnregisterCallback(void *target)
{
    for (s32 i = 0; i < 8; ++i) {
        if (g_dspCallbackSlots[i] == target) {
            g_dspCallbackSlots[i] = NULL;
            DAT_0061a664.args[i] = NULL;
            DAT_0061a664.funcs[i] = NULL;
            return 1;
        }
    }
    return 0;
}
}
