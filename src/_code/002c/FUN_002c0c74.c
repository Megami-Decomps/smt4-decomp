/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0c74` (_code @ 0x2c0c74, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_0012a69c. */
extern unsigned long long FUN_002baaa4(unsigned char *, int);
extern int FUN_002bb420(void);
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb490. */
extern int FUN_002bb5c4(unsigned int, unsigned char *);
extern int FUN_002bb608(int, unsigned int, int, int);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c0c5c. */
/* Supplied declaration required: FUN_002c0f28. */
/* Supplied declaration required: FUN_002c14f4. */


void FUN_002c0c74(unsigned char *param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0; 11 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  char unaff_r4;
  int temp_v2;
  int unaff_r7;
  unsigned int in_cr0;
  unsigned long long temp_v3;
  unsigned char uStack_28;
  
  FUN_002c0c5c();
  temp_v3 = FUN_002baaa4(param_1,param_2);
  temp_v1 = (int)temp_v3 << 0xe;
  temp_v2 = 0;
  coprocessor_store(0,in_cr0,temp_v1);
  temp_v1 = FUN_002bb608(temp_v1,(int)((unsigned long long)temp_v3 >> 0x20),temp_v1,temp_v1);
  if (temp_v1 != 0) {
    FUN_002bb6b8();
    temp_v1 = FUN_002bb5c4(0x400,&uStack_28);
    if (temp_v1 < 0) {
      FUN_002c14f4(temp_v1,0x2c1364);
    }
    FUN_002bb648();
    if (unaff_r4 == '\0') {
      *(short *)(param_2 + 0x3e) = (short)temp_v2;
      return;
    }
  }
  temp_v1 = FUN_002bb420();
  if (temp_v1 != 0) {
    FUN_002bb6b8();
    temp_v1 = FUN_002bb5c4(0x200,&uStack_28);
    if (temp_v1 < 0) {
      FUN_002c14f4(temp_v1,0x2c13a8);
    }
    FUN_002bb648();
    if (unaff_r4 == '\0') {
      *(short *)(param_2 + 0x3e) = (short)temp_v2;
      return;
    }
  }
  FUN_002bb480(3);
  while( 1 ) {
    FUN_002bb6b8();
    temp_v2 = unaff_r7;
    FUN_0012a69c();
    FUN_002bb648();
    if ((temp_v2 != -0x375f3010 && temp_v2 != -0x1f5f33f8) && temp_v2 != -0x375f33fe) break;
    FUN_002bb490(10000000,0);
  }
  if (temp_v2 == 0) {
    temp_v0 = 0;
    FUN_002c0f28(0,0,0);
    if (param_1 != (unsigned char *)0x0) {
      *param_1 = temp_v0;
    }
  }
  *(short *)(param_2 + 0x3e) = (short)temp_v2;
  return;
}
