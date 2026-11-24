#include "gfx/ObjectRegistry.h"

/* Removes an object from the registry and clears its registry link. */
extern "C" void ptrListRemoveClearOwner(ObjectRegistry *registry, RegisteredObject *object)
{
    for (std::vector<RegisteredObject *>::iterator it = registry->objects.begin(); it != registry->objects.end(); ++it) {
        if (*it == object) {
            object->registry = NULL;
            registry->objects.erase(it);
            return;
        }
    }
}
