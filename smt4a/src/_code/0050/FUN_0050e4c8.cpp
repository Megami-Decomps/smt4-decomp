/* NON_MATCHING: global critical-section pointer is reloaded rather than preserved in r4. */
#include "common.h"
struct InputState {u32 unk00;u32 value;};
extern "C" {
extern u32 DAT_0058936c;extern u32 DAT_0062d280;extern u8 entry;
void FUN_0042ce3c(void*);void nn_os_CriticalSection_Initialize(void*);
void emptyStub_002f4370(void*,void(*)(void*),void*);
/* Copies the initial word and initializes its global critical section. */
void FUN_0050e4c8(InputState *input){DAT_0058936c=input->value;DAT_0062d280=0;nn_os_CriticalSection_Initialize(&DAT_0062d280);emptyStub_002f4370(&DAT_0062d280,FUN_0042ce3c,&entry);}
}
