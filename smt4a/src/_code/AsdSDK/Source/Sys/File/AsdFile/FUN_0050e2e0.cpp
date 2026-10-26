/* NON_MATCHING: everything matches retail except that for the last registration retail loads the atexit arguments (r2, r1) after the event's two zero stores; the build loads them first. */
#include "common.h"

struct ThreadState { u32 state; u8 active; };
struct AsdFileEvent { u32 first; u32 second; };

extern "C" {
extern ThreadState DAT_005b3fcc;
extern u32 g_asdFileMutex;
extern AsdFileEvent g_asdFileEvent;
extern u8 entry;
void _ZN9Obj2fd02aD1Ev(void *object);
void FUN_0042d340(void *object);
void FUN_0042cd08(void *object);
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);

/* Initializes the file module's thread state, mutex and event and registers their finalizers. */
void FUN_0050e2e0(void)
{
    DAT_005b3fcc.state = 0;
    DAT_005b3fcc.active = 1;
    __aeabi_atexit(&DAT_005b3fcc, _ZN9Obj2fd02aD1Ev, &entry);
    g_asdFileMutex = 0;
    __aeabi_atexit(&g_asdFileMutex, FUN_0042d340, &entry);
    g_asdFileEvent.first = 0;
    g_asdFileEvent.second = 0;
    __aeabi_atexit(&g_asdFileEvent, FUN_0042cd08, &entry);
}
}
