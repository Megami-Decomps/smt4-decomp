#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {

/* Sets a sprite's RGB color, clearing its low byte. */
void uiObjectSetColorRgb(u32 handle, u32 color)
{
    ((AsdText *)handle)->color = color & 0xFFFFFF00;
}

} /* extern "C" */
