/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7324` (_code @ 0x2a7324, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021af2c(void);
int FUN_002f0420(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0021af2c. */
/* Supplied declaration required: FUN_002f0420. */


void FUN_002a7324(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_00588fd4;
  if (*(int *)(DAT_00588fd4 + 0x1368) == 3 || *(int *)(DAT_00588fd4 + 0x1368) == 4) {
    return;
  }
  if (param_1 != 0) {
    *(unsigned char *)(DAT_00588fd4 + 0x2011) = 0;
    temp_v2 = *(int *)(temp_v1 + 0x1368);
    if ((temp_v2 == 5 || temp_v2 == 6) || temp_v2 == 7) {
      *(unsigned int *)(temp_v1 + 0x136c) = 5;
    }
    if ((temp_v2 != 5 && temp_v2 != 6) && temp_v2 != 7) {
      *(unsigned int *)(temp_v1 + 0x1368) = 5;
      *(unsigned int *)(temp_v1 + 0x136c) = 9;
    }
  }
  else {
    temp_v0 = *(char *)(DAT_00588fd4 + 0x2017);
    if (((temp_v0 == '\t') || (temp_v0 == '\n' || temp_v0 == '\v')) || (temp_v0 == '\f' || temp_v0 == '\b')) {
      *(unsigned int *)(DAT_00588fd4 + 0x1378) = 1;
      FUN_0021af2c();
    }
  }
  temp_v0 = *(char *)(temp_v1 + 0x2018);
  if ((temp_v0 != '\x05' && temp_v0 != '\x06') && (temp_v0 != '\a' && temp_v0 != '\f')) {
    FUN_002f0420((int)*(char *)(temp_v1 + 0x2013));
    return;
  }
  FUN_002f0420(0);
  return;
}

} /* extern "C" */
