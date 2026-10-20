/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ba24` (_code @ 0x39ba24, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;


int FUN_0039ba24(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = (((short)(*(char *)(param_3 + 4) - 0x30) * 1000 + *(char *)(param_3 + 5) * 100 +
           *(char *)(param_3 + 6) * 10) - 0x14d0) + (int)*(char *)(param_3 + 7);
  if (*(char *)(param_3 + 10) == '\0') {
    puVar2 = (unsigned int *)((unsigned int)*(unsigned short *)(param_3 + 8) + param_3);
    if (temp_v0 >= 0x514) {
      temp_v1 = puVar2[6];
    }
    else {
      temp_v1 = *puVar2;
    }
    *param_1 = temp_v1;
    return 1;
  }
  if (*(char *)(param_3 + 10) != '\x01') {
    temp_v0 = 0;
  }
  else {
    temp_v5 = (unsigned int)*(unsigned short *)(param_3 + 8) + param_3;
    if (temp_v0 >= 0x514) {
      temp_v5 = temp_v5 + 0xf0;
    }
    else {
      temp_v5 = temp_v5 + 0xd8;
    }
    temp_v6 = 0x44c;
    if (temp_v0 >= 0x514) {
      temp_v2 = *(int *)(param_3 + 0xc) - 0xf0;
    }
    else {
      temp_v2 = *(int *)(param_3 + 0xc) - 0xd8;
    }
    if ((temp_v0 >= 1100) && (temp_v5 = temp_v5 + 4, temp_v0 >= 0x4b0)) {
      temp_v2 = temp_v2 - 4;
    }
    temp_v0 = 0;
    temp_v4 = 0;
    if (temp_v2 >> 5 != 0) {
      do {
        if (param_2 <= temp_v0) {
          return temp_v0;
        }
        if (0 < temp_v0) {
          temp_v6 = *(int *)(temp_v5 + temp_v4 * 0x20);
        }
        temp_v3 = 0;
        if (temp_v3 < temp_v0) {
          do {
            if (param_1[temp_v3] == temp_v6) goto LAB_0039bb0c;
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        param_1[temp_v0] = *(unsigned int *)(temp_v5 + temp_v4 * 0x20);
        temp_v0 = temp_v0 + 1;
LAB_0039bb0c:
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)(temp_v2 >> 5));
    }
  }
  return temp_v0;
}

} /* extern "C" */
