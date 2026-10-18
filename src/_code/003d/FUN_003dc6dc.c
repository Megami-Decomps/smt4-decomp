/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc6dc` (_code @ 0x3dc6dc, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00246908. */
/* Supplied declaration required: FUN_00249fac. */
extern unsigned int FUN_0024a80c(int);


unsigned int FUN_003dc6dc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  pcVar3 = *(char **)(param_1 + 0x2fa0);
  temp_v0 = *pcVar3;
  temp_v2 = temp_v0 == 'V';
  if (temp_v2) {
    temp_v0 = pcVar3[1];
  }
  temp_v3 = temp_v2 && temp_v0 == 'E';
  if (temp_v2 && temp_v0 == 'E') {
    temp_v3 = pcVar3[2] == 'R';
  }
  if (temp_v3) {
    temp_v1 = FUN_0024a80c(param_1 + 0x2fa4);
    *(char *)(param_1 + 0x2f9c) = (char)temp_v1;
    FUN_00249fac(temp_v1,pcVar3);
    *(char *)(param_1 + 0x2f9c) = (char)temp_v1;
  }
  FUN_00246908();
  return 1;
}
