/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f51bc` (_code @ 0x2f51bc, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c39a4(int);
int FUN_002c3a14(int);
int FUN_00343364(int, unsigned char [8], unsigned int, unsigned int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern unsigned int *DAT_004e3b4c; /* 0x4e3b4c */

/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_002c3a14. */
/* Supplied declaration required: FUN_00343364. */


void FUN_002f51bc(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_d1; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned long long in_d1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = *(unsigned int *)(DAT_0044ea00 + 0x528);
  temp_v3 = (unsigned int)in_d1;
  temp_v4 = (unsigned int)((unsigned long long)in_d1 >> 0x20);
  if (DAT_004e3b4c == &DAT_004e39e0) {
    temp_v1 = 0;
  }
  else if (DAT_004e3b4c == &DAT_004e3a0c) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 2;
  }
  *(unsigned int *)(DAT_0044ea00 + 0x528) = temp_v1;
  FUN_002c3a14(DAT_0044ea00);
  FUN_002c39a4(DAT_0044ea00);
  FUN_00343364(DAT_0044ea00,temp_v2,param_1,param_2);
  *(unsigned int *)(DAT_0044ea00 + 0x528) = temp_v0;
  return;
}

} /* extern "C" */
