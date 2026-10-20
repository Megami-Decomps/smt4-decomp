#include "romwright_types.h"

extern "C" {

int FUN_002ee7f2(unsigned int, unsigned char *);

extern unsigned char DAT_0053a778; /* 0x53a778 */

/* Supplied declaration required: FUN_002ee7f2. */


void FUN_002ee7c4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x211) != '\0') {
    FUN_002ee7f2(*(unsigned int *)(param_1 + 0xc),&DAT_0053a778);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  return;
}

} /* extern "C" */
