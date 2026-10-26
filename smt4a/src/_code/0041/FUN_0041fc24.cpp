/* NON_MATCHING: occupied-slot flag address is selection + (work + 0x2ec) in retail (add r1,r4,#748; ldrb [r0,r1]); the build forms work + selection then adds the offset. */
#include "common.h"
#include <stddef.h>
#include "util/CalleeContracts.h"
#include "util/GameDataBlocksGetSaveData.h"

extern "C" {
void FUN_0023b45c(s32 enabled);
char *libc_strcpy(char *output, const char *input);
void FUN_0033440c(u32 value);
void FUN_0033449c(s32 value);
void FUN_0034aac8(u8 value);
void gameGlobalsQueueValues(void *player, s32 mode);
void __aeabi_memcpy4(void *output, const void *input, u32 size);

// Apply the highlighted save profile to the player preview and global name/options.
void FUN_0041fc24(void *context)
{
    __packed struct PackedSevenValues { u32 words[3]; u16 last; };
    __packed struct Profile {
        char name[0x12]; // 0x00
        PackedSevenValues equipment; // 0x12
        u32 experience; // 0x20
        u16 hp, mp; // 0x24
        u8 unk28[8];
        PackedSevenValues maximumStats; // 0x30
        PackedSevenValues baseStats; // 0x3e
        u8 option; // 0x4c
        u8 unk4d[0x17];
        u16 id; // 0x64
        u8 unk66[4];
        u8 category; // 0x6a
        u8 unk6b[0x15];
    };
    __packed struct PlayerView {
        PackedSevenValues equipment;
        PackedSevenValues baseStats;
        PackedSevenValues maximumStats;
        u16 hp, mp;
        u8 unk2e[2];
        u32 experience;
        u8 unk34[0x18];
        char name[0x16];
        u16 id; // 0x62
    };
    struct ControllerView {
        u8 unk000[0x54];
        PlayerView *player;
        u8 unk058[0xc];
        s32 appliedSlot; // 0x64
        u8 unk068[4];
        Profile profiles[5]; // 0x6c
        s8 slotFlags[12]; // 0x2ec
        s32 selectedSlot; // 0x2f8
    };
    struct SaveNameView { u8 unk00[0x54]; char playerName[0x16]; };
    typedef char LayoutCheck[sizeof(Profile) == 0x80 && sizeof(PackedSevenValues) == 0xe &&
        offsetof(ControllerView, slotFlags) == 0x2ec && offsetof(PlayerView, id) == 0x62 ? 1 : -1];
    // Packed profile fields overlap opaque, unaligned storage in the shared save-load view.
    ControllerView *work = static_cast<ControllerView *>(context);
    s32 selection = work->selectedSlot;
    s32 applied = work->appliedSlot;
    if (selection == applied)
        return;
    work->appliedSlot = selection;
    if (work->slotFlags[selection]) {
        FUN_0023b45c(1);
        FUN_002c8538(1);
        PlayerView *player = work->player;
        const Profile *profile = &work->profiles[work->appliedSlot];
        player->equipment = profile->equipment;
        player->baseStats = profile->baseStats;
        __aeabi_memcpy4(&player->maximumStats, &profile->maximumStats, sizeof(PackedSevenValues));
        player->hp = profile->hp;
        player->mp = profile->mp;
        player->experience = profile->experience;
        libc_strcpy(player->name, profile->name);
        player->id = profile->id;
        libc_strcpy(reinterpret_cast<SaveNameView *>(gameDataBlocksGetSaveData())->playerName, profile->name);
        gameGlobalsQueueValues(work->player, 0);
        FUN_0033440c(work->profiles[work->appliedSlot].category);
        profile = &work->profiles[work->appliedSlot];
        if (profile != NULL)
            FUN_0034aac8(profile->option != 0);
        FUN_0033449c(0);
    } else {
        FUN_0023b45c(0);
        FUN_002c8538(1);
    }
}
}
