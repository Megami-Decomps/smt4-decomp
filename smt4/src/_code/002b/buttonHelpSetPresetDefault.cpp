/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void buttonHelpSetPreset(u32);

void buttonHelpSetPresetDefault(void)
{
    buttonHelpSetPreset(144);
}

}
