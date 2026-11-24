/* NON_MATCHING: the native vector insertion expands to the same 98 rows, but the allocator
 * slot address, copy-backward loop and new-capacity calculation use different registers. */
#include "gfx/ObjectRegistry.h"

/* Lists an object that no registry holds yet. */
extern "C" void handleRegistryRegisterObject(ObjectRegistry *registry, RegisteredObject *object)
{
    if (object->registry == NULL) {
        registry->objects.push_back(object);
        object->registry = registry;
    }
}
