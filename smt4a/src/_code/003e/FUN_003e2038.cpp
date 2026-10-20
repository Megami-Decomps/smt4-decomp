/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2038` (_code @ 0x3e2038, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0510(unsigned int *, int);
int aocHandleButtons(int, int);
int FUN_003fce8c(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_003e0510. */
extern int FUN_003ec620(int, unsigned int);
/* Supplied declaration required: aocHandleButtons. */
extern int FUN_003fce08(int, unsigned int);
/* Supplied declaration required: FUN_003fce8c. */
extern int FUN_003fcf5c(int);


unsigned int * FUN_003e2038(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = 1;
  if (0 < (int)param_1[2]) {
    do {
      temp_v1 = param_2 + temp_v4 * 8;
      temp_v2 = FUN_003ec620(param_2,*(unsigned int *)(temp_v1 + 0x2020));
      if ((*(unsigned int *)(temp_v1 + 0x201c) & 1) == 0) {
        temp_v3 = FUN_003fcf5c(temp_v2);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          *(unsigned int *)(temp_v1 + 0x201c) = *(unsigned int *)(temp_v1 + 0x201c) | 1;
          aocHandleButtons(temp_v2,7);
        }
      }
      if ((*(unsigned int *)(temp_v1 + 0x201c) & 2) == 0) {
        temp_v3 = FUN_003fce08(temp_v2,1);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          FUN_003fce8c(temp_v2,1);
          temp_v3 = param_2 + temp_v4 * 0x48;
          *(unsigned int *)(temp_v1 + 0x201c) = *(unsigned int *)(temp_v1 + 0x201c) | 2;
          *(unsigned int *)(temp_v3 + 0x10b4) = *(unsigned int *)(temp_v2 + 4);
          *(unsigned int *)(temp_v3 + 0x10b8) = *(unsigned int *)(temp_v2 + 8);
          *(unsigned int *)(temp_v3 + 0x10bc) = *(unsigned int *)(temp_v2 + 0xc);
          *(unsigned int *)(temp_v3 + 0x10c0) = *(unsigned int *)(temp_v2 + 0x10);
          *(unsigned int *)(temp_v3 + 0x10c4) = *(unsigned int *)(temp_v2 + 0x14);
          *(unsigned int *)(temp_v3 + 0x10c8) = *(unsigned int *)(temp_v2 + 0x18);
          *(unsigned int *)(temp_v3 + 0x10cc) = *(unsigned int *)(temp_v2 + 0x1c);
          *(unsigned int *)(temp_v3 + 0x10d0) = *(unsigned int *)(temp_v2 + 0x20);
          *(unsigned int *)(temp_v3 + 0x10d4) = *(unsigned int *)(temp_v2 + 0x24);
          *(unsigned int *)(temp_v3 + 0x10d8) = *(unsigned int *)(temp_v2 + 0x28);
          *(unsigned int *)(temp_v3 + 0x10dc) = *(unsigned int *)(temp_v2 + 0x2c);
          *(unsigned int *)(temp_v3 + 0x10e0) = *(unsigned int *)(temp_v2 + 0x30);
          *(unsigned int *)(temp_v3 + 0x10e4) = *(unsigned int *)(temp_v2 + 0x34);
          *(unsigned int *)(temp_v3 + 0x10e8) = *(unsigned int *)(temp_v2 + 0x38);
          *(unsigned char *)(temp_v3 + 0x10ec) = *(unsigned char *)(temp_v2 + 0x3c);
          *(unsigned char *)(temp_v3 + 0x10ed) = *(unsigned char *)(temp_v2 + 0x3d);
          *(unsigned int *)(temp_v3 + 0x10f0) = *(unsigned int *)(temp_v2 + 0x40);
          *(unsigned int *)(temp_v3 + 0x10f4) = *(unsigned int *)(temp_v2 + 0x44);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)param_1[2]);
    if (!temp_v0) {
      return (unsigned int *)0x0;
    }
  }
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0xc;
  FUN_003e0510(param_1,param_2);
  return param_1;
}

} /* extern "C" */
