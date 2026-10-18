/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8a30` (_code @ 0x1a8a30, 0x1d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_001a8c44; /* 0x1a8c44 */
extern unsigned char LAB_001d9294; /* 0x1d9294 */
extern unsigned char LAB_0021eee8; /* 0x21eee8 */
extern unsigned int *DAT_00447600; /* 0x447600 */

extern int FUN_002c09f4(unsigned int);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */


void FUN_001a8a30(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x30f4,1);
  puVar2 = &LAB_001a8c44;
  DAT_00447600 = puVar1;
  FUN_002c4a08(&LAB_001a8c44,2,0,0,&LAB_001d9294,&LAB_0021eee8,0,param_1);
  *puVar1 = (unsigned int)puVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[0xc0d] = 0;
  puVar1[0xc0e] = 0;
  puVar1[0xc0f] = 0;
  puVar1[0xc10] = 0;
  temp_v2 = 0;
  temp_v3 = 0x47c34f80;
  *(unsigned char *)(puVar1 + 0xc12) = 0;
  *(unsigned char *)((int)puVar1 + 0x3049) = 0;
  temp_v1 = 0;
  do {
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0xd) = 0;
    puVar1[temp_v1 * 0x60 + 0xe] = temp_v1;
    puVar1[temp_v1 * 0x60 + 0xf] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x10] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x11] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x12] = puVar1[temp_v1 * 0x60 + 0xf];
    puVar1[temp_v1 * 0x60 + 0x13] = puVar1[temp_v1 * 0x60 + 0x10];
    puVar1[temp_v1 * 0x60 + 0x14] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x15] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x16] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x17] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x18] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x19] = 0;
    puVar1[temp_v1 * 0x60 + 0x1a] = 0xffffffff;
    puVar1[temp_v1 * 0x60 + 0x1b] = 1;
    puVar1[temp_v1 * 0x60 + 0x1c] = temp_v3;
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0x21) = 0;
    puVar1[temp_v1 * 0x60 + 0x22] = 0;
    puVar1[temp_v1 * 0x60 + 0x23] = 0;
    puVar1[temp_v1 * 0x60 + 0x24] = 0;
    puVar1[temp_v1 * 0x60 + 0x25] = 0;
    puVar1[temp_v1 * 0x60 + 0x26] = 0;
    puVar1[temp_v1 * 0x60 + 0x27] = 0;
    puVar1[temp_v1 * 0x60 + 0x28] = 0;
    puVar1[temp_v1 * 0x60 + 0x29] = 0;
    puVar1[temp_v1 * 0x60 + 0x2a] = 0;
    puVar1[temp_v1 * 0x60 + 0x2b] = 1;
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0x2c) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x180 + 0xb1) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x180 + 0xb2) = 0;
    puVar1[temp_v1 * 0x60 + 0x2e] = 0;
    puVar1[temp_v1 * 0x60 + 0x2f] = 0;
    temp_v0 = FUN_002c09f4(100);
    puVar1[temp_v1 * 0x60 + 0x30] = temp_v0 + 0x1e;
    puVar1[temp_v1 * 0x60 + 0x31] = 0;
    puVar1[temp_v1 * 0x60 + 0x68] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0x5c) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x180 + 0x171) = 0;
    *(unsigned short *)(puVar1 + temp_v1 * 0x60 + 0x5b) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x180 + 0x16e) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x180 + 0x172) = 0;
    puVar1[temp_v1 * 0x60 + 0x5d] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0x5e) = 0;
    puVar1[temp_v1 * 0x60 + 0x5f] = temp_v2;
    puVar1[temp_v1 * 0x60 + 0x6a] = 0;
    puVar1[temp_v1 * 0x60 + 0x69] = 999;
    puVar1[temp_v1 * 0x60 + 0x6b] = 0;
    temp_v0 = temp_v1 + 1;
    *(unsigned char *)(puVar1 + temp_v1 * 0x60 + 0x6c) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x180 + 0x1b1) = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x20);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 + 1;
    puVar1[temp_v1 * 2 + 0xc13] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 2 + 0xc14) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 8 + 0x3051) = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x15);
  return;
}
