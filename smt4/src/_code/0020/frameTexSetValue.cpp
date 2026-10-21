#include "common.h"

extern "C" {

struct FrameTexture {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 value;
};
extern FrameTexture *g_frameTex;

/* Set the frame texture's byte value. */
void frameTexSetValue(u8 value)
{
    g_frameTex->value = value;
}

}
