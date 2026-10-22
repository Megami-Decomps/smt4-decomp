#include "common.h"

extern "C" {

extern u8 DAT_004efca0;

u8 *libcLocaleGetTables(void)
{
    return &DAT_004efca0;
}

} /* extern "C" */
