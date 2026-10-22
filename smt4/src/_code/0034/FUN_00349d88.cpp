/* NON_MATCHING: Retail mov ip, r0 differs from recovered ldr r0, [r0, #4]. */
#include "common.h"

struct CommandDataView {
    s32 wordCount;                         // 0x00
    u32 words[0x78C / sizeof(u32)];         // 0x04
};

struct CommandRecordView {
    u8 unk00[0x10];                        // 0x00
    CommandDataView commandData;           // 0x10
    u8 unk7A0[1];                          // 0x7A0
};

struct CommandTableView {
    u32 unk00;                             // 0x00
    CommandRecordView** records;            // 0x04
};

struct CommandHeaderView {
    u32 value;
    u32 command;
};

extern "C" {
extern u8 DAT_00490e3e;
void FUN_0023ae1c(u32* destination, u32 value, u32 command);
u32* FUN_0023bba0(s32* wordCount, u32* destination);
void FUN_0023bb00(s32* wordCount, u32* destination, const void* data);
void* rt_memcpy_w(void* destination, const void* source, u32 byteCount);
}

// Emit the selected record, generating and caching its command words on first use.
extern "C" void FUN_00349d88(CommandTableView* table, u32* destination,
                             u32 recordIndex, u32 value)
{
    CommandRecordView* record = table->records[recordIndex];
    if (record == 0) {
        return;
    }

    CommandHeaderView header = {0x80000000u | DAT_00490e3e, 0x000F02C0};
    *reinterpret_cast<CommandHeaderView*>(destination) = header;
    destination += 2;
    FUN_0023ae1c(destination, value, 0x00BF02C1);
    destination += 14;

    CommandDataView* commandData = &record->commandData;
    if (commandData->wordCount == 0) {
        u32* end = FUN_0023bba0(&commandData->wordCount, commandData->words);
        commandData->wordCount = end - commandData->words;
    }

    rt_memcpy_w(destination, commandData->words,
                static_cast<u32>(commandData->wordCount) * sizeof(u32));
    FUN_0023bb00(&commandData->wordCount,
                 destination + commandData->wordCount, record->unk7A0);
}
