#include "shard/Shard0049.h"
#include <string.h>

/* Sound ids copied out of the shared table as whole words. */
struct SoundIds4 {
    union { u16 id[4]; u32 word[2]; };
};
struct SoundIds10 {
    union { u16 id[10]; u32 word[5]; };
};

struct EquipmentSoundTables {
    u8 prefix[0xB0];
    SoundIds4 other;
    u8 paddingB8[0x60];
    SoundIds10 normal;
    SoundIds10 alternate;
};
extern "C" const EquipmentSoundTables g_equipMenuStateHandlerInit;

extern "C" s32 gameFlagIsSet(u32 flag);
extern "C" void sysPlaySe(s32 soundId);

extern "C" void FUN_00498ff0(EquipmentMenuState *menu)
{
    u16 sound;
    if (menu->page == 8) {
        SoundIds4 otherSounds = g_equipMenuStateHandlerInit.other;
        sound = otherSounds.id[menu->selection.index];
    } else {
        SoundIds10 normalSounds = g_equipMenuStateHandlerInit.normal;
        SoundIds10 alternateSounds = g_equipMenuStateHandlerInit.alternate;
        if (menu->sound.mode == 1) {
            sound = alternateSounds.id[menu->page];
            if (menu->sound.restricted || !gameFlagIsSet(0x410)) {
                if (menu->page == 0) {
                    sound = 0x88;
                } else if (menu->page == 3) {
                    sound = 0x89;
                }
            }
        } else {
            sound = normalSounds.id[menu->page];
            if ((menu->sound.restricted || !gameFlagIsSet(0x410)) && menu->page == 0) {
                sound = 0x7A;
            }
        }
    }
    sysPlaySe(sound);
}
