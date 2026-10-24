/* NON_MATCHING: only the operand order of the bounds compare (retail cmp index, count; bcs) and the load order of the voice array differ */
/* Sets voice `index` to state 0 (under the sound lock). */
#include "common.h"

extern "C" {
/* One sound voice (0x70 bytes); the first word is the driver voice handle. */
struct Voice {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 unk04[0x6C];
};

/* The voice table: a pointer to the voices and their count. */
struct VoiceTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Voice *voices;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u32 count;
};

extern VoiceTable DAT_0044d0f8;
extern u8 DAT_004c40f8;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);

void FUN_00126eb0(u32 index)
{
    if ((s32)index < 0 || DAT_0044d0f8.count <= index) {
        return;
    }
    nn_os_CriticalSection_Enter(&DAT_004c40f8);
    nn_snd_CTR_Voice_SetState(DAT_0044d0f8.voices[index].handle, 0);
    nn_os_CriticalSection_Leave(&DAT_004c40f8);
}
}
