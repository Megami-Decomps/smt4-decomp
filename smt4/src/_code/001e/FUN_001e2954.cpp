#include "common.h"

extern "C" {

extern int spriteTemplateGetPreferredDevilId(void);
extern u8 DAT_00447620[];

u8 FUN_001e2954(void)
{
    int index = spriteTemplateGetPreferredDevilId();

    return DAT_00447620[index];
}

} /* extern "C" */
