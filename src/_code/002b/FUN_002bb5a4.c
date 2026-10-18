/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb5a4` (_code @ 0x2bb5a4, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int *DAT_004652a4; /* 0x4652a4 */
extern unsigned int *DAT_004c6290; /* 0x4c6290 */
extern unsigned int *DAT_004c6298; /* 0x4c6298 */
#ifndef ROMWRIGHT_STORAGE_DAT_004c629c_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004c629c_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004c629c_4_4 {
    unsigned int *whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004c629c_4_4_size_check[(sizeof(union romwright_storage_DAT_004c629c_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c629c_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004c629c_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004c629c_4_4 DAT_004c629c; /* 0x4c629c */
#ifndef ROMWRIGHT_STORAGE_DAT_004c62a0_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004c62a0_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004c62a0_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_004c62a0_1_1_size_check[(sizeof(union romwright_storage_DAT_004c62a0_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c62a0_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_004c62a0_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c62a0_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_004c62a0_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004c62a0_1_1 DAT_004c62a0; /* 0x4c62a0 */
extern unsigned int *DAT_004c62a4; /* 0x4c62a4 */
extern int DAT_004c632c; /* 0x4c632c */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002b5a48(void);
extern unsigned int *FUN_002b5a5c(short *);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c30c4. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bb3ee) overlaps instruction at (ram,0x002bb3ec)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bb5a4(unsigned int param_1,short *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 17 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *unaff_r4;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *unaff_r9;
  unsigned int *puVar12;
  unsigned int *unaff_r10;
  unsigned int **ppuVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  float in_s2;
  float in_s5;
  unsigned char uStack00000144;
  unsigned int *puStack_28;
  unsigned int *temp_v5;
  short *temp_v6;
  unsigned int *temp_v7;
  unsigned char uStack_10;
  
  puVar4 = (unsigned int *)FUN_002b5a5c(param_2);
  if (puVar4 == (unsigned int *)0x0) {
    return;
  }
  do {
    temp_v6 = param_2 + 1;
    temp_v1 = *param_2;
    param_2 = temp_v6;
  } while (temp_v1 != 0x3a);
  temp_v5 = (unsigned int *)0x4;
  temp_v2 = FUN_002b5a48();
  temp_v7 = (unsigned int *)((temp_v2 + 1) * 2);
  puVar14 = (unsigned int *)0x2bb61c;
  temp_v3 = (**(romwright_code **)*puVar4)(puVar4,&puStack_28,&temp_v5,param_3);
  puVar3 = temp_v7;
  temp_v2 = DAT_004c632c;
  puVar15 = DAT_004652a0;
  coprocessor_load(0xf,in_cr1,&uStack00000144);
  temp_v6 = (short *)puStack_28;
  puVar10 = (unsigned int *)((temp_v3 >> 8) << 1);
  ppuVar13 = &temp_v5;
  puVar8 = (unsigned int *)((int)DAT_004652a0 - *(int *)(DAT_004c632c + 4));
  *(unsigned int **)(DAT_004c632c + 0xc) = puVar8;
  puVar9 = *(unsigned int **)(temp_v2 + 0x14);
  temp_v5 = puVar4;
  if (puVar9 != puVar8) {
    if (((unsigned int)puVar8 & 8) != 0) {
      *(unsigned int **)(temp_v2 + 0xc) = puVar8 + 6;
    }
    else {
      *(unsigned int **)(temp_v2 + 0xc) = puVar8 + 8;
      if (puVar15 < DAT_004652a4) {
        DAT_004652a0 = puVar15 + 2;
        puVar15[1] = 0x8025e;
        *puVar15 = 0;
      }
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 1;
      DAT_004652a0[1] = 0xf0111;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    puVar4 = DAT_004652a4;
    puVar7 = DAT_004652a0;
    puVar8 = DAT_004c6290;
    puVar15 = DAT_004c6298;
    puVar9 = DAT_004c629c.whole;
    puVar11 = DAT_004c62a0.whole;
    puVar12 = DAT_004c62a4;
    temp_v7 = puVar10;
    if (DAT_004652a0 < DAT_004652a4) {
      puVar15 = DAT_004652a0 + 2;
      *DAT_004652a0 = 0xf0110;
      puVar7[1] = (unsigned int)puVar14;
      puVar14 = (unsigned int *)0x2bb3f0;
      FUN_002c30c4(puVar4);
      puVar4 = temp_v4;
      puVar8 = puVar7;
      puVar9 = (unsigned int *)&DAT_004c6290;
      puVar11 = puVar3;
      puVar12 = unaff_r10;
    }
    coprocessor_store(0,in_cr1,puVar4);
    puVar10 = unaff_r9;
    unaff_r10 = puVar12;
  }
  else {
    DAT_004c629c.whole = (unsigned int *)romwright_piece_2_2(0x52a0,DAT_004c629c.u2[0]);
    ppuVar13 = (unsigned int **)&uStack_10;
    temp_v2 = (int)puVar15 * 2;
    *(unsigned short *)(temp_v2 + (int)puVar8) = 0x52a0;
    *(short *)(temp_v2 + (int)puVar8) = (short)temp_v2;
    puVar9 = (unsigned int *)((int)puVar9 << 9);
    puVar4 = (unsigned int *)((int)puVar8 * 0x10);
    puVar15 = puStack_28;
    puVar11 = temp_v7;
    puVar14 = temp_v7;
    temp_v7 = puVar10;
  }
  ppuVar13[-1] = puVar14;
  ppuVar13[-2] = unaff_r4;
  ppuVar13[-3] = unaff_r10;
  ppuVar13[-4] = puVar10;
  ppuVar13[-5] = puVar11;
  ppuVar13[-6] = puVar4;
  ppuVar13[-7] = puVar9;
  ppuVar13[-8] = puVar15;
  ppuVar13[-9] = (unsigned int *)((int)puVar9 >> 8);
  *(char *)puVar8 = (char)puVar8;
  ppuVar13[-0xd] = puVar14;
  ppuVar13[-0xe] = puVar4;
  ppuVar13[-0xf] = puVar4;
  ppuVar13[-0x10] = puVar8;
  ppuVar13[-0x11] = puVar15;
  ppuVar13[-0x12] = (unsigned int *)((int)puVar8 << 1);
  puVar15 = (unsigned int *)0x2bce3c;
  FUN_002b9024();
  if (puVar8 == (unsigned int *)0x0) {
    ppuVar13[-0x13] = puVar15;
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,ppuVar13 + -0x13,in_cr1,in_cr10);
    VectorSignedToFloat((float)puVar4[0x10] - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  }
  else {
    temp_v0 = *(unsigned char *)((int)puVar8 + 2);
    temp_v2 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
    if (temp_v2 == 0) {
      FUN_002bd420((unsigned int)temp_v0 << 1);
      uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    ppuVar13[-0x12] = (unsigned int *)0x0;
  }
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
