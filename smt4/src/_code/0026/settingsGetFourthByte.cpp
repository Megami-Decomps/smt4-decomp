#include "common.h"

extern "C" {

struct Settings {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ s8 option;
};
extern Settings g_byteSettings;

/* Read the fourth settings byte as a signed value. */
s8 settingsGetFourthByte(void)
{
    return g_byteSettings.option;
}

}
