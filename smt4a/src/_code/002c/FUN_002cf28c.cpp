/* NON_MATCHING: Retail mov r7, r0 differs from recovered mov r4, r0. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct MenuCommandValuesView {
    u32 unk00;                        // 0x00
    u32 unk04;                        // 0x04
    u32 unk08;                        // 0x08
};

struct MenuCommandView {
    MenuCommandView* next;             // 0x00
    u32 type;                          // 0x04
    u32 unk08;                         // 0x08
    MenuCommandValuesView unk0C;       // 0x0C
    unsigned long long unk18;          // 0x18
    u8 unk20[0x48];                    // 0x20
};

struct MenuHandlesView {
    u8 unk00[0x0C];                    // 0x00
    MenuCommandView* head;             // 0x0C
    u8 unk10[0x10];                    // 0x10
    MenuCommandView* tail;             // 0x20
};

extern "C" {
void* memAlloc(u32 size, u32 flags, u32 unkArg2, u32 unkArg3,
               u32 alignment, u32 unkArg5);
extern const char DAT_00544a98[];
extern MenuHandlesView g_effMenuHandles;

// Allocate a type-5 command, copy its payload, and append it to the menu queue.
void FUN_002cf28c(u32 value08, MenuCommandValuesView values,
                  unsigned long long value18)
{
    asdDebugTrace(DAT_00544a98, 0x283);

    MenuCommandView* command = static_cast<MenuCommandView*>(
        memAlloc(0x10000, 0x100, 0, 0x68, 0x10, 1));
    command->unk08 = value08;
    command->unk0C = values;
    command->unk18 = value18;
    command->type = 5;

    if (g_effMenuHandles.head == 0) {
        g_effMenuHandles.head = command;
    } else {
        g_effMenuHandles.tail->next = command;
    }
    g_effMenuHandles.tail = command;
    command->next = 0;
}
}
