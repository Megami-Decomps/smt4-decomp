/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152618` (_code @ 0x152618, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int asdMemoryGetDefaultAllocator(void);
extern int FUN_00171d7c(unsigned char *, unsigned int);
extern unsigned int FUN_001931d8(int);


unsigned int * FUN_00152618(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_1c;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0xc,1);
  puVar1[1] = 0;
  *puVar1 = 0xffffffff;
  puVar1[2] = 0;
  temp_v0 = asdMemoryGetDefaultAllocator();
  temp_v4 = 1;
  temp_v5 = 1;
  temp_v6 = 0;
  temp_v7 = 0;
  uStack_1c = 1;
  temp_v1 = FUN_00171d7c(&temp_v4,temp_v0);
  puVar1[1] = temp_v1;
  temp_v1 = *(int *)(temp_v1 + 8);
  puVar1[2] = temp_v1;
  *(unsigned int *)(temp_v1 + 0xb8) = 0;
  temp_v1 = puVar1[2];
  temp_v3 = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0x10c) = 0xbed105eb;
  *(unsigned int *)(temp_v1 + 0x110) = 0xbf5105eb;
  *(unsigned int *)(temp_v1 + 0x114) = 0xbed105eb;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xbc) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc0) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc4) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 200) = 0x3f800000;
  temp_v0 = FUN_001931d8(puVar1[2] + 0xbc);
  *(unsigned int *)(puVar1[2] + 0xfc) = temp_v0;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xcc) = temp_v3;
  *(unsigned int *)(temp_v1 + 0xd0) = temp_v3;
  *(unsigned int *)(temp_v1 + 0xd4) = temp_v3;
  *(unsigned int *)(temp_v1 + 0xd8) = temp_v3;
  temp_v0 = FUN_001931d8(puVar1[2] + 0xcc);
  temp_v2 = 0x3f4ccccd;
  *(unsigned int *)(puVar1[2] + 0x100) = temp_v0;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xdc) = 0x3f4ccccd;
  *(unsigned int *)(temp_v1 + 0xe0) = 0x3f4ccccd;
  *(unsigned int *)(temp_v1 + 0xe4) = 0x3f4ccccd;
  *(unsigned int *)(temp_v1 + 0xe8) = temp_v3;
  temp_v0 = FUN_001931d8(puVar1[2] + 0xdc);
  *(unsigned int *)(puVar1[2] + 0x104) = temp_v0;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xec) = temp_v2;
  *(unsigned int *)(temp_v1 + 0xf0) = temp_v2;
  *(unsigned int *)(temp_v1 + 0xf4) = temp_v2;
  *(unsigned int *)(temp_v1 + 0xf8) = temp_v3;
  temp_v0 = FUN_001931d8(puVar1[2] + 0xec);
  *(unsigned int *)(puVar1[2] + 0x108) = temp_v0;
  return puVar1;
}

} /* extern "C" */
