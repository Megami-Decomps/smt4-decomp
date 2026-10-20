#include "romwright_types.h"

extern "C" {

int FUN_00128588(unsigned int);
int FUN_002e6e14(unsigned int);
int deflateEnd(unsigned int);
int FUN_002fa0f4(unsigned int *);

extern unsigned char DAT_0055929c; /* 0x55929c */

/* Supplied declaration required: FUN_00128588. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: deflateEnd. */
/* Supplied declaration required: FUN_002fa0f4. */


void FUN_0010f1a0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055929c;
  FUN_00128588(param_1[0x48]);
  deflateEnd(param_1[0x48] + 0x38);
  FUN_002e6e14(param_1[0x48]);
  param_1[0x48] = 0;
  FUN_002fa0f4(param_1);
  return;
}

} /* extern "C" */
