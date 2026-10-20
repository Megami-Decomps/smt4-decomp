/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c95c` (_code @ 0x11c95c, 0x2a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5c50(...);
int SBORROW4(...);
int coproc_moveto_Data_Memory_Barrier(...);
int ll_sdiv(...);
int nn_fnd_DateTime_DateTime_sub_object(unsigned int *, int, int, int, int, int, int, int);
int software_interrupt(...);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char LAB_0036ee80; /* 0x36ee80 */
extern unsigned int DAT_0044e630; /* 0x44e630 */
extern int DAT_0044e634; /* 0x44e634 */
extern unsigned int uRam1ff81000; /* 0x1ff81000 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002b5c50. */
/* Supplied declaration required: ll_sdiv. */
/* Supplied declaration required: nn_fnd_DateTime_DateTime_sub_object. */


long long FUN_0011c95c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  long long temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  long long temp_v16;
  unsigned long long temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20 [2];
  long long temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int temp_v24 [2];
  unsigned int temp_v25 [3];
  
  puVar3 = temp_v24;
  nn_fnd_DateTime_DateTime_sub_object(puVar3,2000,1,1,0,0,0,0);
  temp_v1 = (unsigned long long)(*puVar3 - DAT_0044e630) * 1000000;
  temp_v22 = (unsigned int)temp_v1;
  temp_v23 = (puVar3[1] - (DAT_0044e634 + (unsigned int)(*puVar3 < DAT_0044e630))) * 1000000 +
             (int)((unsigned long long)temp_v1 >> 0x20);
  temp_v21 = FUN_002b5c50(&temp_v22,temp_v23,0xd7b634db,0x431bde82,0x12);
  puVar3 = temp_v24;
  nn_fnd_DateTime_DateTime_sub_object(puVar3,0x834,1,1,0,0,0,0);
  puVar4 = temp_v25;
  nn_fnd_DateTime_DateTime_sub_object(puVar4,2000,1,1,0,0,0,0);
  temp_v1 = (unsigned long long)(*puVar3 - *puVar4) * 1000000;
  temp_v22 = (unsigned int)temp_v1;
  temp_v23 = (puVar3[1] - (puVar4[1] + (unsigned int)(*puVar3 < *puVar4))) * 1000000 +
             (int)((unsigned long long)temp_v1 >> 0x20);
  temp_v16 = FUN_002b5c50(&temp_v22,temp_v22,0xd7b634db,0x431bde82,0x12);
  software_interrupt(0x28);
  temp_v0 = (uRam1ff81000 & 1) * 0x20;
  temp_v9 = *(unsigned int *)(temp_v0 + 0x1ff81020);
  temp_v10 = *(int *)(temp_v0 + 0x1ff81024);
  temp_v7 = *(unsigned int *)(temp_v0 + 0x1ff8103c);
  temp_v8 = *(unsigned int *)(temp_v0 + 0x1ff81038);
  coproc_moveto_Data_Memory_Barrier(0);
  temp_v11 = (unsigned int)temp_v16 - *(unsigned int *)(temp_v0 + 0x1ff81028);
  temp_v13 = (int)((unsigned long long)temp_v16 >> 0x20) -
           (*(int *)(temp_v0 + 0x1ff8102c) + (unsigned int)((unsigned int)temp_v16 < *(unsigned int *)(temp_v0 + 0x1ff81028)));
  temp_v17 = ll_sdiv(0,1000,*(int *)(temp_v0 + 0x1ff81030),*(int *)(temp_v0 + 0x1ff81030) >> 0x1f);
  temp_v2 = (unsigned int)(temp_v17 >> 0x20);
  temp_v5 = (unsigned int)((temp_v17 & 0xffffffff) * (unsigned long long)temp_v11 >> 0x20);
  temp_v1 = (temp_v17 & 0xffffffff) * (unsigned long long)temp_v13;
  temp_v15 = (unsigned int)temp_v1;
  temp_v14 = (unsigned int)((unsigned long long)temp_v11 * (unsigned long long)temp_v2);
  temp_v3 = temp_v15 + temp_v14;
  temp_v4 = temp_v3 + temp_v5;
  temp_v6 = temp_v4 + temp_v9;
  temp_v12 = ((int)temp_v13 >> 0x1f) * (int)temp_v17 + (int)((unsigned long long)temp_v1 >> 0x20) +
           ((int)temp_v2 >> 0x1f) * temp_v11 + (int)((unsigned long long)temp_v11 * (unsigned long long)temp_v2 >> 0x20) +
           (unsigned int)romwright_carry_4(temp_v15,temp_v14) + temp_v13 * temp_v2 + (unsigned int)romwright_carry_4(temp_v3,temp_v5) + temp_v10 +
           (unsigned int)romwright_carry_4(temp_v4,temp_v9);
  temp_v18 = (int)&LAB_0036ee80 - (int)(temp_v6 - temp_v9);
  temp_v0 = (temp_v12 - (temp_v10 + (unsigned int)(temp_v6 < temp_v9))) +
          (unsigned int)(&LAB_0036ee80 < (unsigned char *)(temp_v6 - temp_v9));
  temp_v19 = -temp_v0;
  temp_v20[0] = 0;
  temp_v20[1] = 0;
  piVar5 = temp_v20;
  if ((int)-(temp_v19 + (unsigned int)(temp_v18 != 0)) < 0 !=
      (SBORROW4(0,temp_v19) != SBORROW4(temp_v0,(unsigned int)(temp_v18 != 0)))) {
    piVar5 = &temp_v18;
  }
  temp_v17 = ll_sdiv(0,*piVar5,&LAB_0036ee80,0);
  temp_v2 = (unsigned int)(temp_v17 >> 0x20);
  temp_v5 = (unsigned int)((temp_v17 & 0xffffffff) * (unsigned long long)temp_v8 >> 0x20);
  temp_v1 = (temp_v17 & 0xffffffff) * (unsigned long long)temp_v7;
  temp_v13 = (unsigned int)temp_v1;
  temp_v11 = (unsigned int)((unsigned long long)temp_v8 * (unsigned long long)temp_v2);
  temp_v3 = temp_v13 + temp_v11;
  temp_v4 = temp_v3 + temp_v5;
  temp_v9 = temp_v4 + temp_v6;
  ll_sdiv(temp_v9 - (unsigned int)temp_v21,
          (((int)temp_v7 >> 0x1f) * (int)temp_v17 + (int)((unsigned long long)temp_v1 >> 0x20) +
           ((int)temp_v2 >> 0x1f) * temp_v8 + (int)((unsigned long long)temp_v8 * (unsigned long long)temp_v2 >> 0x20) +
           (unsigned int)romwright_carry_4(temp_v13,temp_v11) + temp_v7 * temp_v2 + (unsigned int)romwright_carry_4(temp_v3,temp_v5) + temp_v12 +
          (unsigned int)romwright_carry_4(temp_v4,temp_v6)) - ((*(unsigned int *)((unsigned char *)&temp_v21 + 4)) + (unsigned int)(temp_v9 < (unsigned int)temp_v21)),
          (int)temp_v16,(int)((unsigned long long)temp_v16 >> 0x20));
  return temp_v16 + temp_v21;
}

} /* extern "C" */
