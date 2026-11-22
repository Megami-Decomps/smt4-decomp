#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {


/* Plays the sound for a kind of event at `position` (two kinds share each group of three sounds) and a variant index. */
void eventSoundPlayByKind(u32 kind, s32 index, SoundActorQueuePosition position)
{
    s32 message = 0;

    switch (kind) {
    case 0:
    case 1:
    case 11:
        message = 0x10002ee + index;
        break;
    case 2:
    case 12:
        message = 0x10002f1 + index;
        break;
    case 3:
    case 13:
        message = 0x10002f4 + index;
        break;
    case 4:
    case 6:
    case 14:
    case 16:
        message = 0x10002f7 + index;
        break;
    case 5:
    case 15:
        message = 0x10002fa + index;
        break;
    case 7:
    case 9:
    case 17:
    case 19:
        message = 0x10002fd + index;
        break;
    case 8:
    case 18:
        message = 0x1000300 + index;
        break;
    case 10:
    case 20:
        message = 0x1000303 + index;
        break;
    }
    soundActorStartOnFreeChannel(message, position);
}

} /* extern "C" */
