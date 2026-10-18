/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111240` (_code @ 0x111240, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00558de4; /* 0x558de4 */
extern unsigned char DAT_00559454; /* 0x559454 */

/* Supplied declaration required: FUN_002e6dd4. */
extern int FUN_002e7908(int, unsigned int *);
extern int FUN_002ed912(int);
extern int FUN_002f5928(int, unsigned int);
extern int FUN_002fd020(int);
extern int FUN_0043b028(unsigned int *);


void FUN_00111240(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558de4;
  *(unsigned char *)(param_1 + 1) = 2;
  param_1[2] = 0x10;
  *(unsigned char *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xd) = 1;
  *(unsigned char *)((int)param_1 + 0xe) = 1;
  temp_v1 = param_4;
  FUN_002e6dd4((int)param_1 + 0xf,0x29);
  *param_1 = (unsigned int)&DAT_00559454;
  temp_v0 = FUN_0043b028(param_1 + 0xe);
  temp_v0 = FUN_002fd020(temp_v0 + 0x10);
  temp_v1 = 0x10001;
  temp_v0 = FUN_002e7908(temp_v0 + 0x1008,(unsigned int *)&temp_v1);
  temp_v0 = FUN_002f5928(temp_v0 + 0xc,0x20000000);
  *(unsigned char *)(temp_v0 + 0x30) = 0;
  *(unsigned char *)(temp_v0 + 0x31) = 0;
  *(unsigned char *)(temp_v0 + 0x32) = 0;
  *(unsigned char *)(temp_v0 + 0x33) = 0;
  *(unsigned char *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0x4000;
  temp_v0 = FUN_002ed912(temp_v0 + 0x44);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned char *)(temp_v0 + 0x14) = 0;
  return;
}
