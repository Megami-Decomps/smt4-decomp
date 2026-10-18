/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad5fc` (_code @ 0x3ad5fc, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_003ad6d8; /* 0x3ad6d8 */

extern int *FUN_0022cb04(unsigned int);
/* Supplied declaration required: FUN_00289b4c. */
extern int FUN_00289fc0(void);
/* Supplied declaration required: FUN_0028c2a8. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029ea28. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_003ad5fc(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  FUN_00289b4c();
  temp_v0 = FUN_00289fc0();
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0x1c) = 1;
    FUN_0028dc54();
    FUN_0028d974();
  }
  piVar2 = (int *)FUN_0022cb04(0xd);
  if (*piVar2 == 0) {
    *(unsigned char *)(param_1 + 0x1d) = 1;
  }
  piVar2 = (int *)FUN_0022cb04(0x1d);
  if (*piVar2 == 0) {
    FUN_002c4e28(0x1d);
    temp_v0 = 0;
    do {
      FUN_002c5ab8(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    *(unsigned char *)(param_1 + 0x1e) = 1;
  }
  FUN_0028c2a8();
  FUN_0029a3c4(2);
  FUN_0029eb14(1);
  FUN_0029ea28();
  FUN_002a0f68(1);
  FUN_00297704(&LAB_003ad6d8,param_1 + 0x598,0);
  FUN_00297704(0x3ad6e8,param_1 + 0x59c,0);
  return;
}
