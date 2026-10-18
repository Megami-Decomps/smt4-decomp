/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be370` (_code @ 0x2be370, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern unsigned long long FUN_002ae3c4(void);
/* Supplied declaration required: FUN_002b23bc. */
/* Supplied declaration required: func_0x006bedfc. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002be93e) overlaps instruction at (ram,0x002be93c)
    */
/* WARNING: Removing unreachable block (ram,0x002bee8c) */
/* WARNING: Removing unreachable block (ram,0x002bee94) */
/* WARNING: Removing unreachable block (ram,0x002beea0) */
/* WARNING: Removing unreachable block (ram,0x002beeb0) */
/* WARNING: Removing unreachable block (ram,0x002beeb4) */
/* WARNING: Removing unreachable block (ram,0x002bdfec) */
/* WARNING: Removing unreachable block (ram,0x002bee84) */
/* WARNING: Removing unreachable block (ram,0x00138a1c) */
/* WARNING: Removing unreachable block (ram,0x00138a4c) */
/* WARNING: Removing unreachable block (ram,0x00138a5c) */
/* WARNING: Removing unreachable block (ram,0x00138a6c) */
/* WARNING: Removing unreachable block (ram,0x00138a80) */
/* WARNING: Removing unreachable block (ram,0x00138aa8) */
/* WARNING: Removing unreachable block (ram,0x00138aac) */
/* WARNING: Removing unreachable block (ram,0x00138ab0) */
/* WARNING: Removing unreachable block (ram,0x00138ab4) */
/* WARNING: Removing unreachable block (ram,0x00138ac4) */
/* WARNING: Removing unreachable block (ram,0x00138ad8) */
/* WARNING: Removing unreachable block (ram,0x00138b00) */
/* WARNING: Removing unreachable block (ram,0x00138b04) */
/* WARNING: Removing unreachable block (ram,0x00138b08) */
/* WARNING: Removing unreachable block (ram,0x00138b14) */
/* WARNING: Removing unreachable block (ram,0x00138b24) */
/* WARNING: Removing unreachable block (ram,0x00138b3c) */
/* WARNING: Removing unreachable block (ram,0x00138b44) */
/* WARNING: Removing unreachable block (ram,0x00138b4c) */
/* WARNING: Removing unreachable block (ram,0x00138b54) */
/* WARNING: Removing unreachable block (ram,0x00138b64) */
/* WARNING: Removing unreachable block (ram,0x00138b68) */
/* WARNING: Removing unreachable block (ram,0x00138b70) */
/* WARNING: Removing unreachable block (ram,0x00138b74) */
/* WARNING: Removing unreachable block (ram,0x00138b80) */
/* WARNING: Removing unreachable block (ram,0x00138b9c) */
/* WARNING: Removing unreachable block (ram,0x002bedba) */

void FUN_002be370(void)

{
/* irregular: 3 unstructured edge(s); irregular input(s): in_cr0, in_cr1, in_cr3, in_cr6, in_cr8, in_lr, in_r3, in_s0, in_s2; 52 native warning(s); review required */
  romwright_code *pcVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *in_r3;
  unsigned short *puVar6;
  int *piVar7;
  unsigned short *in_lr;
  unsigned int temp_v3;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_s0;
  unsigned int in_s2;
  unsigned long long temp_v4;
  unsigned char uStack00000128;
  unsigned char temp_v5 [80];
  unsigned int uStack_2c;
  unsigned char temp_v6 [8];
  
  piVar7 = (int *)temp_v6;
  temp_v3 = 0x2be398;
  temp_v4 = FUN_002ae3c4();
  puVar4 = (unsigned int *)((unsigned long long)temp_v4 >> 0x20);
  puVar6 = (unsigned short *)temp_v4;
  switch(puVar6) {
  case (unsigned short *)0x0:
    *puVar4 = 0;
    puVar4[1] = (unsigned int)puVar6;
    *(unsigned short **)puVar6 = puVar6;
    *in_r3 = 0;
    in_r3[1] = (unsigned int)puVar6;
    temp_v0 = (unsigned int)puVar6 >> 0x10;
    piVar2 = (int *)((int)temp_v0 >> 0x20);
    in_lr = puVar6;
    piVar7 = (int *)temp_v6;
    break;
  case (unsigned short *)0x1:
    VectorFloatToUnsigned(in_s2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned short *)0x2:
    (*(unsigned long long *)((unsigned char *)&temp_v5 + 76)) = romwright_piece_4_4(temp_v3,(*(unsigned int *)((unsigned char *)&temp_v5 + 76)));
                    /* WARNING: Does not return */
    pcVar1 = (romwright_code *)software_udf(0x86,0x2bf754);
    (*pcVar1)();
  case (unsigned short *)0x3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned short *)0x4:
    puVar4 = (unsigned int *)0x20;
    piVar7 = (int *)temp_v5;
    FUN_002b23bc(piVar7 + 2,puVar4,piVar7[0x20]);
    piVar2 = piVar7 + 10;
    *piVar7 = (int)(piVar7 + 2);
    FUN_002b23bc(piVar2,0x20,piVar7 + 2,piVar7 + 1);
    break;
  case (unsigned short *)0x5:
    in_lr = (unsigned short *)0x0;
    FUN_002b23bc(piVar7 + 2,puVar4,piVar7[0x20]);
    piVar2 = piVar7 + 10;
    *piVar7 = (int)(piVar7 + 2);
    FUN_002b23bc(piVar2,0x20,piVar7 + 2,piVar7 + 1);
    break;
  case (unsigned short *)0x6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (unsigned short *)0x7:
    coprocessor_storelong(0,in_cr0,&uStack00000128);
    func_0x006bedfc((unsigned int)puVar6 & ((int)puVar6 << 4));
    temp_v2 = temp_v1 << 1;
    *(int *)(temp_v1 + 8) = temp_v2;
    puVar6 = (unsigned short *)(temp_v2 >> 0x1f);
    *(char *)(temp_v1 + 2) = (char)temp_v2;
    coprocessor_store(0,in_cr1,500);
    temp_v0 = temp_v1;
    uRam00000038 = in_s0;
    uRam00000048 = in_s0;
    uRam00000058 = in_s0;
    uRam00000068 = in_s0;
    piVar2 = (int *)((int)temp_v0 >> 0x20);
    in_lr = puVar6;
    piVar7 = (int *)temp_v6;
    break;
  case (unsigned short *)0x8:
    piVar2 = (int *)((int)puVar6 << ((unsigned int)puVar6 & 0xff));
    in_lr = (unsigned short *)0x0;
    piVar7 = (int *)temp_v6;
    break;
  case (unsigned short *)0x9:
  case (unsigned short *)0xa:
    *puVar6 = (short)temp_v4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(unsigned int *)(puVar6 + 0x41) = 0;
    return;
  }
  coprocessor_storelong(0,in_cr1,(unsigned char *)((int)piVar7 + 0x100));
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,piVar7);
  if (-1 >= (int)((unsigned int)piVar2 & (unsigned int)in_lr)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
