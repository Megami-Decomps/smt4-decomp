#ifndef UI_LABELS_H
#define UI_LABELS_H

#include "common.h"

/* One of the four text labels of the requested-state record. */
struct Label {
    /* 0x0 */ u16 value;
    /* 0x2 */ u16 text;
};

struct Labels {
    /* 0x00 */ Label entries[4];
    /* 0x10 */ u8 flag;
};

#endif
