/* NON_MATCHING: global critical-section pointer is reloaded rather than preserved in r4. */
#include "common.h"
extern "C" {
extern u32 DAT_0061a5f0;
extern u8 entry;
void FUN_0042ce3c(void *object);
void nn_os_CriticalSection_Initialize(void *section);
void emptyStub_002f4370(void *object,void (*destroy)(void *),void *module);
/* Initializes the module's critical section and registers its finalizer. */
void FUN_0050e078() { DAT_0061a5f0=0;nn_os_CriticalSection_Initialize(&DAT_0061a5f0);emptyStub_002f4370(&DAT_0061a5f0,FUN_0042ce3c,&entry); }
}
