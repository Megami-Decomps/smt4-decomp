#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"

extern "C" {

/* Set the frame texture's byte value. */
void frameTexSetValue(u8 value)
{
    g_frameTex->value = value;
}

}
