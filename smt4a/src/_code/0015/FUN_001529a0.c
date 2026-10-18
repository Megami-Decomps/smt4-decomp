/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001529a0` (_code @ 0x1529a0, 0x250 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 11 slot(s), 32 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned char sp4F; /* 0x4f: local_4f */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int *FUN_0017250c(void);
extern int *FUN_0017261c(unsigned int);
/* Supplied declaration required: FUN_0017314c. */


unsigned char *
FUN_001529a0(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 1 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  unsigned char *puVar6;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  int *temp_v4;
  char temp_v5;
  unsigned char uStack_53 [3];
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  char temp_v12;
  int *temp_v13;
  char temp_v14;
  
  piVar2 = (int *)FUN_0017250c();
  temp_v1 = (**(romwright_code **)(*piVar2 + 0x10))(piVar2);
  temp_v2 = param_3[1];
  temp_v3 = param_3[2];
  *(unsigned int *)(temp_v1 + 8) = *param_3;
  *(unsigned int *)(temp_v1 + 0xc) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x10) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x14) = 0;
  *(unsigned int *)(temp_v1 + 0x18) = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0x1c) = 0;
  piVar4 = (int *)FUN_0017261c(param_1);
  *(unsigned char *)(piVar4 + 2) = param_4;
  temp_v1 = (**(romwright_code **)(*piVar4 + 0x10))(piVar4);
  *(unsigned int *)(temp_v1 + 0x10) = in_s2;
  *(unsigned int *)(temp_v1 + 4) = in_s0;
  *(unsigned int *)(temp_v1 + 8) = in_s1;
  temp_v6 = 1;
  temp_v7 = 1;
  temp_v11 = (int *)0x0;
  temp_v10 = 1;
  temp_v13 = (int *)0x0;
  temp_v14 = '\x01';
  puVar6 = &temp_v6;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v5 = 1;
  temp_v4 = piVar2;
  if (&temp_v11 != &temp_v4) {
    temp_v4 = (int *)0x0;
    temp_v11 = piVar2;
  }
  piVar2 = temp_v4;
  temp_v12 = '\x01';
  if (temp_v4 != (int *)0x0) {
    (**(romwright_code **)*temp_v4)(temp_v4);
    piVar5 = (int *)piVar2[1];
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,piVar2);
  }
  temp_v0 = temp_v14;
  (*(unsigned int *)&temp_v5) = romwright_piece_3_1(uStack_53,1);
  temp_v4 = piVar4;
  if (&temp_v13 != &temp_v4) {
    temp_v4 = temp_v13;
    temp_v14 = '\x01';
    (*(unsigned int *)&temp_v5) = romwright_piece_3_1(uStack_53,temp_v0);
    temp_v13 = piVar4;
  }
  piVar2 = temp_v4;
  if ((temp_v4 != (int *)0x0) && (temp_v5 != '\0')) {
    (**(romwright_code **)*temp_v4)(temp_v4);
    piVar4 = (int *)piVar2[1];
    (**(romwright_code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  FUN_0017314c(puVar6,param_1);
  piVar2 = temp_v13;
  if ((temp_v13 != (int *)0x0) && (temp_v14 != '\0')) {
    (**(romwright_code **)*temp_v13)(temp_v13);
    piVar4 = (int *)piVar2[1];
    (**(romwright_code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  piVar2 = temp_v11;
  if ((temp_v11 != (int *)0x0) && (temp_v12 != '\0')) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar4 = (int *)piVar2[1];
    (**(romwright_code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  *(unsigned int *)(puVar6 + 0x58) = *param_2;
  *(unsigned int *)(puVar6 + 0x68) = temp_v2;
  *(unsigned int *)(puVar6 + 0x78) = temp_v3;
  *(unsigned int *)(puVar6 + 0x88) = *(unsigned int *)(puVar6 + 0x88) | 0x800;
  return puVar6;
}
