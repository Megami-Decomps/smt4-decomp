/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, r6, r7, lr}'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Triple { u32 first, second, third; };
struct Object { u8 unk00[0x178]; u32 id; };
void *onlineInstanceTableGetCurrent(void);
void *onlineInstanceTableFind(void *table, u32 id);
void FUN_002fa722(void *instance, u32 argument, const Triple *value);
void onlineJobSetStateDone(Object *object);
void FUN_002fd51c(Object *object, u32 argument, const Triple *source) {
    
    void *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), object->id);
    if (instance) {
        Triple value = *source;
        FUN_002fa722(instance, argument, &value);
    }
}
}
