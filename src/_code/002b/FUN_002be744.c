/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be744` (_code @ 0x2be744, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00000000; /* 0x0 */
extern unsigned int uRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned char *puRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern unsigned int uRam00000014; /* 0x14 */
extern int iRam00000018; /* 0x18 */
extern int iRam0000001c; /* 0x1c */
extern unsigned int uRam00000020; /* 0x20 */
extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int uRam00000028; /* 0x28 */
#ifndef ROMWRIGHT_STORAGE_iRam0000002c_4_4_DEFINED
#define ROMWRIGHT_STORAGE_iRam0000002c_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_iRam0000002c_4_4 {
    int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_iRam0000002c_4_4_size_check[(sizeof(union romwright_storage_iRam0000002c_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_u1_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_s1_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_u2_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_s2_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_u4_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_s4_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_iRam0000002c_4_4_f4_width_check[(sizeof(((union romwright_storage_iRam0000002c_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_iRam0000002c_4_4 iRam0000002c; /* 0x2c */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bfcf0) */
/* WARNING: Removing unreachable block (ram,0x002bfd00) */
/* WARNING: Removing unreachable block (ram,0x002bfd04) */
/* WARNING: Removing unreachable block (ram,0x002bfd08) */

unsigned long long FUN_002be744(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr8, in_fpscr, in_s1, in_s4; 23 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int unaff_r6;
  unsigned int unaff_r9;
  unsigned int unaff_r11;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr8;
  float in_s1;
  float in_s4;
  unsigned char uStack00000000;
  
  VectorSignedToFloat((int)(float)(int)((in_s4 + *(float *)(param_1 + 0xc)) - (in_s4 + in_s1)),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  coprocessor_function(0,0xf,0,in_cr0,in_cr8,in_cr0);
  temp_v2 = *(int *)((param_3 >> 0x10) + 0x48);
  temp_v0 = (unsigned int)*(unsigned short *)(temp_v2 + 8) * 0x9249;
  temp_v1 = temp_v0 + 0x9249;
  if (temp_v1 >> 0x14 != 0) {
    coprocessor_load(7,in_cr8,&uStack00000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_3 + 0xc0) == 0x500) {
    return romwright_piece_4_4(param_3,unaff_r6 >> 7);
  }
  puVar1 = &DAT_004e3be0;
  iRam00000000 = (int)temp_v1 >> 0xe;
  uRam00000008 = 0;
  puRam0000000c = &DAT_004e3be0;
  uRam00000020 = 0;
  uRam00000004 = param_3;
  uRam00000010 = temp_v1;
  uRam00000014 = 0;
  iRam00000018 = unaff_r6;
  iRam0000001c = unaff_r6;
  uRam00000024 = unaff_r9;
  uRam00000028 = unaff_r11;
  iRam0000002c.whole = temp_v2;
  func_0x006c190c();
  func_0x006c1910();
  FUN_002b761c(temp_v0 + 0x92f1);
                    /* WARNING: Ignoring partial resolution of indirect */
  iRam0000002c.u2[0] = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  iRam0000002c.u2[0] = (short)unaff_r6;
  temp_v0 = (int)puVar1 >> 0x20;
  *(unsigned int *)(unaff_r6 + 0x60) = temp_v1 * 4;
  coprocessor_storelong(0,in_cr0,temp_v2 - 0x138);
  *(int *)(temp_v0 * 2 + 0x60) = temp_v0;
  coprocessor_load(0,in_cr0,temp_v2);
  temp_v1 = temp_v0 << ((temp_v1 * 4) & 0xff);
  *(unsigned int *)(temp_v1 + 0x50) = 0;
  *(unsigned int *)(temp_v1 + 0x5c) = 0;
  return (unsigned long long)temp_v1;
}
