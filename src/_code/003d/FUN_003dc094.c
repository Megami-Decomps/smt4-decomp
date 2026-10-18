/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc094` (_code @ 0x3dc094, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00246908. */
/* Supplied declaration required: FUN_00249fac. */
extern unsigned int FUN_0024a80c(int);


unsigned int FUN_003dc094(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  do {
    temp_v1 = param_1 + temp_v3 * 0x8c;
    pcVar5 = *(char **)(temp_v1 + 0x2ce0);
    temp_v0 = *pcVar5;
    temp_v4 = temp_v0 == 'V';
    if (temp_v4) {
      temp_v0 = pcVar5[1];
    }
    temp_v5 = temp_v4 && temp_v0 == 'E';
    if (temp_v4 && temp_v0 == 'E') {
      temp_v5 = pcVar5[2] == 'R';
    }
    if (temp_v5) {
      temp_v2 = FUN_0024a80c(temp_v1 + 0x2ce4);
      *(char *)(temp_v1 + 0x2cdc) = (char)temp_v2;
      FUN_00249fac(temp_v2,pcVar5);
      *(char *)(temp_v1 + 0x2cdc) = (char)temp_v2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 5);
  FUN_00246908();
  return 1;
}
