#include "common.h"

// The copied worker argument is a borrowed pointer and owns no resources.
extern "C" void fileWorkerDestroyArgument(void *argument)
{
}
