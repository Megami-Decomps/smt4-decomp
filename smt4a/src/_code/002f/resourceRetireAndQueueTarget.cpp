#include "common.h"
extern "C" {
struct Target;
struct TargetVtable { void *reserved; void (*destroy)(Target *target); };
struct Target { TargetVtable *vtable; };
struct Object { u8 unk00[0x24]; u8 ring[0x5C]; void *owner; };
void ownerRunOperationLocked(void *owner, Target *target);
void ringPush(void *ring, Target ***reference);
void resourceRetireAndQueueTarget(Object *object, Target **target) {
    if (target) {
        if (*target) {
            if (object->owner) ownerRunOperationLocked(object->owner, *target);
            else (*target)->vtable->destroy(*target);
        }
        ringPush(object->ring, &target);
    }
}
}
