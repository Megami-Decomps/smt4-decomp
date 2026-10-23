#include "addon/BootTransitionWork.h"
extern "C" {
void saveLoadCreateBootProcess(void);
s32 byteTripleGetV2(void);
void FUN_00320c64(void);
s32 aocBootIsFinished(void);
void aocBootStop(void);
void *FUN_00239288(void);
void rt_aeabi_memclr(void *buffer, u32 size);
const char *FUN_00371b10(u32 index, u32 flags);
char *libc_strcpy(char *destination, const char *source);
s32 FUN_003416a0(u32 index, const char *path);
void FUN_00268250(s32 operation, s32 mode, s32 flags, void *buffer, u32 size);
s32 FUN_00229c9c(void);
void byte1IsZero(void);
void asdSequenceRequest(s32 sequence, s32 argument, s32 flags);

/* Wait for add-on boot, perform the optional startup request, and enter the next sequence. */
void addonAdvanceBootTransition(BootTransitionWork *work)
{
    switch (work->state) {
    case 0:
        saveLoadCreateBootProcess();
        ++work->state;
    case 1:
        if (!byteTripleGetV2())
            return;
        FUN_00320c64();
        ++work->state;
    case 2:
        if (!aocBootIsFinished())
            return;
        aocBootStop();
        ++work->state;
    case 3: {
        void *requestBuffer = FUN_00239288();
        rt_aeabi_memclr(requestBuffer, 128);
        char path[128];
        rt_aeabi_memclr(path, sizeof(path));
        libc_strcpy(path, FUN_00371b10(0, 0));
        if (!FUN_003416a0(0, path)) {
            work->state += 2;
            return;
        }
        FUN_00268250(5, 0, 0, requestBuffer, 128);
        ++work->state;
    }
    case 4:
        if (!FUN_00229c9c())
            return;
        byte1IsZero();
        ++work->state;
    case 5:
        asdSequenceRequest(1, 0, 0);
        work->complete = 1;
        ++work->state;
        break;
    }
}
}
