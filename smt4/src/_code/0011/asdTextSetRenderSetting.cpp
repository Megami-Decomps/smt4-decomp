#include "common.h"

struct RendererSettings {
    /* 0x00 */ u8 padding[0x14];
    /* 0x14 */ u32 textSetting;
};

extern "C" {

extern RendererSettings g_textRendererSettings;

/* Sets the renderer's text setting. */
void asdTextSetRenderSetting(u32 value)
{
    g_textRendererSettings.textSetting = value;
}

} /* extern "C" */
