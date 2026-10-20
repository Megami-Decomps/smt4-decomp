/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ad94` (_code @ 0x34ad94, 0x22c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023adf4(unsigned int, int, int);
int FUN_0023e388(...);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int);
int FUN_002929d8(unsigned char [48], int);
int FUN_0031052c(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(int, unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(int, unsigned char [48]);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Supplied declaration required: FUN_0023adf4. */
/* Supplied declaration required: FUN_0023e388. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002929d8. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_0031052c. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_0034ad94(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1 [48];
  float temp_v2;
  float fStack_14;
  float temp_v3;
  
  temp_v0 = *(int *)(param_1 + 8) - 1;
  *(int *)(param_1 + 8) = temp_v0;
  if (temp_v0 == 0) {
    puVar2 = *(unsigned int **)(param_1 + 4);
    *puVar2 = *puVar2 | 2;
    *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    FUN_0028c640(*(unsigned int *)(*(int *)(param_1 + 4) + 8),0,param_1 + 0x90);
    FUN_0028c618(*(unsigned int *)(*(int *)(param_1 + 4) + 8),0);
    FUN_0023adf4(*(unsigned int *)(*(int *)(param_1 + 4) + 8),0,param_1 + 0xa8);
    return;
  }
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x5c);
  temp_v3 = -*(float *)(param_1 + 0x14);
  temp_v2 = -*(float *)(param_1 + 0xc);
  fStack_14 = -*(float *)(param_1 + 0x10);
  if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
    DAT_004efd6c = 0x3f800000;
    DAT_004efd70 = 0;
    DAT_004efd74 = 0;
    DAT_004efd78 = 0;
    DAT_004efd7c = 0;
    DAT_004efd80 = 0x3f800000;
    DAT_004efd84 = 0;
    DAT_004efd88 = 0;
    DAT_004efd8c = 0;
    DAT_004efd90 = 0;
    DAT_004efd94 = 0x3f800000;
    DAT_004efd98 = 0;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x60,&DAT_004efd6c);
  FUN_0023e388(param_1 + 0x60,&temp_v2);
  FUN_002929d8(temp_v1,1);
  nn_math_ARMv6_MTX34MultAsm(param_1 + 0x60,temp_v1);
  FUN_0023e388(param_1 + 0x60,param_1 + 0xc);
  FUN_0023e388(param_1 + 0x60,param_1 + 0x18);
  FUN_0031052c(*(unsigned int *)(*(int *)(param_1 + 4) + 8),param_1 + 0x60);
  return;
}

} /* extern "C" */
