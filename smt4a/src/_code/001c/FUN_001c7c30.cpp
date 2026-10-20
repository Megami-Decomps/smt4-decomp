/* Sets the mono-filter flag on the voice body and marks it for update (bit 2). */
#include "common.h"

extern "C" {

typedef struct VoiceBody {
    /* 0x00 */ u8 unk00[0x0f];
    /* 0x0F */ u8 monoFilter;
    /* 0x10 */ u8 unk10[0x5c];
    /* 0x6C */ u16 updateFlags;
} VoiceBody;

void FUN_001c7c30(VoiceBody *body, u8 enable)
{
    body->monoFilter = enable;
    body->updateFlags |= 4;
}

}
