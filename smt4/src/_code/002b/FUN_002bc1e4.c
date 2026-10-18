/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc1e4` (_code @ 0x2bc1e4, 0x18e bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

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
extern unsigned int DAT_004c62a4; /* 0x4c62a4 */
extern int DAT_004c632c; /* 0x4c632c */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c30c4. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bb3ee) overlaps instruction at (ram,0x002bb3ec)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002bc1e4(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_lr, in_s2, in_s5; 18 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *unaff_r5;
  unsigned int unaff_r6;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  unsigned int temp_v3;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  unsigned char *puVar8;
  unsigned int in_lr;
  unsigned int temp_v4;
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
  unsigned char temp_v5;
  unsigned char temp_v6 [4];
  
  temp_v1 = DAT_004c632c;
  puVar3 = DAT_004652a0;
  puVar8 = &temp_v5;
  puVar5 = (unsigned int *)((int)DAT_004652a0 - *(int *)(DAT_004c632c + 4));
  *(unsigned int **)(DAT_004c632c + 0xc) = puVar5;
  puVar6 = *(unsigned int **)(temp_v1 + 0x14);
  if (puVar6 != puVar5) {
    if (((unsigned int)puVar5 & 8) != 0) {
      *(unsigned int **)(temp_v1 + 0xc) = puVar5 + 6;
    }
    else {
      *(unsigned int **)(temp_v1 + 0xc) = puVar5 + 8;
      if (puVar3 < DAT_004652a4) {
        DAT_004652a0 = puVar3 + 2;
        puVar3[1] = 0x8025e;
        *puVar3 = 0;
      }
    }
    if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 1;
      DAT_004652a0[1] = 0xf0111;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    puVar3 = DAT_004652a4;
    puVar4 = DAT_004652a0;
    puVar5 = DAT_004c6290;
    unaff_r5 = DAT_004c6298;
    puVar6 = DAT_004c629c.whole;
    temp_v4 = DAT_004c62a0.whole;
    temp_v3 = DAT_004c62a4;
    if (DAT_004652a0 < DAT_004652a4) {
      unaff_r5 = DAT_004652a0 + 2;
      *DAT_004652a0 = 0xf0110;
      puVar4[1] = in_lr;
      in_lr = 0x2bb3f0;
      FUN_002c30c4(puVar3);
      puVar3 = temp_v2;
      puVar5 = puVar4;
      puVar6 = (unsigned int *)&DAT_004c6290;
      temp_v4 = unaff_r8;
      temp_v3 = unaff_r10;
    }
    coprocessor_store(0,in_cr1,puVar3);
    unaff_r8 = temp_v4;
    unaff_r6 = unaff_r9;
    unaff_r10 = temp_v3;
  }
  else {
    DAT_004c629c.whole = (unsigned int *)romwright_piece_2_2(0x52a0,DAT_004c629c.u2[0]);
    puVar8 = temp_v6;
    temp_v1 = (int)puVar3 * 2;
    *(unsigned short *)(temp_v1 + (int)puVar5) = 0x52a0;
    *(short *)(temp_v1 + (int)puVar5) = (short)temp_v1;
    puVar6 = (unsigned int *)((int)puVar6 << 9);
    puVar3 = (unsigned int *)((int)puVar5 * 0x10);
    in_lr = unaff_r8;
  }
  *(unsigned int *)(puVar8 + -4) = in_lr;
  *(unsigned int *)(puVar8 + -8) = unaff_r11;
  *(unsigned int *)(puVar8 + -0xc) = unaff_r10;
  *(unsigned int *)(puVar8 + -0x10) = unaff_r6;
  *(unsigned int *)(puVar8 + -0x14) = unaff_r8;
  *(unsigned int **)(puVar8 + -0x18) = puVar3;
  *(unsigned int **)(puVar8 + -0x1c) = puVar6;
  *(unsigned int **)(puVar8 + -0x20) = unaff_r5;
  *(int *)(puVar8 + -0x24) = (int)puVar6 >> 8;
  *(char *)puVar5 = (char)puVar5;
  *(unsigned int *)(puVar8 + -0x34) = in_lr;
  *(unsigned int **)(puVar8 + -0x38) = puVar3;
  *(unsigned int **)(puVar8 + -0x3c) = puVar3;
  *(unsigned int **)(puVar8 + -0x40) = puVar5;
  *(unsigned int **)(puVar8 + -0x44) = unaff_r5;
  *(int *)(puVar8 + -0x48) = (int)puVar5 << 1;
  temp_v4 = 0x2bce3c;
  FUN_002b9024();
  if (puVar5 == (unsigned int *)0x0) {
    *(unsigned int *)(puVar8 + -0x4c) = temp_v4;
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,puVar8 + -0x4c,in_cr1,in_cr10);
    VectorSignedToFloat((float)puVar3[0x10] - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  }
  else {
    temp_v0 = *(unsigned char *)((int)puVar5 + 2);
    temp_v1 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
    if (temp_v1 == 0) {
      FUN_002bd420((unsigned int)temp_v0 << 1);
      uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(puVar8 + -0x48) = 0;
  }
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
