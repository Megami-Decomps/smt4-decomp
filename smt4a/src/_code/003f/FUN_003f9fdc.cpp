#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int FUN_002e3328(unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_003f9fdc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
  asdMemFree(param_1[0xf]);
  asdMemFree(param_1[0x10]);
  asdMemFree(param_1[0x11]);
  FUN_002e3328(param_1);
  return;
}

} /* extern "C" */
