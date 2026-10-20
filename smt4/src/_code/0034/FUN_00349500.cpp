#include "common.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(void *handle);

typedef struct HandlePair {
    /* 0x0 */ u8 first[4];
    /* 0x4 */ u8 second[4];
} HandlePair;

HandlePair *FUN_00349500(HandlePair *pair)
{
    nw_snd_SoundHandle_DetachSound(pair->second);
    nw_snd_SoundHandle_DetachSound(pair->first);
    return pair;
}

} /* extern "C" */
