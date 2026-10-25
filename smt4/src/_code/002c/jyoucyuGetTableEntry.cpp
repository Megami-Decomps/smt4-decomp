#include "romwright_types.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {


unsigned int jyoucyuGetTableEntry(int param_1)

{
  return *(unsigned int *)(param_1 * 4 + 0x446da0);
}

} /* extern "C" */
