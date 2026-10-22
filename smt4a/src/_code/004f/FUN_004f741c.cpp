/* NON_MATCHING: stack-buffer address caching and effect-name pointer scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"

struct AuxiliaryResourceView {
    u8 unk0000[0x2E20];
    BattleVersionResourceSlot slots[4];
};

extern "C" {
extern const char DAT_00528380[][32];
extern const char DAT_005284c0[];
void* sysMemClear(void* destination, u32 size);
void asdMemFree(void* memory);
s32 textFormatBuffer(char* destination, const char* format, ...);
char* libc_strcpy(char* destination, const char* source);
char* FUN_00100d60(char* text, s32 character);
u32 findRecordByKey(const char* name);
u32 asdLoadFileAsyncSimple(const char* path, u8** data, u32 flags);

// Reset the auxiliary effect slots and enqueue uncached files from the fixed effect-name table.
u32 FUN_004f741c(BtlAuxA* auxiliary)
{
    AuxiliaryResourceView* resources = reinterpret_cast<AuxiliaryResourceView*>(auxiliary);
    char path[128];
    char formatted[128];
    for (s32 index = 0; index < 4; ++index) {
        BattleVersionResourceSlot* slot = &resources->slots[index];
        slot->state = 0xFF;
        sysMemClear(slot->name, sizeof(slot->name));
        if (slot->data) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->readiness.flags = 0;
        sysMemClear(path, sizeof(path));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, DAT_00528380[index]);
        libc_strcpy(path, formatted);
        libc_strcpy(slot->name, FUN_00100d60(path, '/') + 1);
        if (findRecordByKey(slot->name) == 0xFF) {
            asdLoadFileAsyncSimple(path, &slot->data, 1);
            slot->readiness.flags |= 1;
        }
    }
    return 1;
}
}
