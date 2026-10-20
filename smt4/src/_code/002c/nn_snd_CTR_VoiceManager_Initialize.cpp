/* Clears the voice manager's header fields and initializes the object that follows them (a tail call). */
#include "common.h"

extern "C" {

struct VoiceManager {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u16 unk0c;
    /* 0x0e */ u8 unk0e;
    /* 0x0f */ u8 unk0f;
    /* 0x10 */ u8 voices[1];
};

void nn_os_CriticalSection_Initialize(void *voices);

void nn_snd_CTR_VoiceManager_Initialize(VoiceManager *manager)
{
    manager->unk04 = 0;
    manager->unk08 = 0;
    manager->unk00 = 0;
    manager->unk0c = 0;
    manager->unk0e = 0;
    nn_os_CriticalSection_Initialize(manager->voices);
}

}
