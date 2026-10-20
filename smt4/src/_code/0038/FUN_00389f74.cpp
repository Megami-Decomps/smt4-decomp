/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389f74` (_code @ 0x389f74, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6d1c(unsigned int [5], unsigned int, int, int, unsigned int);
int FUN_002a8ac4(unsigned short *, unsigned int [5], unsigned int);

/* stack frame of param_11: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_11_stack;

/* Supplied declaration required: FUN_002a6d1c. */
extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8ac4. */
extern unsigned int asdTMTexTableCallFileB(unsigned int, unsigned int);


void FUN_00389f74(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5,int param_6,unsigned int param_7,int param_8,int param_9,int param_10,
                 int param_11)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2 [5];
  int temp_v3;
  int iStack_64;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int temp_v8;
  unsigned int uStack_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  temp_v8 = param_3;
  uStack_28 = param_4;
  temp_v0 = FUN_002a6d50(param_1,0x17,param_4);
  puVar4 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar4 = *(unsigned int **)(temp_v0 + 4);
  }
  temp_v1 = asdTMTexTableCallFileB(0x17,param_4);
  FUN_002a6d1c(temp_v2,temp_v8,param_8,param_9,param_7);
  temp_v2[0] = temp_v2[0] | 0x28000;
  puVar3 = (unsigned short *)(**(int **)(*(int *)*puVar4 + 4) + 0x14);
  temp_v6 = (unsigned int)*puVar3 + (param_8 - param_5);
  temp_v7 = temp_v6 + param_10;
  temp_v3 = param_10;
  iStack_64 = param_11;
  temp_v4 = (unsigned int)*(unsigned short *)(**(int **)(*(int *)*puVar4 + 4) + 0x16) + (param_9 - param_6);
  temp_v5 = temp_v4 + param_11;
  FUN_002a8ac4(puVar3,temp_v2,temp_v1);
  return;
}

} /* extern "C" */
