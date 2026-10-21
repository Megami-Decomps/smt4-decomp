/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049a2b4` (_code @ 0x49a2b4, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int arraySortQsort(...);
int FUN_003343f0(int);
int useCounterRelease(void);
int FUN_00498ff0(int);
int flaggedValueHolderGetTotal(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_004938d0(...); /* 0x4938d0 */
extern int halfDifference(...); /* 0x49391c */
extern int FUN_0049393c(...); /* 0x49393c */
extern int FUN_00493d88(...); /* 0x493d88 */
extern int FUN_00493e94(...); /* 0x493e94 */
extern int FUN_00493ee0(...); /* 0x493ee0 */
extern int FUN_004943bc(...); /* 0x4943bc */
extern int FUN_00494448(...); /* 0x494448 */
extern int FUN_0049448c(...); /* 0x49448c */
extern int FUN_004944d0(...); /* 0x4944d0 */
extern int FUN_00494530(...); /* 0x494530 */
extern unsigned char LAB_0049cf3c; /* 0x49cf3c */

extern int useCounterIsFinished(void);
extern int useCounterGetValue(void);
extern int FUN_002c7c54(void);
/* Supplied declaration required: arraySortQsort. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: useCounterRelease. */
/* Supplied declaration required: FUN_00498ff0. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */


void FUN_0049a2b4(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = useCounterIsFinished();
  if (temp_v0 != 0) {
    useCounterRelease();
    FUN_003343f0(0);
    FUN_00498ff0(param_1);
    temp_v0 = *(int *)(param_1 + 0xb40);
    if (*(int *)(param_1 + 0x14) == 1) {
      temp_v3 = *(unsigned int *)(param_1 + 4);
      if (temp_v0 == 8) {
        temp_v1 = 0x12;
      }
      else {
        temp_v1 = 0x11;
      }
      *(unsigned int *)(param_1 + 4) = temp_v1;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 0x10) = temp_v3;
      return;
    }
    if (temp_v0 == 7) {
      temp_v3 = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 8;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 0x10) = temp_v3;
      return;
    }
    temp_v3 = *(unsigned int *)(param_1 + 4);
    if (temp_v0 == 8) {
      temp_v1 = 9;
    }
    else {
      temp_v1 = 7;
    }
    *(unsigned int *)(param_1 + 4) = temp_v1;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0x10) = temp_v3;
  }
  else {
    temp_v2 = param_1 + *(int *)(param_1 + 0xb40) * 0x1002;
    temp_v4 = temp_v2 + 0xf74;
    flaggedValueHolderGetTotal(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb60);
    temp_v0 = FUN_002c7c54();
    if (temp_v0 == 0xf) {
      temp_v0 = useCounterGetValue();
      if (temp_v0 == 0) {
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_004943bc);
        return;
      }
      arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_00493d88);
      return;
    }
    if (temp_v0 < 0xf) {
      if (temp_v0 == 3) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_00493ee0);
          return;
        }
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_0049393c);
        return;
      }
      if (temp_v0 == 7) {
        if (*(int *)(param_1 + 0xb40) == 8) {
          temp_v0 = useCounterGetValue();
          if (temp_v0 == 0) {
            arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_00494530);
            return;
          }
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_0049448c);
          return;
        }
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_004944d0);
          return;
        }
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_00494448);
        return;
      }
      if (temp_v0 == 0xc) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,halfDifference);
          return;
        }
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,&LAB_0049cf3c);
        return;
      }
    }
    else {
      if (temp_v0 == 0x10) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_00493e94);
          return;
        }
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,FUN_004938d0);
        return;
      }
      if (temp_v0 == 0x1c) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,0x493d38);
          return;
        }
        arraySortQsort(temp_v4,*(unsigned short *)(temp_v2 + 0x1f74),4,0x49d0f0);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
