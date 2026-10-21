#include "shard/W6_W6Match7_FontResource.h"

extern "C" void nw_font_ResFontSetResourceBuffer(NwResFontBase* font, NwFontFileHeader* file,
                            NwFontInfo* info)
{
    font->resourceView.resource = file;
    font->fontInfo = info;
}
