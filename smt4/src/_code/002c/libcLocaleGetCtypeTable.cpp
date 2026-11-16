/* NON_MATCHING: retail uses the flag-setting `adds r0, r0, #4`; the compiler emits a plain add here. */
#include "common.h"

extern "C" {

u8 *libcLocaleGetTables(void);

/* Returns libcLocaleGetTables() advanced by 4 bytes. */
u8 *libcLocaleGetCtypeTable(void)
{
    return libcLocaleGetTables() + 4;
}

} /* extern "C" */
