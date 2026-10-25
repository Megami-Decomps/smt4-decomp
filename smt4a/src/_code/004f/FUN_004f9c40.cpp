/* NON_MATCHING: assist-slot loop, path buffers and cache-name addresses use different saved registers. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

struct AssistEffectSlot {
    u8 index;
    u8 unk01[3];
    void *data;
    char name[128];
    u8 flags;
    u8 unk89[3];
};
struct AssistEffectOwner { u8 unk0000[0x3284]; AssistEffectSlot slots[2]; };
extern "C" {
extern const char DAT_00528480[2][32];
extern const char DAT_005284c0[];
void sysMemClear(void *memory, u32 size);
void asdMemFree(void *memory);
void textFormatBuffer(char *output, const char *format, ...);
char *libc_strcpy(char *output, const char *input);
const char *FUN_00100d60(const char *text, u32 character);
u32 findRecordByKey(const char *name);

// Reset the two assist-effect slots and asynchronously load resources absent from the effect cache.
u32 FUN_004f9c40(AssistEffectOwner *owner)
{
    for (s32 i = 0; i < 2; ++i) {
        AssistEffectSlot *slot = &owner->slots[i];
        slot->index = 0xff;
        sysMemClear(slot->name, sizeof(slot->name));
        if (slot->data) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->flags = 0;
        char path[128], formatted[128];
        sysMemClear(path, sizeof(path));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, DAT_00528480[i]);
        libc_strcpy(path, formatted);
        const char *name = FUN_00100d60(path, '/');
        libc_strcpy(slot->name, name + 1);
        if (findRecordByKey(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&slot->data), 1);
            slot->flags |= 1;
        }
    }
    return 1;
}
}
