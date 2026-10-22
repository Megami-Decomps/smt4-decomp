/* NON_MATCHING: Retail ldr r6, [pc, #144] differs from recovered ldr r6, [pc, #136]. */
#include "common.h"

struct AsdTexture;

// Private view of one 0x4c-byte entry in DAT_004332a0.
struct EffectTextureEntryView {
    AsdTexture* texture;    // 0x00
    char name[0x40];         // 0x04
    void* fileData;          // 0x44
    u8 unk48[2];            // 0x48
    u8 unk4A;               // 0x4a
    u8 unk4B;               // 0x4b
};

extern "C" {
extern EffectTextureEntryView DAT_004332a0[26];

AsdTexture* asdTextureCreate(u32 flags);
s32 FUN_002522f8(char* destination, u32 capacity, const char* format, ...);
void* fileLoadSync(const char* path, u32* size, u32 flags);
s32 asdTexTgaLoadNw4c(AsdTexture* texture, const void* data, u32 size, u32 flags);

// Load TGA data for each eligible effect entry whose texture has not been created.
void FUN_00328d2c(void)
{
    char path[128];
    u32 fileSize;

    for (u32 index = 0; index < 26; ++index) {
        EffectTextureEntryView* entry = &DAT_004332a0[index];
        if (entry->unk4A != 1 && entry->texture == 0) {
            entry->texture = asdTextureCreate(0);
            FUN_002522f8(path, sizeof(path), "%s%s.tga",
                         "battle/effect/tex/", entry->name);
            void* fileData = fileLoadSync(path, &fileSize, 0);
            entry->fileData = fileData;
            asdTexTgaLoadNw4c(entry->texture, fileData, fileSize, 0x10000);
        }
    }
}
}
