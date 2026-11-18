#ifndef STATUS_STATUSFLAGLABELS_H
#define STATUS_STATUSFLAGLABELS_H

#include "text/TextDraw.h"

/* Draws either line of the category/description label relative to its fixed origin. */
static inline void drawFlagLabelLine(const char *text, u32 lineOffset)
{
    textDrawDefaultString(text, 228.0f, 42.0f + static_cast<f32>(lineOffset));
}

#endif
