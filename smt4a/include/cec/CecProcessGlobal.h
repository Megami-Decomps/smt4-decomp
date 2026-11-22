#ifndef SMT4A_CEC_CECPROCESSGLOBAL_H
#define SMT4A_CEC_CECPROCESSGLOBAL_H

#include "cec/CecProcess.h"
#include "classes/Obj557ec0.h"

extern "C" {
/* The StreetPass process (NULL when StreetPass is not running). */
extern CecProcessA *g_cecProcess;

/* Asks the StreetPass process whether its optional step can run (0 while there is no process). */
u32 cecQueryOptionalProcess(void);
}

#endif
