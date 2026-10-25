#include "common.h"
#include "AsdSDK/AsdDebug.h"

// Private views of the portions accessed by this function.
struct JyoucyuAllocationView {
    void* process;       // 0x00
    u8 unk04;            // 0x04
    u8 unk05[3];         // 0x05
    u32 unk08;           // 0x08
};

struct JyoucyuGlobalView {
    u32 unk00;                       // 0x00
    JyoucyuAllocationView* unk04;     // 0x04
};

extern "C" {
extern JyoucyuGlobalView g_jyoucyu;

void* asdMemoryAlloc(u32 category, u32 size, u32 flags, u32 alignment,
                     u32 option);
s32 FUN_0025c7e4(void);
void jyoucyuRequest(void);
u32 jyoucyuDrawLoadingOverlay(void);

void* asdProcessCreateSimple(const char* name, u32 priority, u32 option,
                             u32 flags, s32 (*entry)(void),
                             void (*request)(void), void* argument);
void taskCreateDraw(const char* name, u32 priority, u32 option, u32 flags,
                    u32 (*draw)(void), u32 option2, u32 option3,
                    void* process);

// Allocate resident state, create its process, and attach the loading-overlay draw task.
void jyoucyuInitialize(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\kernel\\jyoucyu.cpp", 80);

    g_jyoucyu.unk04 = static_cast<JyoucyuAllocationView*>(
        asdMemoryAlloc(0x10000, 0x100, 0, 0x18, 1));
    g_jyoucyu.unk04->unk04 = 0;
    g_jyoucyu.unk04->unk08 = 0;
    JyoucyuAllocationView* state = g_jyoucyu.unk04;

    state->process = asdProcessCreateSimple(
        "JYOUCYU C", 4, 0, 0, FUN_0025c7e4, jyoucyuRequest, 0);

    taskCreateDraw("JYOUCYU D", 0x89, 0, 0,
                   jyoucyuDrawLoadingOverlay, 0, 0, state->process);
}
}
