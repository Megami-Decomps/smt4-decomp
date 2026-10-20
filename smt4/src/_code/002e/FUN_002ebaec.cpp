/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebaec` (_code @ 0x2ebaec, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

extern unsigned char DAT_00464fa8; /* 0x464fa8 */


void FUN_002ebaec(int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00464fa8 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) != 0) {
    if (param_1 == 0) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 8) = 2;
    }
    else if (param_1 == 1) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 8) = 1;
    }
    else if (param_1 == 2) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 8) = 3;
    }
    if (param_2 == 0) {
      *(unsigned char *)(temp_v0 + 9) = 1;
    }
    else if (param_2 == 1) {
      *(unsigned char *)(temp_v0 + 9) = 2;
    }
    else if (param_2 == 2) {
      *(unsigned char *)(temp_v0 + 9) = 3;
    }
    else if (param_2 == 3) {
      *(unsigned char *)(temp_v0 + 9) = 0;
    }
    if (param_3 == 0xff) {
      *(unsigned char *)(temp_v0 + 10) = 0xff;
    }
    else {
      *(char *)(temp_v0 + 10) = (char)param_3;
    }
    if (param_4 != 0) {
      *(char *)(temp_v0 + 0xb) = (char)param_4 + '\x01';
    }
    else {
      *(unsigned char *)(temp_v0 + 0xb) = 1;
    }
    return;
  }
  return;
}

} /* extern "C" */
