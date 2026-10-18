/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc120` (_code @ 0x2bc120, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e39e4; /* 0x4e39e4 */
extern unsigned int uRam004e3a34; /* 0x4e3a34 */
extern int DAT_004e3a64; /* 0x4e3a64 */
#ifndef ROMWRIGHT_STORAGE_DAT_004e8568_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e8568_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e8568_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_004e8568_1_1_size_check[(sizeof(union romwright_storage_DAT_004e8568_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e8568_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_004e8568_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e8568_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_004e8568_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e8568_1_1 DAT_004e8568; /* 0x4e8568 */
extern int iRam004e856c; /* 0x4e856c */
extern int iRam004e8570; /* 0x4e8570 */
extern short sRam004e8574; /* 0x4e8574 */
extern unsigned int DAT_004e8578; /* 0x4e8578 */

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00155fe8. */
/* Supplied declaration required: FUN_0015a034. */
/* Supplied declaration required: FUN_0015a514. */
extern int FUN_0015a580(unsigned int);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
extern unsigned int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bce56) overlaps instruction at (ram,0x002bce54)
    */
/* WARNING: Removing unreachable block (ram,0x00155e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002bc120(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_lr, in_s2, in_s5; 27 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar6;
  int temp_v6;
  unsigned int temp_v7;
  int unaff_r5;
  unsigned int unaff_r6;
  int unaff_r7;
  romwright_code *pcVar9;
  unsigned int temp_v8;
  unsigned int **ppuVar11;
  unsigned int in_lr;
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
  unsigned char temp_v9 [4];
  int iStack_70;
  int iStack_6c;
  unsigned int *puStack_68;
  unsigned int uStack_64;
  unsigned char temp_v10 [12];
  int iStack_4c;
  int iStack_48;
  
  temp_v6 = *param_1;
  puVar6 = &DAT_004e39e0;
  if (temp_v6 != 0x400) {
    temp_v2 = DAT_004e3a64;
    if ((temp_v6 == 0x401) || (temp_v2 = param_2, temp_v6 == 0x410)) {
      puVar6 = *(unsigned int **)(temp_v2 + 8);
      unaff_r5 = *(int *)(temp_v2 + 0xc);
      *(short *)((int)puVar6 + unaff_r5) = (short)unaff_r5;
      unaff_r6 = unaff_r5 << 9;
      temp_v5 = (int)puVar6 << 4;
    }
    else {
      DAT_004e39e0 = 0;
      DAT_004e39e4 = in_lr;
      FUN_002c30c4(param_2);
      coprocessor_store(0,in_cr1,temp_v4);
      temp_v5 = temp_v4;
    }
    iStack_4c = (int)unaff_r6 >> 8;
    *(char *)puVar6 = (char)puVar6;
    iStack_70 = (int)puVar6 << 1;
    ppuVar11 = (unsigned int **)&iStack_70;
    iStack_6c = unaff_r5;
    puStack_68 = puVar6;
    uStack_64 = temp_v5;
    iStack_48 = unaff_r5;
    FUN_002b9024();
    if (puVar6 == (unsigned int *)0x0) {
      coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
      coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
      coprocessor_moveto(10,0,0,temp_v9,in_cr1,in_cr10);
      VectorSignedToFloat(*(float *)(temp_v5 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
      coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
      coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v7 = (unsigned int)*(unsigned char *)((int)puVar6 + 2);
    temp_v5 = FUN_0031c658(DAT_00433158,temp_v7);
  }
  else {
    *param_1 = 0;
    param_1[1] = unaff_r7;
    param_1 = param_1 + 2;
    if (param_1 == (int *)0x0) {
      iStack_48 = temp_v6;
      FUN_002c38a4(&DAT_004e8578);
      temp_v2 = FUN_0015a580(DAT_004e8568.whole);
      temp_v6 = iRam004e8570;
      if (temp_v2 == 0x18) {
        if ((*(int *)(iRam004e8570 + 0x20) == 0x7fff) || (0 < *(int *)(iRam004e8570 + 0x20))) {
          FUN_002c3820(&DAT_004e8578);
          return 0;
        }
        pcVar9 = *(romwright_code **)(iRam004e8570 + 0x2c);
        temp_v8 = *(unsigned int *)(iRam004e8570 + 0x30);
        FUN_00155fe8(&DAT_004e8568.whole);
        if (pcVar9 != (romwright_code *)0x0) {
          (*pcVar9)(temp_v6,temp_v8);
        }
      }
      temp_v2 = 0;
      temp_v6 = -LZCOUNT((DAT_004e8568.whole + 1) & ~DAT_004e8568.whole);
      temp_v5 = temp_v6 + 0x1f;
      if ((temp_v6 != -0x20) && ((int)temp_v5 < 0x18)) {
        DAT_004e8568.whole = DAT_004e8568.whole | (1 << (temp_v5 & 0xff));
        sRam004e8574 = sRam004e8574 + 1;
        temp_v2 = *(int *)(temp_v5 * 4 + 0x4e9b44);
        FUN_0015a034(temp_v2);
      }
      *(unsigned int *)(temp_v2 + 0x20) = 0;
      temp_v6 = iRam004e856c;
      if (iRam004e856c != 0) {
        do {
          temp_v3 = temp_v6;
          if (*(int *)(temp_v3 + 0x20) < 1) {
            temp_v6 = *(int *)(temp_v3 + 0x24);
            *(int *)(temp_v2 + 0x28) = temp_v3;
            *(int *)(temp_v2 + 0x24) = temp_v6;
            if (temp_v6 != 0) {
              *(int *)(temp_v6 + 0x28) = temp_v2;
            }
            else {
              *(unsigned int *)(temp_v2 + 0x24) = 0;
              iRam004e856c = temp_v2;
            }
            *(int *)(temp_v3 + 0x24) = temp_v2;
            FUN_002c3820(&DAT_004e8578);
            FUN_0015a514(*(unsigned int *)(temp_v2 + 0x68),2);
            *(short *)(*(int *)(temp_v2 + 0x68) + 4) = *(short *)(*(int *)(temp_v2 + 0x68) + 4) + 1;
            *(int *)(temp_v2 + 0x2c) = param_2;
            *(unsigned int *)(temp_v2 + 0x30) = 0;
            return temp_v2;
          }
          temp_v6 = *(int *)(temp_v3 + 0x28);
        } while (*(int *)(temp_v3 + 0x28) != 0);
        *(int *)(temp_v3 + 0x28) = temp_v2;
        *(int *)(temp_v2 + 0x24) = temp_v3;
        *(unsigned int *)(temp_v2 + 0x28) = 0;
        iRam004e8570 = temp_v2;
      }
      else {
        *(unsigned int *)(temp_v2 + 0x24) = 0;
        iRam004e856c = temp_v2;
        *(unsigned int *)(temp_v2 + 0x28) = 0;
        iRam004e8570 = temp_v2;
      }
      FUN_002c3820(&DAT_004e8578);
      FUN_0015a514(*(unsigned int *)(temp_v2 + 0x68),2);
      *(short *)(*(int *)(temp_v2 + 0x68) + 4) = *(short *)(*(int *)(temp_v2 + 0x68) + 4) + 1;
      *(int *)(temp_v2 + 0x2c) = param_2;
      *(unsigned int *)(temp_v2 + 0x30) = 0;
      return temp_v2;
    }
    temp_v0 = param_1 == (int *)0x0;
    if (temp_v0) {
      coprocessor_load(0xe,in_cr0,unaff_r5 + 0x128);
      param_1 = (int *)((int)unaff_r6 >> 1);
    }
    temp_v5 = ((int)param_1 << 0x18) | ((((unsigned int)param_1 >> 8) & 0xff) << 0x10) |
            ((((unsigned int)param_1 >> 0x10) & 0xff) << 8) | ((unsigned int)param_1 >> 0x18);
    coprocessor_store(0,in_cr13,temp_v10);
    *(unsigned int *)(temp_v5 * 2) = temp_v5;
    temp_v1 = (unsigned char)((unsigned int)param_1 >> 0x18);
    *(unsigned char *)(unaff_r7 + 0x12) = temp_v1;
    temp_v5 = (unsigned int)(!temp_v0 || (unaff_r6 & 1) != 0);
    temp_v7 = temp_v5 + 0xe580208c;
    *(unsigned int *)(unaff_r6 + 0x44) = 0xe580200c;
    uRam004e3a34 = temp_v7;
    *(unsigned char *)(unaff_r7 + 0x11) = temp_v1;
    *(char *)(unaff_r6 + 9) = (char)unaff_r5;
    *(unsigned char *)(temp_v5 + 0xe580208d) = 0xc;
    temp_v5 = unaff_r6 & 0x7fffffff;
    ppuVar11 = &puStack_68;
    puStack_68 = (unsigned int *)0xe580200c;
    uStack_64 = temp_v7;
  }
  if (temp_v5 == 0) {
    FUN_002bd420(temp_v7 << 1);
    uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *ppuVar11 = (unsigned int *)0x0;
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
  halt_baddata();
}
