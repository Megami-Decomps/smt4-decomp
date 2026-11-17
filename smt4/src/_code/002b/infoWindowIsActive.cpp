#include "font/InfoWin.h"
#include "code/Code002b_Smt4.h"

extern "C" {



u8 infoWindowIsActive(void)
{
    return g_infoWin->state != 0;
}

} /* extern "C" */
