/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7a54` (_code @ 0x4b7a54, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019a7f4(int, unsigned int);
int FUN_0019c364(void);
int FUN_0019f548(unsigned int);
int FUN_00214da4(void);
int FUN_00281960(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0019f548. */
/* Supplied declaration required: FUN_00214da4. */
/* Supplied declaration required: FUN_00281960. */


void FUN_004b7a54(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x1130) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x1130) = 0;
  }
  if (*(int *)(param_1 + 0x1128) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1128) = 0;
  }
  if (*(int *)(param_1 + 0x112c) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x112c) = 0;
  }
  if (*(int *)(param_1 + 0x1158) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x1158) = 0;
  }
  if (*(int *)(param_1 + 0x1150) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1150) = 0;
  }
  if (*(int *)(param_1 + 0x1154) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x1154) = 0;
  }
  FUN_0019a7f4(0x18,*(unsigned int *)(param_1 + 0x90));
  FUN_00281960();
  if ((*(char *)(param_1 + 0x1214) != '\0') && ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x38)) == '\0')) {
    *(unsigned char *)(param_1 + 0x1214) = 0;
    FUN_0019f548(*(unsigned int *)(param_1 + 0x1218));
    temp_v1 = 0;
    do {
      temp_v0 = param_1 + temp_v1 * 4;
      if (*(int *)(temp_v0 + 0x121c) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v0 + 0x121c) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  if (*(char *)(param_1 + 0x1168) == '\0') {
    FUN_00214da4();
    return;
  }
  return;
}

} /* extern "C" */
