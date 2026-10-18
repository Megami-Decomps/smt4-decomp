/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf4e0` (_code @ 0x2cf4e0, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0020fe24. */
/* Supplied declaration required: FUN_00296d8c. */
extern int FUN_0029af30(void);
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002b49d8. */
extern unsigned int FUN_002b787c(unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_00389294(unsigned int, int);


void FUN_002cf4e0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0044e190;
  if (((*(short *)(DAT_0044e190 + 0x47e) < 0) && (-1 < param_1)) &&
     (*(char *)(DAT_0044e190 + 0x3fc) == '\x01')) {
    temp_v1 = FUN_0029af30();
    if (temp_v1 == 0xd || temp_v1 == 6) {
      temp_v2 = 0x31;
    }
    else if ((!(temp_v1 == 8 || temp_v1 == 9)) && (!(temp_v1 == 0xb || temp_v1 == 7))) {
      if (temp_v1 == 2) {
        temp_v2 = 0x27;
      }
      else {
        temp_v2 = 0x2b;
      }
    }
    else {
      temp_v2 = 0x60;
    }
    FUN_002b8b78(temp_v2);
  }
  *(short *)(temp_v0 + 0x47e) = (short)param_1;
  if (param_1 < 0) {
    temp_v2 = FUN_002b49d8(0x40);
    FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x22a0),3,0xffffffff,0,3,temp_v2,0);
  }
  else {
    temp_v1 = FUN_00389294(DAT_00433158,param_1);
    if (temp_v1 == 0) {
      temp_v1 = FUN_002b49d8();
    }
    FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x22a0),3,0xffffffff,0,3,temp_v1,param_1);
  }
  temp_v2 = FUN_002b787c(*(unsigned int *)(temp_v0 + 0x22a0));
  FUN_0029fae8(temp_v0 + 0x22a8,temp_v2,8,1,0,1);
  FUN_0020fe24(temp_v0 + 0x22a8,0);
  *(unsigned char *)(temp_v0 + 0x410) = 1;
  return;
}
