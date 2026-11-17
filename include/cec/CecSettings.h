#ifndef SMT4_CEC_CECSETTINGS_H
#define SMT4_CEC_CECSETTINGS_H

#include "common.h"

typedef struct CecSettings {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 level;
    /* 0x0A */ u8 id;
    /* 0x0B */ u8 extra;
} CecSettings;

#endif
