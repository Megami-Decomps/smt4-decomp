/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c270` (_code @ 0x10c270, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd430(void);
int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */
extern unsigned char DAT_004e315c; /* 0x4e315c */

/* Supplied declaration required: FUN_002bd430. */
/* Supplied declaration required: FUN_002c415c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0010c270(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e315c);
  for (temp_v0 = DAT_004e3154; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x70)) {
    if (temp_v0 == param_1) {
      temp_v0 = DAT_004e3154;
      if (DAT_004e3154 != 0) goto LAB_0010c2ac;
      break;
    }
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_002c415c();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_002bd430();
  }
  FUN_002c415c(param_1);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e315c);
  return;
  while (temp_v0 = *(int *)(temp_v0 + 0x70), temp_v0 != 0) {
LAB_0010c2ac:
    if (temp_v0 == param_1) {
      temp_v0 = *(int *)(param_1 + 0x74);
      if (temp_v0 != 0) {
        temp_v1 = *(int *)(param_1 + 0x70);
        *(int *)(temp_v0 + 0x70) = temp_v1;
        if (*(int *)(param_1 + 0x70) != 0) {
          *(int *)(temp_v1 + 0x74) = temp_v0;
        }
      }
      else {
        DAT_004e3154 = *(int *)(param_1 + 0x70);
        if (DAT_004e3154 != 0) {
          *(unsigned int *)(DAT_004e3154 + 0x74) = 0;
        }
        else {
          DAT_004e3154 = 0;
        }
      }
      break;
    }
  }
  DAT_004e3158 = DAT_004e3158 - 1;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_002c415c();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_002bd430();
  }
  FUN_002c415c(param_1);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e315c);
  return;
}

} /* extern "C" */
