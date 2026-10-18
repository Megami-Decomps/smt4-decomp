/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d98e0` (_code @ 0x3d98e0, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_7_stack;

/* Supplied declaration required: FUN_001c2b48. */
extern int FUN_00221b70(int);
/* Supplied declaration required: FUN_00224ab0. */
/* Supplied declaration required: FUN_00244e1c. */
/* Supplied declaration required: FUN_003947cc. */
/* Supplied declaration required: FUN_003dd680. */


void FUN_003d98e0(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [6];
  
  if (param_2 != 0xff) {
    temp_v2[0] = 0;
    if ((param_6 != 6) && (-1 < param_4)) {
      FUN_00224ab0(temp_v2,param_4,param_5);
    }
    FUN_003dd680(param_1,param_6,param_3,param_4);
    temp_v0 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 4;
      if (*(int *)(temp_v1 + 200) == 0) {
        temp_v0 = param_1 + temp_v0 * 4 + 200;
        goto LAB_003d998c;
      }
      if (*(int *)(temp_v1 + 0xcc) == 0) {
        temp_v0 = param_1 + temp_v0 * 4 + 0xcc;
        goto LAB_003d998c;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0x32);
    temp_v0 = 0;
LAB_003d998c:
    FUN_003947cc(param_7,0,param_6);
    if (((!(param_6 == 2 || param_6 == 5)) && (!(param_6 == 7 || param_6 == 8))) &&
       (!(param_6 == 9 || param_6 == 0xc))) {
      if (((*(unsigned int *)(param_1 + 0x3028) & 4) == 0) && (temp_v1 = FUN_00221b70(param_2), temp_v1 != 0)) {
        FUN_001c2b48(param_2);
        *(unsigned int *)(param_1 + 0x3028) = *(unsigned int *)(param_1 + 0x3028) | 4;
      }
      FUN_00244e1c(param_2,temp_v0,0);
      temp_v0 = 0;
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4);
        if (temp_v1 == param_2) {
          return;
        }
        if (temp_v1 == 0) {
          *(int *)(param_1 + temp_v0 * 4) = param_2;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
    else {
      FUN_00244e1c(param_2,temp_v0,1,3);
      temp_v0 = 0;
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4);
        if (temp_v1 == param_2) {
          return;
        }
        if (temp_v1 == 0) {
          *(int *)(param_1 + temp_v0 * 4) = param_2;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
  }
  return;
}
