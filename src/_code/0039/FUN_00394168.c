/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394168` (_code @ 0x394168, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int *FUN_002b59b0(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */
extern int FUN_0038c030(int);


int FUN_00394168(int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  
  *param_2 = param_3;
  param_2[1] = param_3;
  temp_v1 = FUN_0038c030(param_1 + 0x9bc);
  FUN_002c4938(temp_v1 - 0x9bc,0x80);
  FUN_002c4938(temp_v1 - 0x93c,0x100);
  FUN_002c4938(temp_v1 - 0x83c,0x800);
  puVar3 = (unsigned int *)FUN_002b59b0(temp_v3,0x7b2,1,1,param_3,param_3,param_3,param_3);
  temp_v2 = puVar3[1];
  *(unsigned int *)(temp_v1 - 0x1c) = *puVar3;
  *(unsigned int *)(temp_v1 - 0x18) = temp_v2;
  temp_v0 = (unsigned char)param_3;
  *(unsigned char *)(temp_v1 - 0x10) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xf) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xe) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xd) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xc) = temp_v0;
  *(unsigned char *)(temp_v1 - 0xb) = temp_v0;
  *(unsigned char *)(temp_v1 - 10) = temp_v0;
  *(unsigned char *)(temp_v1 - 9) = temp_v0;
  return temp_v1 - 0x9bc;
}
