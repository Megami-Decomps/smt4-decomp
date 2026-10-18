/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123ae8` (_code @ 0x123ae8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp1D; /* 0x1d: local_1d */
} param_3_stack;

/* Supplied declaration required: FUN_00106fcc. */
/* Supplied declaration required: FUN_002e9318. */
extern unsigned int FUN_002ee9ce(unsigned char *);
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_002fbb92. */
/* Supplied declaration required: FUN_00303cd8. */


void FUN_00123ae8(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [59];
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  (**(romwright_code **)(*param_3 + 0xc))(temp_v3,param_3);
  FUN_002fbb92(param_2,temp_v3);
  FUN_002e9318(temp_v3);
  FUN_00303cd8(temp_v1);
  temp_v2 = *(unsigned char *)(param_2 + 0x3b);
  (**(romwright_code **)(*param_3 + 0x18))(param_3,temp_v1);
  temp_v0 = FUN_002ee9ce(temp_v1);
  FUN_00106fcc(param_2,temp_v0);
  FUN_002f4f00(temp_v1);
  return;
}
