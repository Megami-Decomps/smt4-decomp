/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238aac` (_code @ 0x238aac, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


int FUN_00238aac(int *param_1,int param_2)

{
/* irregular: 1 goto(s) */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_1[2];
  temp_v3 = *param_1;
  do {
    if (temp_v0 >= 0xa40) {
LAB_00238b50:
      temp_v2 = param_1[2];
      temp_v3 = *param_1;
      temp_v0 = 0;
      if (temp_v0 < temp_v2) {
        do {
          temp_v1 = 0;
          temp_v4 = temp_v0;
          while ((temp_v4 < temp_v2 && (*(char *)(temp_v3 + temp_v0 + temp_v1) == '\0'))) {
            temp_v1 = temp_v1 + 1;
            if (temp_v1 == param_2) {
              for (temp_v2 = temp_v0; temp_v2 < param_2 + temp_v0; temp_v2 = temp_v2 + 1) {
                *(unsigned char *)(temp_v3 + temp_v2) = 1;
              }
              param_1[2] = param_2 + temp_v0;
              return param_1[1] + temp_v0 * 0x10;
            }
            temp_v4 = temp_v0 + temp_v1;
          }
          temp_v0 = temp_v0 + temp_v1 + 1;
        } while (temp_v0 < temp_v2);
      }
      return 0;
    }
    temp_v1 = 0;
    temp_v2 = temp_v0;
    while ((temp_v2 < 0xa40 && (*(char *)(temp_v3 + temp_v0 + temp_v1) == '\0'))) {
      temp_v1 = temp_v1 + 1;
      if (temp_v1 == param_2) {
        for (temp_v2 = temp_v0; temp_v2 < temp_v0 + param_2; temp_v2 = temp_v2 + 1) {
          *(unsigned char *)(temp_v3 + temp_v2) = 1;
        }
        param_1[2] = temp_v0 + param_2;
        temp_v3 = param_1[1] + temp_v0 * 0x10;
        if (temp_v3 != 0) {
          return temp_v3;
        }
        goto LAB_00238b50;
      }
      temp_v2 = temp_v0 + temp_v1;
    }
    temp_v0 = temp_v0 + temp_v1 + 1;
  } while( 1 );
}

} /* extern "C" */
