/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012350c` (_code @ 0x12350c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f73e4(void);
int FUN_002f73fc(void);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int sizeWithHeaderAligned(unsigned int);
/* Supplied declaration required: FUN_002f73e4. */
/* Supplied declaration required: FUN_002f73fc. */
extern int __aeabi_uidivmod(unsigned int, unsigned int);


unsigned int FUN_0012350c(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if ((unsigned int)param_1[2] < param_2) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
    if (param_1[4] != 0) {
      FUN_002f73e4();
    }
    temp_v6 = 0;
    temp_v5 = param_1[1];
    for (temp_v4 = 0; temp_v4 < temp_v5; temp_v4 = temp_v4 + 1) {
      if (param_2 <= *(unsigned int *)(*param_1 + temp_v4 * 0x34 + 8)) {
        temp_v3 = *param_1 + temp_v4 * 0x34;
        temp_v1 = sizeWithHeaderAligned(*(unsigned int *)(temp_v3 + 8));
        temp_v2 = __aeabi_uidivmod(*(unsigned int *)(temp_v3 + 4),temp_v1);
        temp_v6 = (temp_v2 - *(int *)(temp_v3 + 0xc)) + temp_v6;
        if (param_3 <= temp_v6) {
          temp_v7 = 1;
          temp_v0 = 0;
          goto LAB_00123572;
        }
      }
    }
    temp_v3 = *param_1 + (temp_v5 * 0x34 - 0x34);
    *(int *)(temp_v3 + 0x30) = *(int *)(temp_v3 + 0x30) + 1;
    temp_v0 = 1;
LAB_00123572:
    *(unsigned char *)((int)param_1 + 0xd) = temp_v0;
    if (param_1[4] != 0) {
      FUN_002f73fc();
    }
  }
  return temp_v7;
}

} /* extern "C" */
