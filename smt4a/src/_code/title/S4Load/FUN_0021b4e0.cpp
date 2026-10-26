/* NON_MATCHING: instruction-identical to retail (131 rows) except the stack frame: ours reserves 576 bytes against retail's 568 once the hours/minutes/remainder locals exist (armcc keeps slots for them although they sit in r5/r6). */
#include "title/S4Load.h"
#include "saveLoadUI/saveLoadUI.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/AsdMemCopy.h"
#include "code/Code0035.h"

struct LoadProfileLabels { const char *text[4]; };
extern "C" {
void rt_aeabi_memclr(void *memory, u32 size);
extern S4Load *g_s4Load;
extern const LoadProfileLabels DAT_00536bdc;
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
    RelativeDirectory *directory, u32 entry);

void FUN_0021b4e0(s32 selected)
{
    struct LoadProfile {
        char name[0x12];
        u8 unk12[0x3a];
        u8 enabled;
        u8 markers;
        u8 unk4e[2];
        u32 playSeconds;
        u8 unk54[0x12];
        u16 location;
        u8 unk68[0x18];
    };
    struct LoadProfileView {
        S4Load base;
        LoadProfile profiles[5];
    };
    typedef char LoadProfileLayoutCheck[sizeof(LoadProfile) == 0x80 ? 1 : -1];
    struct SlotPresenceView { u8 prefix[0xa4]; u8 available[5]; };
    // Slot presence and profile tails are views rather than growing S4Load's public prefix.
    S4Load *work = g_s4Load;
    // Retail clears a 512-byte stack buffer on entry that nothing reads (a stripped debug-text buffer).
    u8 scratch[512];
    rt_aeabi_memclr(scratch, sizeof(scratch));
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
        const LoadProfileView *view = reinterpret_cast<const LoadProfileView *>(work);
        char name[24];
        FUN_002e59f8(view->profiles[selected].name, name, 0x12);
        FUN_003180c4(1, name);
        FUN_00359974(2, view->profiles[selected].enabled, -1, 0); // This profile byte is the displayed level.
        u32 seconds = view->profiles[selected].playSeconds;
        u32 hours = seconds / 3600;
        u32 minutes = (seconds / 60) % 60;
        u32 remainder = seconds % 60;
        FUN_00359974(3, hours, 2, 1);
        FUN_00359974(4, minutes, 2, 1);
        FUN_00359974(5, remainder, 2, 1);
        FUN_00359974(6, view->profiles[selected].location, -1, 0);
        LoadProfileLabels labels = DAT_00536bdc;
        u8 markers = view->profiles[selected].markers;
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
