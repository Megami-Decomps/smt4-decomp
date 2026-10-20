/* Sets the current object's four setting bytes from the raw values (mode, level, id, extra). */
#include "common.h"

extern "C" {

typedef struct Settings {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 level;
    /* 0x0A */ u8 id;
    /* 0x0B */ u8 extra;
} Settings;

typedef struct SettingsHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Settings *settings;
} SettingsHolder;

extern SettingsHolder g_asdCec;

void cecSettingsSet(s32 mode, s32 level, s32 id, s32 extra)
{
    Settings *settings = g_asdCec.settings;

    if (settings == NULL) {
        return;
    }
    switch (mode) {
    case 2:
        settings->mode = 3;
        break;
    case 1:
        settings->mode = 1;
        break;
    case 0:
        settings->mode = 2;
        break;
    }
    switch (level) {
    case 0:
        settings->level = 1;
        break;
    case 1:
        settings->level = 2;
        break;
    case 2:
        settings->level = 3;
        break;
    case 3:
        settings->level = 0;
        break;
    }
    if (id == 0xFF) {
        settings->id = 0xFF;
    } else {
        settings->id = id;
    }
    if (extra == 0) {
        settings->extra = 1;
    } else {
        settings->extra = extra + 1;
    }
}

}
