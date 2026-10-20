/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034813c` (_code @ 0x34813c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(char *);
int FUN_0020214c(void);
int FUN_003478dc(int, char *);

extern int FUN_00100d60(char *, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0020214c. */
extern int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_003478dc. */
extern int FUN_0035bcdc(int);


int FUN_0034813c(char *param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = FUN_00100d60(param_1,0x2f);
  temp_v2 = FUN_0035bcdc(temp_v1 + 1);
  if (temp_v2 != 0xff) {
    return temp_v2;
  }
  FUN_0020214c();
  if ((param_1 != (char *)0x0) && (*param_1 == 'V')) {
    temp_v0 = param_1[1];
    temp_v3 = temp_v0 == 'E';
    if (temp_v3) {
      temp_v0 = param_1[2];
    }
    if (temp_v3 && temp_v0 == 'R') {
      temp_v1 = FUN_002e4c2c(temp_v1 + 1);
      FUN_003478dc(temp_v1,param_1);
      FUN_0019a5a0(param_1);
      return temp_v1;
    }
  }
  return 0xff;
}

} /* extern "C" */
