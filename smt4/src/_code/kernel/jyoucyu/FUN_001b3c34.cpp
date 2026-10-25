/* NON_MATCHING: Retail add r0, pc, #140 differs from recovered add r0, pc, #144. */
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
extern u8 LAB_001c0400;

void jyoucyuRequest();
u32 FUN_001e981c();

void* asdMemoryAlloc(u32 size, u32 alignment, u32 flags, u32 category,
                     u32 heap);
void taskCreateDraw(const char* name, u32 priority, u32 unk08, u32 unk0C,
                    u32 (*callback)(), u32 unk14, u32 unk18,
                    u32 process);

// Allocate resident state and create its control process and draw task.
void FUN_001b3c34(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\kernel\\jyoucyu.cpp", 76);

    JyoucyuStateView* state = static_cast<JyoucyuStateView*>(
        asdMemoryAlloc(0x10000, 0x100, 0, 12, 1));
    g_jyoucyu = state;
    state->unk04 = 0;
    state->unk08 = 0;

    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("JYOUCYU C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(&LAB_001c0400), reinterpret_cast<AsdProcFunc>(jyoucyuRequest), 0);
    state->process = process;
    taskCreateDraw("JYOUCYU D", 0x84, 0, 0, FUN_001e981c,
                   0, 0, process);
}
}
