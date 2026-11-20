#include "common.h"

struct HandleRegistry;

extern "C" {
extern HandleRegistry* g_handleRegistry;

void* asdMemoryAllocTraced(u32 size, const char* sourceFile, u32 sourceLine);
HandleRegistry* _ZN9Obj557c48C1Ev(void* storage);
void modelHandleRegistryInit(HandleRegistry* registry);

void handleRegistryCreate(void)
{
    if (g_handleRegistry == NULL) {
        HandleRegistry* registry = static_cast<HandleRegistry*>(
            asdMemoryAllocTraced(0x4C, "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x28));
        if (registry != NULL) {
            registry = _ZN9Obj557c48C1Ev(registry);
        }
        g_handleRegistry = registry;
        modelHandleRegistryInit(registry);
    }
}
}
