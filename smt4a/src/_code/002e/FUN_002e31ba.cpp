/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e31ba` (_code @ 0x2e31ba, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3d6c(unsigned char [4], unsigned int);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_4_stack;

extern unsigned char LAB_002e31b1; /* 0x2e31b1 */

/* Supplied declaration required: FUN_002e3d6c. */


void FUN_002e31ba(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v5 = 0;
  temp_v3 = &LAB_002e31b1;
  temp_v1 = param_4;
  temp_v2 = param_2;
  temp_v4 = param_1;
  FUN_002e3d6c(temp_v0,param_3);
  return;
}

} /* extern "C" */
