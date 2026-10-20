/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c94c` (_code @ 0x29c94c, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024bc98(int *, unsigned int);
int FUN_0024bda8(int *, unsigned int);
int FUN_00283e48(void);
int FUN_00295660(int, int *);
int FUN_00296ae8(unsigned int, int, unsigned int, int);
int FUN_002ae164(void);
int FUN_002be624(int *, unsigned char *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char LAB_0029ca4c; /* 0x29ca4c */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_002ae1d8(int);
extern unsigned int FUN_002b47ec(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_0029c94c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_74;
  int temp_v4;
  
  temp_v0 = DAT_0043da2c;
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
    *(unsigned char *)(temp_v0 + 0x4cb) = 1;
    temp_v1 = FUN_002b47ec();
    temp_v2 = FUN_002ae1d8(param_1);
    if (temp_v2 != 0) {
      temp_v2 = param_1;
      FUN_00283e48();
      FUN_0024bda8(&temp_v3,(*(unsigned int *)(temp_v2 + 0x38) & 0xffff) >> 0xb);
      FUN_00295660(0x24,&temp_v3);
      FUN_002be624(&temp_v3,&LAB_0029ca4c);
      FUN_00295660(0x25,&temp_v3);
    }
    else {
      temp_v2 = param_1;
      FUN_002ae164();
      FUN_0024bda8(&temp_v3,(*(unsigned int *)(temp_v2 + 0x28) & 0x1ffff) >> 0xc);
      FUN_00295660(0x24,&temp_v3);
      FUN_0024bc98(&temp_v3,(*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5);
      FUN_00295660(0x25,&temp_v3);
    }
    temp_v3 = 3;
    uStack_74 = temp_v1;
    temp_v4 = param_1;
    FUN_00296ae8(*(unsigned int *)(temp_v0 + 0x558),3,0xffffffff,0);
  }
  return;
}

} /* extern "C" */
