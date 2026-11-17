#ifndef SMT4_TERMINAL_TERMINALGLOBALS_H
#define SMT4_TERMINAL_TERMINALGLOBALS_H

#include "common.h"
#include "Terminal/tmnlMain.h"

struct TerminalGlobals {
    /* 0x00 */ TmnlWork *work;
    /* 0x04 */ s32 selection;
};

#endif
