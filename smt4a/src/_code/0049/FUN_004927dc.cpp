/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004927dc` (_code @ 0x4927dc, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_0018291c(int *, int *, int *, int *, int, int);
int FUN_00183bb0(void);
int FUN_00185dd4(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0019d880(void);
int FUN_002e129c(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002f5020(int *, unsigned char *, int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_6: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_6_stack;

extern unsigned char LAB_00192824; /* 0x192824 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_0018291c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_0019d880. */
/* Supplied declaration required: FUN_002e129c. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_004927dc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int temp_v5;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int temp_v6;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_90;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int temp_v11;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int temp_v12;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int temp_v13;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  temp_v0 = FUN_001834a4(0x13,param_1);
  psVar3 = *(short **)(temp_v0 + 0xc);
  if ((psVar3 != (short *)0x0) && (psVar3[2] == 1)) {
    temp_v2 = (unsigned int)*psVar3;
    temp_v3 = (unsigned int)psVar3[1];
  }
  else {
    temp_v2 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
    temp_v3 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  }
  FUN_0019d880();
  temp_v0 = FUN_001834a4(0x13,param_1);
  temp_v1 = *(int *)(temp_v0 + 0xc);
  if ((temp_v1 != 0) && (*(short *)(temp_v1 + 4) == 1)) {
    FUN_00185dd4(2,0x13,param_1,param_2,param_3,temp_v2,temp_v3,param_4);
    return;
  }
  if (param_6 != 0 && temp_v1 != 0) {
    FUN_002f5020(&temp_v4,&LAB_00192824,0x10,4);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v4 = *(unsigned int *)(temp_v1 + 0x10);
    uStack_c4 = *(unsigned int *)(temp_v1 + 0x14);
    uStack_c0 = *(unsigned int *)(temp_v1 + 0x18);
    uStack_bc = *(unsigned int *)(temp_v1 + 0x1c);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v5 = *(unsigned int *)(temp_v1 + 0x20);
    uStack_b4 = *(unsigned int *)(temp_v1 + 0x24);
    uStack_b0 = *(unsigned int *)(temp_v1 + 0x28);
    uStack_ac = *(unsigned int *)(temp_v1 + 0x2c);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v6 = *(unsigned int *)(temp_v1 + 0x30);
    uStack_a4 = *(unsigned int *)(temp_v1 + 0x34);
    uStack_a0 = *(unsigned int *)(temp_v1 + 0x38);
    uStack_9c = *(unsigned int *)(temp_v1 + 0x3c);
    temp_v0 = *(int *)(temp_v0 + 0xc);
    temp_v7 = *(unsigned int *)(temp_v0 + 0x40);
    temp_v9 = *(unsigned int *)(temp_v0 + 0x4c);
    temp_v8 = *(unsigned int *)(temp_v0 + 0x44);
    uStack_90 = *(unsigned int *)(temp_v0 + 0x48);
    temp_v10 = temp_v7;
    uStack_74 = temp_v8;
    uStack_70 = uStack_90;
    uStack_6c = temp_v9;
    temp_v11 = temp_v6;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    temp_v12 = temp_v5;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    temp_v13 = temp_v4;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    FUN_0018291c(&temp_v13,&temp_v12,&temp_v11,&temp_v10,0,0);
  }
  VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001677c0();
  FUN_002e129c(2,0x13,param_1,param_2,param_3,temp_v2,temp_v3,param_4);
  FUN_001677c0();
  FUN_00183bb0();
  return;
}

} /* extern "C" */
