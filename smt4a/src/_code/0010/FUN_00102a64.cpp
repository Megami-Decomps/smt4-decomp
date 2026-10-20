#include "romwright_types.h"

extern "C" {

int FUN_00102ccc(void);

/* Supplied declaration required: FUN_00102ccc. */


void FUN_00102a64(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00102ccc();
  return;
}

} /* extern "C" */
