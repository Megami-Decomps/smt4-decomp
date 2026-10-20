/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002392b8` (_code @ 0x2392b8, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001654f8(int, char [256], int);
int FUN_00168594(char [256], int);
int FUN_00184758(int, int, int);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, int);
int sysMemClear(int, int);
int rt_memcpy_w(int, char [256], int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp118; /* 0x118: local_118 */
} param_1_stack;

extern int DAT_0057f574; /* 0x57f574 */

extern int FUN_001654d8(int);
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_00168594. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002392b8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  char acStack_110 [256];
  
  temp_v0 = DAT_0057f574;
  *(unsigned char *)(DAT_0057f574 + 0x31) = 0;
  if (param_1 != 0) {
    sysMemClear(temp_v0 + 0x288,0xa0);
    FUN_001654f8(param_1,acStack_110,0);
    temp_v1 = 0;
    do {
      if (acStack_110[temp_v1] == '\0') {
        rt_memcpy_w(temp_v0 + 0x288,acStack_110,temp_v1 + 1);
        temp_v2 = 0.0f;
        *(unsigned char *)(temp_v0 + 0x31) = 1;
        FUN_00168594(acStack_110,3);
        if ((int)temp_v2 >= 0x14d) {
          *(int *)(temp_v0 + 0x14) = (int)temp_v2;
          *(unsigned char *)(temp_v0 + 0x32) = 1;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x32) = 0;
        }
        FUN_00184758(temp_v0 + 0x16c,2,0);
        temp_v1 = FUN_001654d8(temp_v0 + 0x16c);
        *(int *)(temp_v0 + 0x18) = temp_v1;
        *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
        if (*(int *)(temp_v0 + 8) == 3) {
          *(unsigned int *)(temp_v0 + 8) = 2;
        }
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0xa0);
    FUN_0023723c(*(unsigned int *)(temp_v0 + 0x328),3,0xffffffff,0,3,temp_v0 + 0x288);
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}

} /* extern "C" */
