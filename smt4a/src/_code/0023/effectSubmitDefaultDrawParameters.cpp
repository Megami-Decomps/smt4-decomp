#include "code/Code0023_Smt4a.h"
#include "common.h"

extern "C" void effectSubmitDefaultParameters(void);

// Submit the default effect parameter block.
extern "C" void effectSubmitDefaultDrawParameters(void)
{
    effectSubmitDefaultParameters();
}
