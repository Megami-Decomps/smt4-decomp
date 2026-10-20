#include "romwright_types.h"

extern "C" {

int FUN_00152bec(unsigned int);

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00152bec. */


void FUN_002e8ba0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  FUN_00152bec(*(unsigned int *)(DAT_00447a78 + 0xcbec));
  *(unsigned char *)(temp_v0 + 0xccd8) = 0;
  *(unsigned int *)(temp_v0 + 0xccdc) = 0;
  return;
}

} /* extern "C" */
