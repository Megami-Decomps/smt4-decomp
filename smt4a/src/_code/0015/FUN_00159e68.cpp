/* NON_MATCHING: svc 0x24 (through svcWaitSynchronization1) and the FUN_0016faa8 IPC call match; the listener search is written as a plain walk, where retail iterates an intrusive list through link pointers (element = link - 4) with a circular end test. */
#include "common.h"
#include "nn/Result.h"

/* A listener the sound thread notifies when its id is signaled; kept on an intrusive list
 * (the links sit at +4 and +8). */
class SoundListener {
public:
    virtual void notify() = 0;
    SoundListener *prev;  // 0x04
    SoundListener *next;  // 0x08
    u32 id;               // 0x0c
};

/* The sound system's event state: the handle the thread waits on and the registered listeners. */
struct SoundEventState {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 event;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ SoundListener *listeners;
    /* 0x1c */ u8 lock[0x14];
};

extern "C" {
extern SoundEventState DAT_00646078;

s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_002e3140(s32 result, bool failed);
s32 FUN_0016faa8(u32 *id);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void sysFatalBreak(bool failed);

/* The sound thread: waits for the event, asks the service which listener fired and notifies it. */
void FUN_00159e68(void)
{
    for (;;) {
        s32 result = svcWaitSynchronization1(DAT_00646078.event, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        u32 id;
        result = FUN_0016faa8(&id);
        if (nnResultIsSuccess(result)) {
            nn_os_CriticalSection_Enter(DAT_00646078.lock);
            for (SoundListener *listener = DAT_00646078.listeners; listener != NULL; listener = listener->next) {
                if (listener->id == id) {
                    listener->notify();
                    break;
                }
            }
            nn_os_CriticalSection_Leave(DAT_00646078.lock);
            result = 0;
        }
        if (nnResultIsFailure(result)) {
            sysFatalBreak(true);
        }
    }
}

} /* extern "C" */
