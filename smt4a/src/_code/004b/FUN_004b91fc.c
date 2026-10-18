/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b91fc` (_code @ 0x4b91fc, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001d1438. */
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_004931e0(void);
/* Supplied declaration required: FUN_004b7128. */
/* Supplied declaration required: FUN_004b7d88. */
extern unsigned long long FUN_004ba67c(int);
extern int FUN_004bb138(int);


void FUN_004b91fc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned long long temp_v3;
  
  temp_v0 = FUN_004bb138(param_1 + 0x1114);
  if (((temp_v0 != 0) && (temp_v0 = FUN_004931e0(), temp_v0 != 0)) &&
     (temp_v3 = FUN_004ba67c(param_1 + 0x9c), temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20), (int)temp_v3 != 0
     )) {
    temp_v1 = *(int *)(param_1 + 0x1138);
    if (temp_v1 != 0) {
      temp_v0 = *(int *)(param_1 + 0x113c);
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x1144) != 0;
      temp_v0 = 0;
      if (temp_v2) {
        temp_v0 = *(int *)(param_1 + 0x1148);
      }
      if (temp_v2 && temp_v0 != 0) {
        FUN_00275bc8();
        *(int *)(param_1 + 0x1140) = temp_v1;
        *(unsigned int *)(temp_v1 + 0x108) = 2;
        temp_v0 = *(int *)(param_1 + 0x1144);
        FUN_00275bc8(temp_v0,*(unsigned int *)(param_1 + 0x1148));
        *(int *)(param_1 + 0x114c) = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 2;
        if ((*(unsigned int *)(param_1 + 0x20) & 0x10) != 0) {
          FUN_001d1438(param_1 + 0x3c,param_1 + 0x42);
          FUN_004b7128(param_1);
          *(unsigned int *)(param_1 + 0x28) = 2;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffef;
          FUN_004b7d88(param_1);
          return;
        }
      }
    }
  }
  return;
}
