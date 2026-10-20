/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004be49c` (_code @ 0x4be49c, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4914(int, int);
int FUN_002a4964(int, int);
int FUN_002a7324(int);
int FUN_0037e0d0(unsigned int, int);
int FUN_00480fc0(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_0037e0d0. */
extern unsigned int FUN_003e4d68(unsigned int);
extern int FUN_004801ac(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00480fc0. */
extern int FUN_00481104(unsigned int);


void FUN_004be49c(int param_1)

{
/* irregular: 1 unstructured edge(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  FUN_00480fc0(*(unsigned int *)(param_1 + 0x334),1);
  temp_v0 = FUN_00481104(*(unsigned int *)(param_1 + 0x334));
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 8) = 0xd;
    return;
  }
  temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
  temp_v0 = FUN_004801ac(temp_v1,*(unsigned int *)(param_1 + 0x334),1);
  if (temp_v0 != 0) {
    *(unsigned char *)(*(int *)(param_1 + 0x32c) + param_1 + 0x338) = 0;
    temp_v2 = *(int *)(param_1 + 0x32c);
    for (temp_v0 = temp_v2; temp_v4 = -1, temp_v0 < 0xc; temp_v0 = temp_v0 + 1) {
      if ((-1 < *(int *)(param_1 + temp_v0 * 4 + 0x2c4)) &&
         (*(char *)(param_1 + temp_v0 + 0x338) != '\0')) {
        temp_v4 = temp_v0;
        if (-1 >= temp_v0) break;
        FUN_002a4914(param_1 + 0x260,temp_v0 % 4);
        FUN_002a4964(param_1 + 0x260,(int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2);
        temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + temp_v0 * 4 + 0x2c4) & 0xffff);
        FUN_0037e0d0(temp_v1,0);
        FUN_002a7324(1);
        return;
      }
    }
    temp_v3 = 0;
    temp_v0 = temp_v4;
    if (0 < temp_v2) {
      do {
        if ((-1 < *(int *)(param_1 + temp_v3 * 4 + 0x2c4)) &&
           (temp_v0 = temp_v3, *(char *)(param_1 + temp_v3 + 0x338) != '\0')) break;
        temp_v3 = temp_v3 + 1;
        temp_v0 = temp_v4;
      } while (temp_v3 < temp_v2);
    }
    if (-1 < temp_v0) {
      FUN_002a4914(param_1 + 0x260,temp_v0 % 4);
      FUN_002a4964(param_1 + 0x260,(int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2);
      temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + temp_v0 * 4 + 0x2c4) & 0xffff);
      FUN_0037e0d0(temp_v1,0);
      FUN_002a7324(1);
      return;
    }
  }
  FUN_0037e0d0(temp_v1,0);
  FUN_002a7324(1);
  return;
}

} /* extern "C" */
