/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1ae8` (_code @ 0x2d1ae8, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00447060; /* 0x447060 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00264670. */
/* Supplied declaration required: FUN_00266704. */
/* Supplied declaration required: FUN_002668cc. */
/* Supplied declaration required: FUN_00266c58. */
/* Supplied declaration required: FUN_0027054c. */
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027b524. */
extern char *FUN_0027d9b8(void);
/* Supplied declaration required: FUN_0027da20. */


void FUN_002d1ae8(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00447060;
  FUN_0027da20(*(unsigned int *)(DAT_00447060 + 0x40),param_1,param_2);
  pcVar3 = (char *)FUN_0027d9b8();
  FUN_00276c24((int)*pcVar3,(int)pcVar3[1],pcVar3[2]);
  *(unsigned int *)(temp_v0 + 0x48) = param_1;
  temp_v1 = DAT_00447e88;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_0049f920 = param_1;
  *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v1 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x30) = *(unsigned int *)(temp_v1 + 0x24);
  *(unsigned int *)(temp_v1 + 0x4c) = 0x43340000;
  *(unsigned int *)(temp_v1 + 0x50) = 0x43340000;
  *(unsigned int *)(temp_v1 + 0x34) = *(unsigned int *)(temp_v1 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x38) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x24);
  FUN_0027054c();
  FUN_0027b524(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x48));
  FUN_00266c58();
  FUN_00264670(temp_v0 + 0xec);
  FUN_002668cc(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
  FUN_00266704(temp_v0 + 0xec);
  temp_v0 = DAT_00447060;
  if (*(int *)(DAT_00447060 + 0xcc) != 3) {
    *(unsigned int *)(DAT_00447060 + 0xcc) = 3;
    *(unsigned int *)(temp_v0 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  FUN_00276c24(0xffffffff,0xffffffff);
  return;
}
