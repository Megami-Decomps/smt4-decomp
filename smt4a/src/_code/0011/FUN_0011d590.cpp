/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d590` (_code @ 0x11d590, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0055a9c8; /* 0x55a9c8 */
extern unsigned char DAT_0055ad6c; /* 0x55ad6c */

extern int *FUN_002e4e86(int *, unsigned int *);
extern unsigned int *FUN_002e6dac(void);
extern unsigned int FUN_00310f8c(unsigned int, int *);


void FUN_0011d590(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int *piVar5;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_18;
  
  piVar5 = (int *)(param_1 + 2);
  *param_1 = (unsigned int)&DAT_0055ad6c;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  temp_v2 = 0;
  temp_v3 = param_3;
  uStack_18 = param_4;
  temp_v3 = FUN_00310f8c(0,piVar5);
  piVar1 = (int *)FUN_002e4e86(&temp_v2,(unsigned int *)&temp_v3);
  temp_v0 = *piVar1;
  puVar3 = (unsigned int *)FUN_002e6dac();
  *piVar5 = (int)puVar3;
  for (temp_v1 = temp_v2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    puVar3 = puVar3 + 2;
  }
  param_1[4] = *piVar5 + temp_v0 * 8;
  param_1[3] = *piVar5 + temp_v2 * 8;
  *param_1 = (unsigned int)&DAT_0055a9c8;
  return;
}

} /* extern "C" */
