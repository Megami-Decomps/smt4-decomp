#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

// Private view of the initialized prefix of the resident allocation.
struct JyoucyuStateView {
    u32 process;       // 0x00: process handle
    u8 unk04;          // 0x04
    u8 unk05[3];       // 0x05
    u32 unk08;         // 0x08
};

extern "C" {
extern JyoucyuStateView* g_jyoucyu;
s32 jyoucyuLoadStep(u32 handle);

void jyoucyuRequest();
u32 FUN_001e981c();

void* asdMemoryAlloc(u32 size, u32 alignment, u32 flags, u32 category,
                     u32 heap);
void taskCreateDraw(const char* name, u32 priority, u32 unk08, u32 unk0C,
                    u32 (*callback)(), u32 unk14, u32 unk18,
                    u32 process);

// Allocate resident state and create its control process and draw task.
void jyoucyuInitialize(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\kernel\\jyoucyu.cpp", 76);

    g_jyoucyu = static_cast<JyoucyuStateView*>(
        asdMemoryAlloc(0x10000, 0x100, 0, 12, 1));
    g_jyoucyu->unk04 = 0;
    g_jyoucyu->unk08 = 0;
    JyoucyuStateView* state = g_jyoucyu;

    state->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("JYOUCYU C"), 2, 0, 0, jyoucyuLoadStep, reinterpret_cast<AsdProcFunc>(jyoucyuRequest), 0);
    taskCreateDraw("JYOUCYU D", 0x84, 0, 0, FUN_001e981c,
                   0, 0, state->process);
}
}
