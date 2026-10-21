/* NON_MATCHING: first finalizer-registration call was replaced by a NOP without a target relocation. */
#include "common.h"
struct GlobalState {u32 state;u8 active;};
extern "C" {
extern GlobalState DAT_005b3fa8;extern u8 entry;void FUN_002fd02a(void *object);
void emptyStub_002f4370(void *object,void(*destroy)(void*),void *module);
/* Clears both module states and registers the active state's finalizer. */
void FUN_0050df58(u32 *state){*state=0;DAT_005b3fa8.state=0;DAT_005b3fa8.active=1;emptyStub_002f4370(&DAT_005b3fa8,FUN_002fd02a,&entry);}
}
