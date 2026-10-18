/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356f80` (_code @ 0x356f80, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_00356f80(unsigned int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)((int)param_1 + param_2 + 0x154) == '\0') {
    return;
  }
  *param_1 = 0;
  if (*(char *)(param_1 + param_2 * 5 + 0x1a8) != '\0') {
    *(unsigned char *)(param_1 + param_2 * 5 + 0x1a8) = 0;
    *(unsigned char *)((int)param_1 + param_2 + 0x154) = 0;
    return;
  }
  temp_v1 = 0;
  do {
    if (param_1[temp_v1 * 0x1c + 0x58] != 0) {
      temp_v0 = 0;
      do {
        if (param_1[temp_v1 * 0x1c + temp_v0 + 0x68] == param_2) {
          param_1[temp_v1 * 0x1c + temp_v0 + 0x68] = 0xffffffff;
          *(unsigned char *)((int)param_1 + param_2 + 0x154) = 0;
          piVar3 = (int *)(param_1 + temp_v1 * 0x1c + 0x58);
          if (*piVar3 == 0) {
            return;
          }
          temp_v0 = 0;
          while( 1 ) {
            piVar2 = piVar3 + temp_v0;
            piVar1 = piVar2 + 0x10;
            if (*piVar1 == -1) {
              piVar2 = (int *)piVar2[0x11];
            }
            if (*piVar1 != -1 || piVar2 != (int *)0xffffffff) break;
            temp_v0 = temp_v0 + 2;
            if (temp_v0 >= 0xc) {
              *piVar3 = 0;
              param_1[temp_v1 * 0x1c + 0x5c] = 0;
              param_1[temp_v1 * 0x1c + 0x5d] = 0;
              param_1[temp_v1 * 0x1c + 0x5e] = 0;
              param_1[temp_v1 * 0x1c + 0x5f] = 0;
              param_1[temp_v1 * 0x1c + 0x60] = 0;
              param_1[temp_v1 * 0x1c + 0x61] = 0;
              param_1[temp_v1 * 0x1c + 0x62] = 0;
              param_1[temp_v1 * 0x1c + 99] = 0;
              param_1[temp_v1 * 0x1c + 100] = 0;
              param_1[temp_v1 * 0x1c + 0x65] = 0;
              param_1[temp_v1 * 0x1c + 0x66] = 0;
              param_1[temp_v1 * 0x1c + 0x67] = 0;
              return;
            }
          }
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0xc);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  return;
}
