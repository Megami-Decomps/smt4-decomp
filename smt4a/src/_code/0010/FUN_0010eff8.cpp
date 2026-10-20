/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010eff8` (_code @ 0x10eff8, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012736c(int, unsigned int, int, unsigned int, unsigned int, int, unsigned char *, int, int);
int inflateInitDefault(unsigned int, unsigned char *, int);
int sysMemClear(int, int);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_00103563; /* 0x103563 */
extern unsigned char LAB_0010356f; /* 0x10356f */
extern unsigned char LAB_0010f064; /* 0x10f064 */

/* Supplied declaration required: FUN_0012736c. */
/* Supplied declaration required: inflateInitDefault. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_002e760a(unsigned int);


void FUN_0010eff8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  temp_v0 = FUN_002e760a(0x70);
  if (temp_v0 != 0) {
    sysMemClear(temp_v0,0x70);
  }
  *(int *)(param_1 + 0x120) = temp_v0;
  *(unsigned char **)(temp_v0 + 0x20) = &LAB_00103563;
  *(unsigned char **)(*(int *)(param_1 + 0x120) + 0x24) = &LAB_0010356f;
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x28) = 0;
  inflateInitDefault(*(unsigned int *)(param_1 + 0x120),&LAB_0010f064,0x38);
  *(unsigned char **)(*(int *)(param_1 + 0x120) + 0x58) = &LAB_00103563;
  *(unsigned char **)(*(int *)(param_1 + 0x120) + 0x5c) = &LAB_0010356f;
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x60) = 0;
  FUN_0012736c(*(int *)(param_1 + 0x120) + 0x38,0xffffffff,8,param_2,param_3,0,&LAB_0010f064,0x38,
               temp_v1);
  return;
}

} /* extern "C" */
