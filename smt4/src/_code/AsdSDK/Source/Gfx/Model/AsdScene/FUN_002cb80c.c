/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb80c` (_code @ 0x2cb80c, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_0011d9c4(unsigned char *, unsigned int);
extern unsigned int FUN_002c2ff0(void);
extern unsigned int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int nw_ut_FloatColor_ToPicaU32(int);


unsigned int * FUN_002cb80c(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_14;
  
  puVar1 = (unsigned int *)FUN_002c5300(0x100,0x100,0,0xc,1);
  puVar1[1] = 0;
  *puVar1 = 0xffffffff;
  puVar1[2] = 0;
  temp_v0 = FUN_002c2ff0();
  temp_v2 = 1;
  temp_v3 = 1;
  temp_v4 = 0;
  temp_v5 = 0;
  uStack_14 = 1;
  temp_v1 = FUN_0011d9c4(&temp_v2,temp_v0);
  puVar1[1] = temp_v1;
  temp_v1 = *(int *)(temp_v1 + 8);
  puVar1[2] = temp_v1;
  *(unsigned int *)(temp_v1 + 0xb8) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xbc) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc0) = 0x3e4ccccd;
  *(unsigned int *)(temp_v1 + 0xc4) = 0x3f800000;
  temp_v0 = nw_ut_FloatColor_ToPicaU32(puVar1[2] + 0xb8);
  *(unsigned int *)(puVar1[2] + 200) = temp_v0;
  return puVar1;
}
