/* NON_MATCHING: retail uses the flag-setting `adds r0, r0, #4`; the compiler emits a plain add here. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {


/* Returns rt_locale() advanced by 4 bytes. */
u8 *rt_ctype_table(void)
{
    return rt_locale() + 4;
}

} /* extern "C" */
