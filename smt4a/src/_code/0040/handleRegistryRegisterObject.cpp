/* NON_MATCHING: std::vector<RegisteredObject *>::push_back with its inlined _C_insert_aux matches instruction for instruction except register assignment (retail keeps the element address in r1/r2/r4, the build in r0/r3), and the library calls need the renames of __rw_allocate/__rw_deallocate (rename_S2.tsv). */
#include "gfx/ObjectRegistry.h"

/* Lists an object that no registry holds yet. */
extern "C" void handleRegistryRegisterObject(ObjectRegistry *registry, RegisteredObject *object)
{
    if (object->registry == NULL) {
        registry->objects.push_back(object);
        object->registry = registry;
    }
}
