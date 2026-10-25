/* NON_MATCHING: Retail mov ip, r0 differs from recovered ldr r0, [r0, #4]. */
#include "common.h"

struct CachedCommandView {
    s32 wordCount;                  // 0x00
    u32 words[0x78C / sizeof(u32)]; // 0x04
};

struct CommandRecordView {
    u8 unk00[0x10];                // 0x00
    CachedCommandView commands;    // 0x10
    u8 unk7A0[1];                  // 0x7A0
};

struct CommandTableView {
    u32 unk00;                     // 0x00
    CommandRecordView** records;   // 0x04
};

struct CommandHeaderView {
    u32 value;                     // 0x00
    u32 command;                   // 0x04
};

extern "C" {
extern u8 DAT_005dee3e;
void FUN_0019a270(u32* destination, u32 value, u32 command);
u32* FUN_00501084(CachedCommandView* commands, u32* destination);
void FUN_00500fe4(CachedCommandView* commands, u32* destination,
                  const void* data);
void* __aeabi_memcpy4(void* destination, const void* source, u32 byteCount);
}

// Emit the selected record, generating and caching its command words on first use.
extern "C" void FUN_00419ce0(CommandTableView* table, u32* destination,
                             u32 recordIndex, u32 value)
{
    CommandRecordView* record = table->records[recordIndex];
    if (record == 0) {
        return;
    }

    const void* trailingData = record->unk7A0;
    const CommandHeaderView header = {
        0x80000000u | DAT_005dee3e, 0x000F02C0
    };
    *reinterpret_cast<CommandHeaderView*>(destination) = header;
    destination += 2;
    FUN_0019a270(destination, value, 0x00BF02C1);

    CachedCommandView* commands = &record->commands;
    destination += 14;
    if (commands->wordCount == 0) {
        u32* end = FUN_00501084(commands, commands->words);
        commands->wordCount = end - commands->words;
    }

    __aeabi_memcpy4(destination, commands->words,
                static_cast<u32>(commands->wordCount) * sizeof(u32));
    FUN_00500fe4(commands, destination + commands->wordCount, trailingData);
}
