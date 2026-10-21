/* NON_MATCHING: retail uses add r1, pc, #32 where the compiled block uses ldr r1, [pc, #36]. */
#include "common.h"

struct HandleRegistry;

extern "C" {
extern HandleRegistry* g_handleRegistry;
extern const char LAB_0013b4ec[];

void* FUN_00178b04(u32 size, const char* sourceFile, u32 sourceLine);
HandleRegistry* FUN_001464b4(void* storage);
void FUN_001463b4(HandleRegistry* registry);

void FUN_0013b4ac(void)
{
    if (g_handleRegistry == NULL) {
        HandleRegistry* registry = static_cast<HandleRegistry*>(
            FUN_00178b04(0x4C, LAB_0013b4ec, 0x28));
        if (registry != NULL) {
            registry = FUN_001464b4(registry);
        }
        g_handleRegistry = registry;
        FUN_001463b4(registry);
    }
}
}
