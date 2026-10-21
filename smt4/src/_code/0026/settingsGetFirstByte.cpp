#include "common.h"

extern "C" {

extern s8 g_byteSettings;

/* Read the first settings byte as a signed value. */
s8 settingsGetFirstByte(void)
{
    return g_byteSettings;
}

}
