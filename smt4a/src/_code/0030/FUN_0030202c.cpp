#include "common.h"
extern "C" {
struct Triple { u32 first, second, third; };
struct Object { u8 unk00[0x68]; u32 id; };
void *onlineInstanceTableGetCurrent(void);
void *onlineInstanceTableFind(void *table, u32 id);
void FUN_002fa722(void *instance, u32 argument, const Triple *value);
void onlineJobSetStateDone(Object *object);
void FUN_0030202c(Object *object, u32 argument, const Triple *source) {
    onlineJobSetStateDone(object);
    void *instance = onlineInstanceTableFind(onlineInstanceTableGetCurrent(), object->id);
    if (instance) {
        Triple value = *source;
        FUN_002fa722(instance, argument, &value);
    }
}
}
