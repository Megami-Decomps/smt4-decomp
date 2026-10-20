/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f94b8` (_code @ 0x4f94b8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003478dc(unsigned int, char *);
int FUN_003afd30(void);

extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_003478dc. */
/* Supplied declaration required: FUN_003afd30. */


unsigned int FUN_004f94b8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  pcVar3 = *(char **)(param_1 + 0x3058);
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
    temp_v1 = FUN_002e4c2c(param_1 + 0x305c);
    *(char *)(param_1 + 0x3054) = (char)temp_v1;
    FUN_003478dc(temp_v1,pcVar3);
    *(char *)(param_1 + 0x3054) = (char)temp_v1;
  }
  FUN_003afd30();
  return 1;
}

} /* extern "C" */
