/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120998` (_code @ 0x120998, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0012dda0. */
/* Supplied declaration required: FUN_0012df5c. */
extern unsigned int FUN_0012e3fc(int *, unsigned int);


unsigned int FUN_00120998(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v5 = *(int *)(*param_1 + 0xc4);
  if (0 < temp_v5) {
    do {
      temp_v1 = *(int *)(*param_1 + 200);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 200 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      piVar1 = (int *)(temp_v1 + temp_v3 * 4);
      temp_v1 = *piVar1;
      if (temp_v1 != 0) {
        temp_v1 = (int)piVar1 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      if ((*(unsigned int *)(temp_v1 + 0x18) & 1) == 0) {
        temp_v1 = *(int *)(*param_1 + 200);
        if (temp_v1 != 0) {
          temp_v1 = *param_1 + 200 + temp_v1;
        }
        else {
          temp_v1 = 0;
        }
        piVar1 = (int *)(temp_v1 + temp_v3 * 4);
        temp_v6 = *piVar1;
        if (temp_v6 != 0) {
          temp_v6 = (int)piVar1 + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        temp_v0 = FUN_0012e3fc(&temp_v6,param_2);
        temp_v4 = temp_v4 | temp_v0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v5);
  }
  temp_v3 = 0;
  temp_v5 = *(int *)(*param_1 + 0xbc);
  if (0 < temp_v5) {
    do {
      temp_v1 = *(int *)(*param_1 + 0xc0);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0xc0 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = 0;
      if (temp_v1 != 0) {
        piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
        temp_v2 = *piVar1;
        if (temp_v2 == 0) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = (int)piVar1 + temp_v2;
        }
      }
      if ((*(unsigned int *)(temp_v2 + 0x18) & 0x40) == 0) {
        temp_v1 = *(int *)(*param_1 + 0xc0);
        if (temp_v1 != 0) {
          temp_v1 = *param_1 + 0xc0 + temp_v1;
        }
        else {
          temp_v1 = 0;
        }
        temp_v6 = 0;
        if (temp_v1 != 0) {
          piVar1 = (int *)(temp_v1 + temp_v3 * 0x10 + 0x28);
          temp_v6 = *piVar1;
          if (temp_v6 == 0) {
            temp_v6 = 0;
          }
          else {
            temp_v6 = (int)piVar1 + temp_v6;
          }
        }
        piVar1 = &temp_v6;
        FUN_0012dda0(&temp_v6,param_2,param_3);
        temp_v4 = temp_v4 | (unsigned int)piVar1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v5);
  }
  if ((temp_v4 & 2) == 0) {
    temp_v3 = 0;
    temp_v5 = *(int *)(*param_1 + 0xb4);
    if (0 < temp_v5) {
      do {
        temp_v1 = *(int *)(*param_1 + 0xb8);
        if (temp_v1 != 0) {
          temp_v1 = *param_1 + 0xb8 + temp_v1;
        }
        else {
          temp_v1 = 0;
        }
        piVar1 = (int *)(temp_v1 + temp_v3 * 4);
        temp_v6 = *piVar1;
        if (temp_v6 != 0) {
          temp_v6 = (int)piVar1 + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
        if ((*(unsigned int *)(temp_v6 + 0x2c) & 8) == 0) {
          FUN_0012df5c(&temp_v6,*param_1,param_2,param_3);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < temp_v5);
    }
  }
  return temp_v4;
}
