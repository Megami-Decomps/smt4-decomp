/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2890` (_code @ 0x2c2890, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012316c(unsigned int, unsigned int);
int FUN_001233d4(unsigned int, unsigned int *);
int FUN_00123508(unsigned char *);
int FUN_00123520(int, int);
int FUN_00123560(void);
int FUN_002bef70(unsigned int);
int FUN_002c2428(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_001192c4; /* 0x1192c4 */
extern int DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: FUN_0012316c. */
/* Supplied declaration required: FUN_001233d4. */
/* Supplied declaration required: FUN_00123508. */
/* Supplied declaration required: FUN_00123520. */
/* Supplied declaration required: FUN_00123560. */
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002c2428. */


/* WARNING: Removing unreachable block (ram,0x001233b8) */

void FUN_002c2890(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[5] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  temp_v0 = 0;
  if (param_2 != 0) {
    do {
      param_1[temp_v0] = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  FUN_001233d4(param_1[2],param_1);
  temp_v0 = 0;
  if (temp_v0 < (unsigned int)param_1[2]) {
    do {
      FUN_002bef70(param_1[temp_v0]);
      FUN_0012316c(param_1[3],param_1[4]);
      FUN_00123520(0x200,0x300);
      FUN_002c2428();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  FUN_002bef70(*param_1);
  FUN_00123560();
  FUN_00123508(&LAB_001192c4);
  if (DAT_004c632c != 0) {
    *(unsigned char *)(DAT_004c632c + 0x3c) = 1;
  }
  return;
}

} /* extern "C" */
