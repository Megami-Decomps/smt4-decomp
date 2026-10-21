/* NON_MATCHING: retail uses `add r1, r4, #12288` where armcc emits `add r0, r4, #12288`. */
#include "common.h"

extern "C" {

struct Object { u8 unk0000[0x3da0]; u32 words[3]; u8 unk3dac[0xaa4]; u32 state; u8 unk4854[2]; u8 active; };
void wordTripleClear(u32 *words);

void uiObjectClearRequestState(Object *object)
{
    object->state = 0;
    wordTripleClear(object->words);
    object->active = 0;
}

} /* extern "C" */
