/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be548` (_code @ 0x2be548, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned short uRam0000002c; /* 0x2c */
extern unsigned int uRam00000050; /* 0x50 */
extern unsigned int uRam0000005c; /* 0x5c */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern long long FUN_002ae650(void);
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002be630) overlaps instruction at (ram,0x002be62e)
    */
/* WARNING: Removing unreachable block (ram,0x002bf05c) */
/* WARNING: Removing unreachable block (ram,0x002bf064) */
/* WARNING: Removing unreachable block (ram,0x002be18a) */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

unsigned long long
FUN_002be548(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,int param_5)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8, in_r12, in_s2; 24 native warning(s); review required */
  unsigned int temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v2;
  unsigned char *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int unaff_r11;
  int in_r12;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned int in_s2;
  long long temp_v7;
  unsigned char uStack000000d8;
  unsigned char temp_v8 [8];
  
  puVar9 = (unsigned int *)0x0;
  puVar10 = (unsigned int *)0x0;
  puVar6 = param_4;
  temp_v7 = FUN_002ae650();
  puVar4 = (unsigned int *)((unsigned long long)temp_v7 >> 0x20);
  puVar5 = (unsigned int *)temp_v7;
  switch(puVar5) {
  case (unsigned int *)0x0:
    *puVar4 = 0;
    puVar4[1] = (unsigned int)puVar5;
    *puVar5 = (unsigned int)puVar5;
    *puVar6 = 0;
    puVar6[1] = (unsigned int)puVar5;
    temp_v7 = romwright_zext_4_8(puVar4 + 2) << 0x20;
    puVar6 = puVar5;
    break;
  case (unsigned int *)0x1:
    VectorFloatToUnsigned(in_s2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned int *)0x2:
                    /* WARNING: Does not return */
    pcVar2 = (romwright_code *)software_udf(0xe0,0x2bf92c);
    (*pcVar2)();
  case (unsigned int *)0x3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned int *)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned int *)0x5:
    param_3 = (unsigned int *)0x0;
    temp_v2 = (int)temp_v8 * 0x10;
    temp_v7 = romwright_piece_4_4(puVar4,temp_v2);
    puVar5 = param_3;
    puVar6 = (unsigned int *)0x0;
    puVar10 = puVar9;
    break;
  case (unsigned int *)0x6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned int *)0x7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned int *)0x8:
    temp_v2 = (int)puVar5 << ((unsigned int)puVar5 & 0xff);
    puVar9 = (unsigned int *)((int)puVar4 >> 0x20);
    temp_v7 = romwright_piece_4_4(puVar4,temp_v2);
    puVar5 = param_3;
    puVar6 = (unsigned int *)0x0;
    puVar10 = puVar9;
    break;
  case (unsigned int *)0x9:
  case (unsigned int *)0xa:
    puVar5 = param_3;
    puVar6 = puVar9;
    break;
  default:
    if (param_3 < (unsigned int *)0x2) {
      temp_v2 = puVar4[0x30];
      if (temp_v2 == 0x500) {
        return romwright_piece_4_4(puVar4,param_1 >> 7);
      }
    }
    else if (param_3 == (unsigned int *)0x2) {
      temp_v2 = puVar4[0x4e];
      if (temp_v2 == 0x500) {
        return romwright_piece_4_4(puVar4,param_1 >> 7);
      }
    }
    puVar8 = &DAT_004e3be0;
    *param_3 = 0;
    param_3[1] = (unsigned int)puVar4;
    param_3[2] = (unsigned int)param_3;
    param_3[3] = (unsigned int)&DAT_004e3be0;
    param_3[4] = 0x49;
    param_3[5] = 0;
    param_3[6] = param_5;
    param_3[7] = param_1;
    param_3[8] = 0;
    param_3[9] = (unsigned int)param_4;
    param_3[10] = unaff_r11;
    param_3[0xb] = in_r12;
    func_0x006c190c();
    func_0x006c1910();
    FUN_002b761c(0xf1);
    uRam0000002c = (unsigned short)param_5;
    *(unsigned int *)(param_5 + 0x60) = 0x124;
    coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
    *(int *)(((int)puVar8 >> 0x20) * 2 + 0x60) = (int)puVar8 >> 0x20;
    coprocessor_load(0,in_cr0,in_r12);
    uRam00000050 = 0;
    uRam0000005c = 0;
    return 0;
  }
  temp_v1 = (unsigned int)temp_v7 & (unsigned int)puVar6;
  coprocessor_storelong(0,in_cr1,&uStack000000d8);
  temp_v4 = (unsigned int *)0x67 < puVar5;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v8);
  if (-1 < (int)temp_v1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v2 = (int)((unsigned long long)temp_v7 >> 0x20) + 0xb4000;
  temp_v3 = 0;
  temp_v5 = temp_v4;
  if (temp_v1 == 0) {
    temp_v5 = (unsigned int)(param_5 * 0x800) < param_2 || param_2 + param_5 * -0x800 < (unsigned int)temp_v4;
    temp_v2 = param_2 - (param_5 * 0x800 + (unsigned int)!temp_v4);
    temp_v3 = temp_v2 == 0;
  }
  temp_v4 = 0;
  temp_v6 = temp_v5;
  if (temp_v3) {
    temp_v0 = (int)puVar10 * param_5 + temp_v2;
    temp_v6 = (unsigned int)(param_5 * 0x800) < temp_v0 || temp_v0 + param_5 * -0x800 < (unsigned int)temp_v5;
    temp_v2 = temp_v0 - (param_5 * 0x800 + (unsigned int)!temp_v5);
    temp_v4 = temp_v2 == 0;
  }
  temp_v3 = 0;
  if (temp_v4) {
    temp_v3 = (long long)(int)puVar10 * (long long)param_5 + romwright_piece_4_4(temp_v1,temp_v2) == 0;
  }
  temp_v4 = 0;
  if (temp_v3) {
    temp_v4 = (long long)(int)puVar10 * (long long)param_5 +
             romwright_piece_4_4(puVar6,param_5 * 0x800 - ((int)puVar5 + (!temp_v6 - 0x68))) == 0;
  }
  if (temp_v4) {
    coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
    software_interrupt(0xb8e1d6);
    software_interrupt(0xbae1d7);
  }
  if (temp_v6 && !temp_v4) {
    software_interrupt(0xbce1c6);
    software_interrupt(0xbee1c6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
