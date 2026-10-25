/* NON_MATCHING: retail clears an otherwise unused 512-byte stack buffer; profile addressing and time-division scheduling also differ. */
#include "title/S4Load.h"
#include "saveLoadUI/saveLoadUI.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/AsdMemCopy.h"

struct LoadProfileLabels { const char *text[4]; };
extern "C" {
extern S4Load *g_s4Load;
extern const LoadProfileLabels DAT_00536bdc;
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
    RelativeDirectory *directory, u32 entry);
void FUN_00359974(s32 slot, u32 value, s32 digits, s32 leadingZero);

void FUN_0021b4e0(s32 selected)
{
    struct LoadProfileView {
        S4Load base;
        SavePreviewSlot profiles[5];
    };
    struct SlotPresenceView { u8 prefix[0xa4]; u8 available[5]; };
    struct ProfileDetailsView {
        u8 prefix[0x4d];
        u8 markers;
        u8 unk4e[2];
        u32 playSeconds;
        u8 unk54[0x12];
        u16 location;
    };
    // Slot presence and profile tails are views rather than growing S4Load's public prefix.
    S4Load *work = g_s4Load;
    if (work != NULL && selected >= 0) {
        if (selected == 0)
            FUN_00359974(0, 1, -1, 0);
        else
            FUN_00359974(0, 2, -1, 0);
        const SlotPresenceView *presence = reinterpret_cast<const SlotPresenceView *>(work);
        if (!presence->available[selected]) {
            asdTextDrawDirectoryEntry(reinterpret_cast<AsdText *>(work->unk2B8), 4, -1, 0,
                3, static_cast<RelativeDirectory *>(work->dataB), 0x65);
            return;
        }
        const SavePreviewSlot *profile = &reinterpret_cast<const LoadProfileView *>(work)->profiles[selected];
        const ProfileDetailsView *details = reinterpret_cast<const ProfileDetailsView *>(profile);
        char name[24];
        FUN_002e59f8(profile->name, name, 0x12);
        FUN_003180c4(1, name);
        FUN_00359974(2, profile->enabled, -1, 0); // This profile byte is the displayed level.
        u32 seconds = details->playSeconds;
        FUN_00359974(3, seconds / 3600, 2, 1);
        FUN_00359974(4, (seconds / 60) % 60, 2, 1);
        FUN_00359974(5, seconds % 60, 2, 1);
        FUN_00359974(6, details->location, -1, 0);
        LoadProfileLabels labels = DAT_00536bdc;
        u8 markers = details->markers;
        s32 shown = 0;
        for (s32 index = 0; index < 4; ++index) {
            if (markers & (1u << index)) {
                FUN_003180c4(shown + 7, labels.text[index]);
                ++shown;
            }
        }
        for (s32 index = shown; index < 4; ++index)
            FUN_003180c4(shown + 7, "");
        asdTextDrawDirectoryEntry(reinterpret_cast<AsdText *>(work->unk2B8), 4, -1, 0,
            3, static_cast<RelativeDirectory *>(work->dataB), 100);
    }
}
}
