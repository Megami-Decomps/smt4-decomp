/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337900` (_code @ 0x337900, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


void FUN_00337900(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 goto(s) */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v1 = *param_2;
  do {
    temp_v2 = param_1 + temp_v3 * 8;
    piVar1 = (int *)(temp_v2 + 0x44b8);
    if ((temp_v1 & 2) != 0) {
      if (*(short *)(temp_v2 + 0x44bc) == -1) {
LAB_00337958:
        if (piVar1 != (int *)0x0) goto LAB_003379b8;
        break;
      }
    }
    else if (((temp_v1 & 0x38) != 0) &&
            ((int)*(short *)(temp_v2 + 0x44bc) == (unsigned int)*(unsigned short *)((int)param_2 + 0xce)))
    goto LAB_00337958;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x80);
  temp_v3 = 0;
  while( 1 ) {
    temp_v0 = param_1 + temp_v3 * 8;
    piVar1 = (int *)(temp_v0 + 0x44b8);
    temp_v2 = (int)*(short *)(temp_v0 + 0x44bc);
    temp_v4 = temp_v2 == 0;
    if (temp_v4) {
      temp_v2 = *piVar1;
    }
    if (temp_v4 && temp_v2 == 0) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x80) {
      return;
    }
  }
  if ((temp_v1 & 2) != 0) {
    temp_v3 = 2;
    *(unsigned short *)(temp_v0 + 0x44bc) = 0xffff;
    *piVar1 = temp_v3;
  }
  else {
    *(unsigned short *)(temp_v0 + 0x44bc) = *(unsigned short *)((int)param_2 + 0xce);
    temp_v1 = *param_2;
    if ((temp_v1 & 8) != 0) {
      temp_v3 = 8;
      *piVar1 = temp_v3;
    }
    else if ((temp_v1 & 0x10) != 0) {
      temp_v3 = 0x10;
      *piVar1 = temp_v3;
    }
    else if ((temp_v1 & 0x20) != 0) {
      temp_v3 = 0x20;
      *piVar1 = temp_v3;
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
LAB_003379b8:
  if (param_3 == 1) {
    *(unsigned char *)((int)piVar1 + 6) = 1;
    return;
  }
  if (param_3 == 2) {
    *(unsigned char *)((int)piVar1 + 7) = 1;
  }
  return;
}
