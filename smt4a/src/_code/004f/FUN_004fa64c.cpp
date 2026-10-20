/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa64c` (_code @ 0x4fa64c, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003f0e20(int, int);
int FUN_00420e4c(unsigned int, int);
int FUN_00421078(unsigned int);
int FUN_00421514(unsigned int, int);
int FUN_00421858(unsigned int);
int FUN_004cae0c(unsigned int, unsigned int, int);
int FUN_004fa15c(int);
int FUN_004fb43c(int, int, int, int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_00420e4c. */
/* Supplied declaration required: FUN_00421078. */
extern int FUN_00421248(unsigned int);
/* Supplied declaration required: FUN_00421514. */
/* Supplied declaration required: FUN_00421858. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004fa15c. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_004fa64c(int param_1)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_00421248(*(unsigned int *)(param_1 + 0x33c0));
  if (temp_v1 != 0) {
    temp_v1 = FUN_0014aa78();
    FUN_003f0e20(temp_v1,(int)*(short *)(*(int *)(param_1 + 0x33bc) + 0x6a));
    temp_v2 = 0;
    do {
      temp_v4 = param_1 + temp_v2 * 0x3c;
      if (*(int *)(temp_v1 + 0x170) == *(int *)(temp_v4 + 0x1398)) {
        temp_v1 = param_1 + temp_v2 * 0x3c + 0x1398;
LAB_004fa6d8:
        temp_v3 = FUN_0014aa78();
        if (temp_v1 != 0) {
          FUN_00421514(*(unsigned int *)(param_1 + 0x33c0),temp_v1 + 8);
          FUN_00420e4c(*(unsigned int *)(param_1 + 0x33c0),*(int *)(param_1 + 0x33bc) + 0xc);
          FUN_00421858(*(unsigned int *)(param_1 + 0x33c0));
          FUN_004cae0c(temp_v3,*(unsigned int *)(param_1 + 0x33bc),0);
        }
        goto LAB_004fa72c;
      }
      if (*(int *)(temp_v1 + 0x170) == *(int *)(temp_v4 + 0x13d4)) {
        temp_v1 = param_1 + temp_v2 * 0x3c + 0x13d4;
        goto LAB_004fa6d8;
      }
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < 0x32);
    FUN_0014aa78();
LAB_004fa72c:
    FUN_00421078(*(unsigned int *)(param_1 + 0x33c0));
    *(unsigned char *)(param_1 + 0x33b4) = 8;
    FUN_004fa15c(param_1);
    temp_v0 = *(short *)(*(int *)(param_1 + 0x33c8) + 4);
    if (temp_v0 == 0xf || temp_v0 == 0x10) {
      FUN_004fb43c(0,0,0x1000131,0,0,0,0);
      return;
    }
    FUN_004fb43c(0,0,0x1000133,0,0,0,0);
  }
  return;
}

} /* extern "C" */
