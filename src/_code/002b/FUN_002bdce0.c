/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdce0` (_code @ 0x2bdce0, 0x2b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char uRam00000085; /* 0x85 */
extern int iRam000000c0; /* 0xc0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002be304. */
extern unsigned long long func_0x006be38c(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bdce0(int param_1,unsigned int param_2,unsigned char *param_3,int param_4)

{
/* irregular: irregular input(s): in_s2; 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  unsigned int in_s2;
  unsigned long long temp_v3;
  unsigned char temp_v4 [8];
  int temp_v5;
  int iStack_34;
  unsigned int uStack_30;
  unsigned char *puStack_2c;
  int temp_v6;
  
  puVar4 = temp_v4;
  temp_v5 = -param_1;
  iStack_34 = param_1;
  uStack_30 = param_2;
  puStack_2c = param_3;
  temp_v6 = param_4;
  if (param_4 != 0) {
    temp_v1 = temp_v5;
    if (0 < param_1) {
      temp_v1 = 0x8400ff;
    }
    if (param_1 == 0) {
      temp_v1 = 0x787878ff;
    }
    if (-1 < param_1) {
      FUN_002be304(temp_v1);
      VectorFloatToUnsigned(in_s2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v3 = FUN_002be304(0xdc0f14ff);
    puVar4 = param_3;
  }
  else {
    FUN_002be304(0xff);
    temp_v3 = func_0x006be38c();
  }
  puVar3 = (unsigned short *)((unsigned long long)temp_v3 >> 0x20);
  *puVar3 = (short)temp_v3;
  *(unsigned char *)((int)puVar3 * 2) = 0;
  temp_v0 = *(unsigned char *)temp_v3;
  temp_v2 = (unsigned int)temp_v0;
  *(short *)(param_4 + (int)puVar3) = (short)temp_v3;
  *(unsigned char *)(param_4 + 0xd) = temp_v0;
  *(unsigned int *)(temp_v2 + 0x44) = temp_v2;
  *(unsigned int *)(param_4 + (int)puVar3) = temp_v2 + 0x73;
  *(char *)(temp_v2 + 0x84) = (char)((unsigned long long)temp_v3 >> 0x20);
  iRam000000c0 = *(int *)(temp_v2 + 0x77);
  uRam00000085 = 0;
  *(unsigned int *)(temp_v2 + 0x73 + iRam000000c0 + (unsigned int)(0xffffff8c < temp_v2) + 0x54) =
       *(unsigned int *)(puVar4 + 0x74);
  (*(romwright_code *)0xffffffff)();
  return;
}
