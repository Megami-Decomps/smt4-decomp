#include "romwright_types.h"

extern "C" {

int streamWriterPatchSizePrefix(void);

/* Supplied declaration required: streamWriterPatchSizePrefix. */


unsigned int FUN_002ee9ce(int param_1)

{
/* irregular: 1 native warning(s); review required */
  streamWriterPatchSizePrefix();
  return *(unsigned int *)(param_1 + 8);
}

} /* extern "C" */
