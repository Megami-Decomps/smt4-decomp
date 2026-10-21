/* NON_MATCHING: compiler reorders mutex/vtable initialization and uses different argument registers; constructor naming pending. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj55b28c[];
struct Object { const void *vtable; u8 locked; u8 unk05[3]; void *mutex; };
void onlineMutexLockIfNeeded(void *mutex);
/* Initializes and locks the mutex-backed virtual object. */
Object *FUN_002e6e34(Object *object, void *mutex) {
    object->mutex = mutex;
    object->vtable = _ZTV9Obj55b28c + 8;
    object->locked = 1;
    onlineMutexLockIfNeeded(mutex);
    return object;
}
}
