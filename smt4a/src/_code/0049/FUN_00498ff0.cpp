/* NON_MATCHING: sound-table snapshots use scalar copies rather than retail VFP/LDRD transfers and branch outlining differs. */
#include "shard/Shard0049.h"
#include <string.h>

struct EquipmentSoundTables {
    u8 prefix[0xB0];
    u16 other[4];
    u8 paddingB8[0x60];
    u16 normal[10];
    u16 alternate[10];
};
extern "C" const EquipmentSoundTables DAT_0053603c;

extern "C" s32 gameFlagIsSet(u32 flag);
extern "C" void sysPlaySe(s32 soundId);

extern "C" void FUN_00498ff0(EquipmentMenuState *menu)
{
    u16 sound;
    if (menu->page != 8) {
        u16 normalSounds[10];
        u16 alternateSounds[10];
        memcpy(normalSounds, DAT_0053603c.normal, sizeof(normalSounds));
        memcpy(alternateSounds, DAT_0053603c.alternate, sizeof(alternateSounds));
        if (menu->sound.mode != 1) {
            sound = normalSounds[menu->page];
            if ((menu->sound.restricted || !gameFlagIsSet(0x410)) && menu->page == 0) {
                sound = 0x7A;
            }
        } else {
            sound = alternateSounds[menu->page];
            if (menu->sound.restricted || !gameFlagIsSet(0x410)) {
                if (menu->page == 0) {
                    sound = 0x88;
                } else if (menu->page == 3) {
                    sound = 0x89;
                }
            }
        }
    } else {
        u16 otherSounds[4];
        memcpy(otherSounds, DAT_0053603c.other, sizeof(otherSounds));
        sound = otherSounds[menu->selection.index];
    }
    sysPlaySe(sound);
}
