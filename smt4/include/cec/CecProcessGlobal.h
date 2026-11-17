#ifndef SMT4_CEC_CECPROCESSGLOBAL_H
#define SMT4_CEC_CECPROCESSGLOBAL_H

#include "cec/CecProcess.h"

extern "C" {
/* The StreetPass process (NULL when StreetPass is not running). */
extern CecProcess *g_cecProcess;
}

#endif
