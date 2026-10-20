/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f001c` (_code @ 0x2f001c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00203b40(int, int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_002c7e3c(void);
extern int fieldStateAllowsAction(void);


void FUN_002f001c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00588fe8;
  if ((-1 < *(short *)(DAT_00588fe8 + 0x598)) && (*(char *)(DAT_00588fe8 + 0x514) == '\x01')) {
    temp_v1 = FUN_002c7e3c();
    if ((temp_v1 != 0xe) && (temp_v1 != 7)) {
      temp_v1 = fieldStateAllowsAction();
      if (temp_v1 != 0) {
        temp_v2 = 0xf9;
        sysPlaySe(temp_v2);
      }
      else {
        sysPlaySe(0x1f);
      }
    }
    else {
      temp_v2 = 0x31;
      sysPlaySe(temp_v2);
    }
  }
  *(unsigned short *)(temp_v0 + 0x598) = 0xffff;
  *(unsigned int *)(temp_v0 + 0x66c) = *param_1;
  *(unsigned int *)(temp_v0 + 0x670) = param_1[1];
  *(unsigned int *)(temp_v0 + 0x674) = param_1[2];
  *(unsigned short *)(temp_v0 + 0x678) = *(unsigned short *)(param_1 + 3);
  FUN_00203b40(temp_v0 + 0x67c,7,7,1,0,1);
  *(unsigned char *)(temp_v0 + 0x528) = 1;
  return;
}

} /* extern "C" */
