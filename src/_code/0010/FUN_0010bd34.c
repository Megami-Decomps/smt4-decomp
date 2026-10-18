/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bd34` (_code @ 0x10bd34, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_00464c04; /* 0x464c04 */

extern int FUN_001203d8(unsigned char *, unsigned int);
extern unsigned int FUN_002c31bc(void);
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0010bd34(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int uStack_3c;
  
  temp_v2 = 0;
  temp_v3 = 0x3e99999a;
  temp_v4 = 0x3f000000;
  temp_v5 = 0x3f800000;
  temp_v8 = 0x41200000;
  temp_v6 = 0x42c80000;
  temp_v7 = 0x459c4000;
  do {
    puVar1 = (unsigned int *)0x100;
    FUN_002c54f0(0x100,0x100,0,0x10,1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(char *)puVar1 = (char)temp_v2;
    *(unsigned char *)((int)puVar1 + 1) = 0;
    temp_v0 = FUN_002c31bc();
    temp_v9 = 1;
    temp_v12 = 0;
    uStack_3c = 1;
    temp_v10 = 1;
    temp_v11 = 0;
    temp_v1 = FUN_001203d8(&temp_v9,temp_v0);
    puVar1[1] = temp_v1;
    temp_v1 = *(int *)(temp_v1 + 8);
    puVar1[2] = temp_v1;
    *(unsigned int *)(temp_v1 + 0xb4) = temp_v3;
    *(unsigned int *)(temp_v1 + 0xb8) = temp_v3;
    *(unsigned int *)(temp_v1 + 0xbc) = temp_v4;
    *(unsigned int *)(temp_v1 + 0xc0) = temp_v5;
    temp_v1 = *(int *)(puVar1[2] + 200);
    if (temp_v1 != 0) {
      puVar4 = (unsigned int *)(puVar1[2] + 200 + temp_v1);
    }
    else {
      puVar4 = (unsigned int *)0x0;
    }
    puVar1[3] = (unsigned int)puVar4;
    *puVar4 = 3;
    *(unsigned int *)(puVar1[3] + 0xc) = temp_v8;
    *(unsigned int *)(puVar1[3] + 4) = temp_v6;
    *(unsigned int *)(puVar1[3] + 8) = temp_v7;
    *(unsigned int **)(DAT_00464c04 + temp_v2 * 4) = puVar1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}
