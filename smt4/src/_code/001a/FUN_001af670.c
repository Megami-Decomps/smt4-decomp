/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af670` (_code @ 0x1af670, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002240b4(unsigned int);
extern unsigned int FUN_00288634(unsigned int);
extern unsigned int FUN_00288674(unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_001af670(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00288674(param_2);
  if (param_5 != 0) {
    FUN_002bf380(2,0x24,0x10,param_3,param_4,0x65);
    FUN_002bf288(2,0x24,0x95,param_3,param_4,0x6a);
    temp_v1 = FUN_002240b4(temp_v0);
    if (temp_v1 != 0) {
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x97,param_3,param_4,0x6d);
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x91,param_3,param_4,0x6f);
    }
    else {
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x96,param_3,param_4,0x6f);
      FUN_002bf538();
    }
    temp_v0 = 0xffffffff;
  }
  else {
    FUN_002bf380(2,0x24,0xf,param_3,param_4,0x65);
    FUN_002bf288(2,0x24,0x90,param_3,param_4,0x6a);
    temp_v1 = FUN_002240b4(temp_v0);
    if (temp_v1 != 0) {
      FUN_002bf288(2,0x24,0x91,param_3,param_4,0x6f);
    }
    temp_v0 = 0xff;
  }
  temp_v2 = FUN_00288634(param_2);
  temp_v1 = FUN_002bf4f8(0x24,0xa4);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,temp_v0,temp_v2);
  return;
}
