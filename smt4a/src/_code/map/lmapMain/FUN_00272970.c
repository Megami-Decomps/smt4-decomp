/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272970` (_code @ 0x272970, 0x320 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00272d14; /* 0x272d14 */
extern unsigned char LAB_00272d24; /* 0x272d24 */
extern int FUN_00276264(); /* 0x276264 */
extern int FUN_002bc62c(); /* 0x2bc62c */
extern unsigned char LAB_00315cf4; /* 0x315cf4 */
extern unsigned char LAB_0033feb4; /* 0x33feb4 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int *DAT_00580238; /* 0x580238 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern unsigned char DAT_005f185b; /* 0x5f185b */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002442ac. */
/* Supplied declaration required: FUN_002c23cc. */
/* Supplied declaration required: FUN_00482ab0. */


void FUN_00272970(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int temp_v3;
  
  puVar3 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x9370,1);
  DAT_00580238 = puVar3;
  temp_v1 = FUN_00162e8c();
  FUN_002c23cc(1);
  *(unsigned char *)((int)puVar3 + 9) = 0;
  *(unsigned char *)((int)puVar3 + 10) = 0;
  *(unsigned char *)((int)puVar3 + 0xb) = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar2 = DAT_00580238;
  if (DAT_00580238[0x33] != 0) {
    DAT_00580238[0x33] = 0;
    puVar2[0x34] = 0;
    puVar2[0x35] = 0;
  }
  puVar3[0x32] = 0x3f800000;
  puVar3[0x31] = 0x3f800000;
  puVar3[0x10] = 0x65;
  *(unsigned short *)(puVar3 + 0x13) = 0;
  *(unsigned short *)((int)puVar3 + 0x4e) = 0;
  puVar3[0x12] = 1;
  temp_v3 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x1c) = 0xc40a8000;
  *(unsigned int *)(temp_v3 + 0x20) = 0x3c23d70a;
  *(unsigned int *)(temp_v3 + 0x24) = 0xc5956000;
  *(unsigned int *)(temp_v3 + 0x28) = 0xc40a8000;
  *(unsigned int *)(temp_v3 + 0x2c) = 0x3c23d70a;
  *(unsigned int *)(temp_v3 + 0x30) = *(unsigned int *)(temp_v3 + 0x24);
  *(unsigned int *)(temp_v3 + 0x34) = 0xc40a8000;
  *(unsigned int *)(temp_v3 + 0x38) = 0x3c23d70a;
  *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v3 + 0x24);
  *(unsigned int *)(temp_v3 + 0x4c) = 0x43340000;
  *(unsigned int *)(temp_v3 + 0x50) = 0x43340000;
  *(unsigned int *)(temp_v3 + 0x15c) = 0x447a0000;
  *(unsigned int *)(temp_v3 + 0x160) = 0x453b8000;
  puVar3[0x277] = 0;
  FUN_00482ab0(puVar3 + 0x3d);
  puVar3[0x37] = 0;
  *(unsigned char *)(puVar3 + 0x38) = 0;
  puVar3[0x292] = 0;
  puVar3[0x293] = 0;
  puVar3[0x294] = 0;
  puVar3[0x24c0] = 0;
  puVar3[0x24c1] = 0x42c80000;
  puVar3[0x24c2] = 0x469c4000;
  puVar3[0x24c3] = 0x41200000;
  puVar3[0x27b] = 0;
  puVar3[0x27c] = 0;
  puVar3[0x27d] = 0;
  puVar3[0x27e] = 0;
  puVar3[0x27f] = 0;
  puVar3[0x280] = 0;
  puVar3[0x28b] = 0;
  puVar3[0x28c] = 0;
  puVar3[0x28d] = 0;
  puVar3[0x28e] = 0;
  puVar3[0x2b6] = 0;
  puVar3[0x2b7] = 0;
  puVar3[0x13bd] = 0;
  puVar3[0x2b9] = 0;
  puVar3[0x13be] = 0;
  temp_v2 = 0;
  *(unsigned char *)(puVar3 + 0x2b5) = 0;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v2 + 2;
    puVar3[temp_v3 + 0x295] = 0;
    puVar3[temp_v3 + 0x296] = 0;
    temp_v3 = temp_v3 + 2;
  } while (temp_v2 < 0x20);
  temp_v2 = 0x80;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v2 - 1;
    *(unsigned char *)(puVar3 + temp_v3 * 0x22 + 0x2de) = 0;
    *(unsigned char *)((int)puVar3 + temp_v3 * 0x88 + 0xb79) = 0;
    *(unsigned char *)((int)puVar3 + temp_v3 * 0x88 + 0xb7a) = 0;
    temp_v3 = temp_v3 + 1;
  } while (temp_v2 != 0);
  temp_v3 = 0;
  temp_v2 = 0x80;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v0 = temp_v3 * 0x88;
    *(unsigned char *)(puVar3 + temp_v3 * 0x22 + 0x13e1) = 0;
    *(unsigned char *)((int)puVar3 + temp_v3 * 0x88 + 0x4f85) = 0;
    temp_v3 = temp_v3 + 1;
    *(unsigned char *)((int)puVar3 + temp_v0 + 0x4f86) = 0;
  } while (temp_v2 != 0);
  *(unsigned char *)(puVar3 + 0x276) = 0;
  *(unsigned char *)(puVar3 + 0x27a) = 0;
  puVar3[0x24d5] = 0;
  *(unsigned char *)((int)puVar3 + 0xe1) = 0;
  puVar3[0x39] = 0x38;
  puVar3[0x3a] = 0x42200000;
  puVar3[0x24d7] = 0;
  puVar3[0x24d6] = 0;
  FUN_002442ac();
  *(unsigned char *)(temp_v1 + 0x7c4) = 0;
  *(unsigned int *)(temp_v1 + 0x15d0) = 0;
  DAT_005f185b = 0;
  DAT_005f161d = 0;
  *(unsigned char *)(puVar3 + 0x24d8) = 0;
  *(unsigned char *)((int)puVar3 + 0x9361) = 0;
  *(unsigned char *)((int)puVar3 + 0x9362) = 0;
  *(unsigned char *)((int)puVar3 + 0x9363) = 0;
  *(unsigned char *)(puVar3 + 0x24d9) = 0;
  *(unsigned char *)((int)puVar3 + 0x9365) = 0;
  *(unsigned char *)((int)puVar3 + 0x9366) = 0;
  *(unsigned char *)((int)puVar3 + 0x9367) = 0;
  *(unsigned char *)(puVar3 + 0x24da) = 0;
  *(unsigned char *)((int)puVar3 + 0x9369) = 0;
  *(unsigned char *)((int)puVar3 + 0x936a) = 0;
  puVar3[0x3c] = 0;
  puVar3[0x3b] = 0;
  puVar3[0x24db] = DAT_0056fcc0;
  puVar3[0x2b8] = 0;
  puVar3[0x13bf] = 0;
  *(unsigned char *)(puVar3 + 2) = 0;
  puVar6 = &LAB_00272d14;
  FUN_0014e38c(&LAB_00272d14,4,0,0,FUN_00276264,&LAB_00315cf4,0);
  *puVar3 = (unsigned int)puVar6;
  puVar7 = &LAB_00272d24;
  FUN_0015155c(&LAB_00272d24,0x72,0,0,FUN_002bc62c,&LAB_0033feb4,0,puVar6);
  puVar3[1] = (unsigned int)puVar7;
  return;
}
