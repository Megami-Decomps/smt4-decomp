/* NON_MATCHING: first hook argument 0x04000000 uses MOV instead of retail's literal load. */
#include "AsdSDK/AsdDebugHooks.h"

struct EncodingTableSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ const u8* characterTable;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ const u8* conversionTable;
};

extern "C" {
EncodingTableSlot* FUN_002e2ec0(void);
const u8* FUN_00197c2c(u32 kind, const char* encoding);
const u8* FUN_001bc5ac(u32 kind, const char* encoding);

// Register the default encoding tables after the release-disabled resource hooks.
void FUN_00136c40(void)
{
    asdDebugHookPtrInt(NULL, 0x04000000);
    asdDebugHookPtrInt(NULL, 0x04000027);
    EncodingTableSlot* slot = FUN_002e2ec0();
    slot->characterTable = FUN_00197c2c(0, NULL) + 1;
    slot->conversionTable = FUN_001bc5ac(0, NULL);
}
}
