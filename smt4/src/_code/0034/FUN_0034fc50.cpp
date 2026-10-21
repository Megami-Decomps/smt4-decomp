/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fc50` (_code @ 0x34fc50, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int threadSleepDuration(int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: threadSleepDuration. */


void FUN_0034fc50(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 unstructured edge(s); 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar8;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v5 = 0;
  temp_v7 = param_4;
  do {
    piVar8 = (int *)(param_1 + temp_v5 * 4 + 0x46c);
    temp_v0 = *piVar8;
    if (-1 < temp_v0) {
      piVar2 = *(int **)(param_1 + temp_v0 * 4 + 0x2ec);
      (**(romwright_code **)(*piVar2 + 0x10))(piVar2,&temp_v7);
      temp_v1 = param_1 + *piVar8 * 0x28;
      temp_v0 = 0;
      if (temp_v1 != -0x30c) {
        if (*(unsigned int *)(temp_v1 + 0x314) < 2) {
          temp_v0 = 2;
        }
        else {
          temp_v0 = 1;
        }
      }
      if (temp_v7 < temp_v0 * 2) {
        return;
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 2);
  temp_v5 = 0;
  do {
    temp_v0 = param_1 + temp_v5 * 4;
    if ((-1 < *(int *)(temp_v0 + 0x46c)) &&
       (temp_v1 = 0, param_1 + *(int *)(temp_v0 + 0x46c) * 0x28 != -0x30c)) {
      do {
        (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v0 + 0x46c) * 4 + 0x2ec) + 0x1c))();
        temp_v1 = temp_v1 + 1;
        temp_v2 = param_1 + *(int *)(temp_v0 + 0x46c) * 0x28;
        temp_v3 = 0;
        if (temp_v2 != -0x30c) {
          if (*(unsigned int *)(temp_v2 + 0x314) < 2) {
            temp_v3 = 2;
          }
          else {
            temp_v3 = 1;
          }
        }
      } while (temp_v1 < temp_v3);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 2);
  temp_v5 = 0;
  temp_v0 = *(int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x148) = 0;
  *(unsigned int *)(param_1 + 0x14c) = 0;
  do {
    temp_v1 = param_1 + temp_v5 * 4;
    if (-1 < *(int *)(temp_v1 + 0x46c)) {
      if (*(int *)(param_1 + 0x148) == 0 && *(int *)(param_1 + 0x14c) == 0) {
        temp_v3 = param_1 + temp_v5 * 0x80 + (*(int *)(temp_v1 + 0x47c) % 0x10) * 8;
        temp_v6 = *(unsigned int *)(temp_v3 + 0x34);
        *(unsigned int *)(param_1 + 0x148) = *(unsigned int *)(temp_v3 + 0x30);
        *(unsigned int *)(param_1 + 0x14c) = temp_v6;
      }
      temp_v2 = param_1 + *(int *)(temp_v1 + 0x46c) * 0x28;
      temp_v3 = 0;
      if (temp_v2 != -0x30c) {
        if (*(unsigned int *)(temp_v2 + 0x314) < 2) {
          temp_v3 = 2;
        }
        else {
          temp_v3 = 1;
        }
      }
      *(int *)(temp_v1 + 0x47c) = *(int *)(temp_v1 + 0x47c) + temp_v3;
      if (*(int *)(param_1 + 0x1c) == temp_v0) {
        *(int *)(param_1 + 0x1c) = temp_v3 + *(int *)(param_1 + 0x1c);
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 2);
  do {
    if (*(int *)(param_1 + 0xc) == 1) {
      return;
    }
    if (*(int *)(param_1 + 0x46c) >= 0) {
      temp_v5 = 0;
    }
    else {
      if (-1 >= *(int *)(param_1 + 0x470)) continue;
      temp_v5 = 1;
    }
    temp_v1 = param_1 + temp_v5 * 4;
    temp_v3 = param_1 + *(int *)(temp_v1 + 0x46c) * 0x28;
    temp_v0 = 0;
    if (temp_v3 != -0x30c) {
      if (*(unsigned int *)(temp_v3 + 0x314) < 2) {
        temp_v0 = 2;
      }
      else {
        temp_v0 = 1;
      }
    }
    if (temp_v0 <= *(int *)(temp_v1 + 0x474) - *(int *)(temp_v1 + 0x47c)) {
      temp_v5 = param_1 + temp_v5 * 0x80 + (*(int *)(param_1 + temp_v5 * 4 + 0x47c) % 0x10) * 8;
      temp_v4 = *(unsigned int *)(temp_v5 + 0x30);
      temp_v5 = *(int *)(temp_v5 + 0x34);
      *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x138) + temp_v4;
      *(unsigned int *)(param_1 + 0x144) =
           temp_v5 + *(int *)(param_1 + 0x13c) + (unsigned int)romwright_carry_4(*(unsigned int *)(param_1 + 0x138),temp_v4);
      return;
    }
    threadSleepDuration(500000,0);
  } while( 1 );
}

} /* extern "C" */
