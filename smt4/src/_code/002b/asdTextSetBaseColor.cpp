#include "common.h"
#include "util/asdTextSetBaseColor.h"

extern "C" {

void asdTextSetBaseColor(AsdText *text, u32 color)
{
    text->color = color & 0xffffff00;
}

} /* extern "C" */
