/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2534` (_code @ 0x2c2534, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c2588) overlaps instruction at (ram,0x002c2586)
    */
/* WARNING: Removing unreachable block (ram,0x002c33e8) */

void FUN_002c2534(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 14 native warning(s); review required */
  int temp_v0;
  unsigned short unaff_r5;
  unsigned int in_cr0;
  unsigned int in_cr12;
  float in_s0;
  float in_s1;
  float in_s2;
  float temp_v1;
  float temp_v2;
  float in_s3;
  float in_s4;
  float in_s5;
  
  temp_v0 = DAT_004c63b4;
  if (param_1 == 0x8057) {
    *(int *)((int)(&DAT_004c6290 + DAT_004c63b4) * 2) = DAT_004c63b4;
    do {
      in_s1 = in_s1 - in_s1 * in_s3;
      temp_v0 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
      coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
      if (in_s2 < in_s5) {
        in_s2 = in_s1;
      }
      VectorFloatToUnsigned(in_s3 + in_s2 * in_s4,3);
      temp_v1 = *(float *)(temp_v0 + 8);
      temp_v2 = in_s0;
      if ((temp_v1 <= in_s0) && (temp_v2 = temp_v1, temp_v1 < in_s1)) {
        temp_v2 = in_s1;
      }
      in_s5 = in_s3 + temp_v2 * in_s4;
      VectorFloatToUnsigned(in_s5,3);
      in_s2 = *(float *)(temp_v0 + 0xc);
      if ((in_s2 <= in_s0) && (in_s2 < in_s1)) {
        in_s0 = in_s1;
      }
    } while( 1 );
  }
  if (param_1 < 0x8057) {
    param_1 = param_1 - 0x8051;
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 != 5) {
      *(short *)(param_4 + 0x3e) = (short)param_1;
      *(unsigned short *)(temp_v0 + 2) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
