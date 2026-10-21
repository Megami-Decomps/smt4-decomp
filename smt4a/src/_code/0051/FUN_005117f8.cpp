/* NON_MATCHING: compiler merges vtable and critical-section stores into stm. */
#include "common.h"
struct GlobalState {const void *vtable;u32 section;u8 unk08[8];u32 first,second,third;};
extern "C" {extern GlobalState DAT_006462a0;extern u8 DAT_0055b3b0[];extern u8 entry;void FUN_0043a20c(void*);void nn_os_CriticalSection_Initialize(void*);void emptyStub_002f4370(void*,void(*)(void*),void*);
/* Initializes the global object and registers its finalizer. */
void FUN_005117f8(){DAT_006462a0.vtable=DAT_0055b3b0;DAT_006462a0.section=0;nn_os_CriticalSection_Initialize(&DAT_006462a0.section);DAT_006462a0.first=0;DAT_006462a0.second=0;DAT_006462a0.third=0;emptyStub_002f4370(&DAT_006462a0,FUN_0043a20c,&entry);}}
