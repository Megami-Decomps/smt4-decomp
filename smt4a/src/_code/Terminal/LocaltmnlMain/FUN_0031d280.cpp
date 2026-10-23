#include "Terminal/LocaltmnlMain.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern LocalTmnlWork *g_localTmnl;
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
void messageSetMode(s32 mode);
s32 FUN_00328838(u32 job);
void localTmnlOnComplete(u32 job);
s32 FUN_00357f9c(u32 job);
s32 localTerminalDrawOverlays(u32 job);
s32 FUN_0037a068(u32 job);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 flags, s32 workSize,
    s32 (*run)(u32), void (*destroy)(u32), u32 parent);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 workSize,
    s32 (*run)(u32), void (*destroy)(u32), void *work, u32 parent);

void FUN_0031d280(const u32 *options)
{
    // Apocalypse's allocation extends well beyond the shared terminal prefix.
    struct TerminalStateView {
        LocalTmnlWork prefix;
        u32 phase, result;
        u8 unk10[8];
        u32 unk18[9];
        u32 mode;
        u8 unk40[0x50c];
        u32 flags;
        u8 ready;
        u8 unk551[3];
        u32 unk554, unk558, selected, option;
        u32 unk564, unk568, unk56C;
        struct { u32 current, target, resource; } transitions[3];
        u32 unk594;
    };
    typedef char LayoutCheck[sizeof(TerminalStateView) == 0x598 &&
        __INTADDR__(&((TerminalStateView *)0)->option) == 0x560 ? 1 : -1];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Terminal\\LocaltmnlMain.cpp", 211);
    g_localTmnl = static_cast<LocalTmnlWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(TerminalStateView), 1));
    TerminalStateView *state = reinterpret_cast<TerminalStateView *>(g_localTmnl);
    state->prefix.enabled = 1;
    state->phase = 0;
    state->result = 0;
    memset(state->unk18, 0, sizeof(state->unk18));
    state->flags = 0;
    state->ready = 0;
    state->unk554 = 0;
    state->selected = 0;
    state->option = 0;
    state->unk568 = 0;
    state->unk564 = 0;
    for (s32 index = 0; index < 3; ++index) {
        state->transitions[index].target = 0;
        state->transitions[index].current = 0;
    }
    messageSetMode(0);
    state->mode = 0;
    state->prefix.done = 0;
    if (options != NULL) {
        state->option = *options & 0xff;
        state->phase = 0;
        state->result = 0;
    }
    state->prefix.task = asdProcessCreateSimple("TMNL LO C", 4, 0, 0, FUN_00328838, localTmnlOnComplete, 0);
    taskCreateDraw("TMNL LO UD", 0x77, 0, 0, FUN_00357f9c, NULL, NULL, state->prefix.task);
    taskCreateDraw("TMNL LO UD", 0xd3, 0, 0, localTerminalDrawOverlays, NULL, NULL, state->prefix.task);
    taskCreateDraw("TMNL LO DD", 0xeb, 0, 0, FUN_0037a068, NULL, NULL, state->prefix.task);
}
}
