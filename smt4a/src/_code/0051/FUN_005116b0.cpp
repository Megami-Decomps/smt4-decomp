/* NON_MATCHING: global critical-section pointer is reloaded rather than preserved in r4. */
#include "common.h"
extern "C" {
extern u32 DAT_0061a62c;extern u8 entry;
void __aeabi_vec_ctor_nocookie_nodtor();void FUN_0042ce3c(void *object);
void nn_os_CriticalSection_Initialize(void *section);
void emptyStub_002f4370(void *object,void (*destroy)(void *),void *module);
/* Initializes the module and its global critical section. */
void FUN_005116b0(){__aeabi_vec_ctor_nocookie_nodtor();DAT_0061a62c=0;nn_os_CriticalSection_Initialize(&DAT_0061a62c);emptyStub_002f4370(&DAT_0061a62c,FUN_0042ce3c,&entry);}
}
