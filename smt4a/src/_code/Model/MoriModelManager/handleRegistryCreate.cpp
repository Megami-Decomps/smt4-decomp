#include "common.h"

struct HandleRegistry;

extern "C" {
extern HandleRegistry* g_handleRegistry;

void* FUN_00178b04(u32 size, const char* sourceFile, u32 sourceLine);
HandleRegistry* _ZN9Obj557c48C1Ev(void* storage);
void FUN_001463b4(HandleRegistry* registry);

void handleRegistryCreate(void)
{
    if (g_handleRegistry == NULL) {
        HandleRegistry* registry = static_cast<HandleRegistry*>(
            FUN_00178b04(0x4C, "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x28));
        if (registry != NULL) {
            registry = _ZN9Obj557c48C1Ev(registry);
        }
        g_handleRegistry = registry;
        FUN_001463b4(registry);
    }
}
}
