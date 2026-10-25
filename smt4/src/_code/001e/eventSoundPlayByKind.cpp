#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {


/* Plays the sound for a kind of event; kinds in a group share a base id and the index picks one of three variants. */
void eventSoundPlayByKind(u32 kind, s32 index, SoundActorQueuePosition position)
{
    s32 sound = 0;

    switch (kind) {
    case 0:
    case 1:
    case 11:
        sound = index + 0x1000242;
        break;
    case 2:
    case 12:
        sound = index + 0x1000245;
        break;
    case 3:
    case 13:
        sound = index + 0x1000248;
        break;
    case 4:
    case 6:
    case 14:
    case 16:
        sound = index + 0x100024b;
        break;
    case 5:
    case 15:
        sound = index + 0x100024e;
        break;
    case 7:
    case 9:
    case 17:
    case 19:
        sound = index + 0x1000251;
        break;
    case 8:
    case 18:
        sound = index + 0x1000254;
        break;
    case 10:
    case 20:
        sound = index + 0x1000257;
        break;
    }
    FUN_00291e40(sound, position);
}

} /* extern "C" */
