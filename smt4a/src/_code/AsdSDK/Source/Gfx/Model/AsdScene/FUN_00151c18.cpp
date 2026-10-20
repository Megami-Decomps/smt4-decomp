/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151c18` (_code @ 0x151c18, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

/* Supplied declaration required: FUN_001630d4. */
extern unsigned int FUN_00168188(void);
extern int FUN_00171acc(unsigned char *, unsigned int);


unsigned int * FUN_00151c18(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_14;
  
  puVar1 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,0xc,1);
  puVar1[1] = 0;
  *puVar1 = 0xffffffff;
  puVar1[2] = 0;
  temp_v0 = FUN_00168188();
  temp_v2 = 1;
  temp_v3 = 1;
  temp_v4 = 0;
  temp_v5 = 0;
  uStack_14 = 1;
  temp_v1 = FUN_00171acc(&temp_v2,temp_v0);
  puVar1[1] = temp_v1;
  temp_v1 = *(int *)(temp_v1 + 8);
  puVar1[2] = temp_v1;
  *(unsigned int *)(temp_v1 + 0xb8) = 2;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0x50) = 0x40a00000;
  *(unsigned int *)(temp_v1 + 0x48) = 0;
  *(unsigned int *)(temp_v1 + 0x4c) = 0x41700000;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xbc) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc0) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc4) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 200) = 0x3f800000;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xcc) = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0xd0) = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0xd4) = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0xd8) = 0x3f800000;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xe8) = 0x3c23d70a;
  *(unsigned int *)(temp_v1 + 0xec) = 0x3a83126f;
  *(unsigned int *)(temp_v1 + 0xf0) = 0x38d1b717;
  *(unsigned int *)(puVar1[2] + 0xf4) = 0x3f800000;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xf8) = 0x3f800000;
  *(unsigned int *)(temp_v1 + 0xfc) = 0x3fc90fdb;
  temp_v1 = puVar1[2];
  *(unsigned int *)(temp_v1 + 0xdc) = 0;
  *(unsigned int *)(temp_v1 + 0xe0) = 0;
  *(unsigned int *)(temp_v1 + 0xe4) = 0xbf800000;
  return puVar1;
}

} /* extern "C" */
