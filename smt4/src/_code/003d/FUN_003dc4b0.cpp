/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc4b0` (_code @ 0x3dc4b0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024679c(void);
int FUN_00249e54(unsigned int, char *);

/* Supplied declaration required: FUN_0024679c. */
/* Supplied declaration required: FUN_00249e54. */
extern unsigned int FUN_0024a6b0(int);


unsigned int FUN_003dc4b0(int param_1)

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
    temp_v1 = FUN_0024a6b0(param_1 + 0x2fa4);
    *(char *)(param_1 + 0x2f9c) = (char)temp_v1;
    FUN_00249e54(temp_v1,pcVar3);
    *(char *)(param_1 + 0x2f9c) = (char)temp_v1;
  }
  FUN_0024679c();
  return 1;
}

} /* extern "C" */
