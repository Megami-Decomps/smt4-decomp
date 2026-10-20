/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00404974` (_code @ 0x404974, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(unsigned int, int);
int FUN_001acf98(unsigned int, unsigned int);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_002e08b0(int, int);
int FUN_00403a34(int, int);
int FUN_0040a844(int, int);
int FUN_0040a864(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002e08b0. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_00403a34. */
extern int FUN_0040a7cc(unsigned short);
extern int FUN_0040a7f8(unsigned short);
/* Supplied declaration required: FUN_0040a844. */
/* Supplied declaration required: FUN_0040a864. */


void FUN_00404974(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned char *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x664) + 6);
  if (temp_v1 != 0) {
    *(unsigned int *)(param_1 + 0x1c) = temp_v1;
    temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x664) + 8);
    *(unsigned int *)(param_1 + 0x20) = temp_v2;
    *(unsigned char *)(param_1 + 0x104) = 1;
    *(unsigned char *)(param_1 + 0x24) = 0;
    temp_v0 = FUN_00341940(temp_v1);
    if (temp_v0 == 0) {
      FUN_0013f1b8(temp_v1,0);
      *(unsigned char *)(param_1 + 0x24) = 1;
    }
    FUN_001acf98(temp_v1,temp_v2);
  }
  FUN_00403a34(param_1,**(unsigned short **)(param_1 + 0x664));
  FUN_00203b40(param_1 + 0x28,*(unsigned int *)(param_1 + 0x684),8,1,0,1);
  FUN_002e08b0(param_1 + 0x28,0);
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  temp_v0 = FUN_0040a7f8(**(unsigned short **)(param_1 + 0x664));
  if ((temp_v0 == 0) && (temp_v0 = FUN_0040a7cc(**(unsigned short **)(param_1 + 0x664)), temp_v0 == 0)) {
    return;
  }
  FUN_0040a864(**(unsigned short **)(param_1 + 0x664),0);
  FUN_0040a844(**(unsigned short **)(param_1 + 0x664),0);
  return;
}

} /* extern "C" */
