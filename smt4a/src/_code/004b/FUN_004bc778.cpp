/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc778` (_code @ 0x4bc778, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int *, int);
int FUN_004bb9c0(unsigned int *, int *);

typedef struct fn_004bc778_arg2 fn_004bc778_arg2;
struct fn_004bc778_arg2 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    byte field_0x3; /* +0x3 */
    undefined4 field_0x4; /* +0x4 */
};

/* stack frame of param_6: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp43; /* 0x43: local_43 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int FUN_0015fa74(fn_004bc778_arg2 *, unsigned int);
/* Supplied declaration required: sysMemClear. */
extern unsigned int *FUN_004bb80c(unsigned int);
/* Supplied declaration required: FUN_004bb9c0. */


void FUN_004bc778(unsigned int *param_1,unsigned int param_2,fn_004bc778_arg2 *param_3,
                 unsigned int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v5;
  unsigned int uStack_24;
  
  sysMemClear(param_1,0x84);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  temp_v1 = FUN_0015fa74(param_3,param_4);
  puVar3 = (unsigned int *)FUN_004bb80c(param_2);
  temp_v2 = *puVar3;
  temp_v3 = puVar3[1];
  temp_v4 = puVar3[2];
  uStack_3c = puVar3[3];
  uStack_38 = puVar3[4];
  uStack_34 = puVar3[5];
  uStack_30 = puVar3[6];
  uStack_2c = puVar3[7];
  temp_v5 = puVar3[8];
  uStack_24 = puVar3[9];
  if ((char)temp_v3 == '\0') {
    (*(unsigned short *)((unsigned char *)&temp_v3 + 2)) = (unsigned short)((unsigned int)temp_v3 >> 0x10);
    temp_v3 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v3 + 2)),*(unsigned short *)(temp_v1 + 2));
  }
  temp_v0 = param_5;
  if (0 < param_5) {
    temp_v0 = param_6;
  }
  if (0 < temp_v0) {
    (*(unsigned short *)((unsigned char *)&temp_v3 + 0)) = romwright_piece_1_1((char)param_6,(char)param_5);
  }
  if (temp_v4 == 0) {
    temp_v4 = *(int *)(temp_v1 + 4);
  }
  *(short *)(param_1 + 6) = (short)param_2;
  FUN_004bb9c0(param_1,&temp_v2);
  param_1[6] = param_1[6] | 0x100000;
  return;
}

} /* extern "C" */
