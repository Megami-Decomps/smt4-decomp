#include "common.h"

extern "C" {

int buttonHelpSetPresetDefault(void);

u32 scrCommButtonHelpSetPresetDefault(void)
{
    buttonHelpSetPresetDefault();
    return 1;
}

} /* extern "C" */
