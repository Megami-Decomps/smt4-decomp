/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1358` (_code @ 0x2a1358, 0x2dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0029f2fc(); /* 0x29f2fc */
extern unsigned char LAB_002a1684; /* 0x2a1684 */
extern unsigned char LAB_002a1690; /* 0x2a1690 */
extern unsigned char LAB_002a16a4; /* 0x2a16a4 */
extern unsigned char LAB_002a16bc; /* 0x2a16bc */
extern unsigned char LAB_002e0560; /* 0x2e0560 */
extern unsigned char LAB_003162c8; /* 0x3162c8 */
extern int FUN_0032b04c(); /* 0x32b04c */
extern int FUN_0032b0d4(); /* 0x32b0d4 */
extern unsigned int DAT_00570280; /* 0x570280 */
extern unsigned int *DAT_00589170; /* 0x589170 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001630d4. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001cd24c. */
extern int FUN_002cf8d4(void);
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003fd63c. */
extern int FUN_0046c458(unsigned int, unsigned int);


void FUN_002a1358(unsigned char *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_001630d4(0x10000,0x100,0,0x260,1);
  temp_v2 = 0;
  DAT_00589170 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  *(unsigned char *)(puVar1 + 0xf) = 1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(unsigned char *)((int)puVar1 + 0x3f) = 0;
  *(unsigned char *)((int)puVar1 + 0x3d) = 0;
  *(unsigned char *)((int)puVar1 + 0x3e) = 0;
  puVar1[0x17] = 2;
  *(unsigned short *)(puVar1 + 0x13) = 0;
  *(unsigned short *)((int)puVar1 + 0x4e) = 0;
  FUN_001cd24c(puVar1 + 0x14);
  puVar1[0x10] = temp_v2;
  puVar1[0x11] = temp_v2;
  *(unsigned char *)((int)puVar1 + 0x5a) = 0;
  *(unsigned char *)(puVar1 + 0x18) = 0;
  *(unsigned char *)((int)puVar1 + 0x61) = 0;
  *(unsigned char *)((int)puVar1 + 99) = 0;
  *(unsigned char *)((int)puVar1 + 0x62) = 1;
  *(unsigned char *)((int)puVar1 + 0x72) = 0;
  *(unsigned char *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = temp_v2;
  *(unsigned char *)((int)puVar1 + 0x71) = 0;
  puVar1[0x25] = 0;
  *(unsigned char *)(puVar1 + 0x26) = 0;
  temp_v0 = FUN_002cf8d4();
  *(char *)(puVar1 + 0x24) = (char)temp_v0;
  if (temp_v0 != 0) {
    temp_v0 = FUN_001834a4(9,0x22);
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[5] = temp_v2;
    puVar1[6] = temp_v1;
    temp_v0 = FUN_001834a4(9,0x23);
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[7] = temp_v2;
    puVar1[8] = temp_v1;
    temp_v0 = FUN_001834a4(9,0x24);
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[9] = temp_v2;
    puVar1[10] = temp_v1;
    temp_v0 = FUN_001834a4(9,0x25);
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[0xb] = temp_v2;
    puVar1[0xc] = temp_v1;
    temp_v0 = FUN_001834a4(9,0x26);
    temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[0xd] = temp_v2;
    puVar1[0xe] = temp_v1;
    FUN_00342010();
    FUN_0031a400();
    *(unsigned char *)((int)puVar1 + 0x61) = 1;
  }
  temp_v0 = FUN_0046c458(DAT_00570280,0x534);
  if (temp_v0 != 0) {
    FUN_003fd63c(0x534,1,1);
  }
  else {
    FUN_003fd63c(0x534,0,1);
  }
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned char *)0x0) {
    *(unsigned char *)((int)puVar1 + 0x71) = *param_1;
    *(unsigned char *)(puVar1 + 4) = 0;
  }
  puVar3 = &LAB_002a1684;
  FUN_0014e38c(&LAB_002a1684,4,0,0,FUN_0029f2fc,FUN_0032b04c,0);
  *puVar1 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_002a1690,0x78,0,0,&LAB_002e0560,0,0,puVar3);
  FUN_0015155c(&LAB_002a16a4,0xd4,0,0,&LAB_003162c8,0,0,*puVar1);
  FUN_0015155c(&LAB_002a16bc,0xeb,0,0,FUN_0032b0d4,0,0,*puVar1);
  return;
}
