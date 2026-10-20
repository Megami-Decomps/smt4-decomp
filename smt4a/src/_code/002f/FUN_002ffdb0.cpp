/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffdb0` (_code @ 0x2ffdb0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f2dfc(int, int, int);

extern int FUN_0010de3c(int);
extern int FUN_002ea704(void);
/* Supplied declaration required: FUN_002f2dfc. */
extern int FUN_002f8208(int, unsigned int);


int FUN_002ffdb0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002ea704();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), *(char *)(temp_v0 + 0x10c) != '\0')) {
    temp_v1 = param_1 + 0x88;
    temp_v2 = FUN_002f8208(temp_v1,1);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      if (*(int *)(param_1 + 0x218) != 0) {
        *(unsigned short *)(param_1 + 0x6e) = 0;
      }
      if (((*(unsigned short *)(param_1 + 0x6e) & 0xff) == 0 && *(unsigned short *)(param_1 + 0x6e) >> 8 == 0) ||
         (FUN_002f2dfc(temp_v1,param_1 + 0x68,1), temp_v0 = temp_v1, temp_v1 == 0)) {
        temp_v0 = FUN_0010de3c(param_1);
      }
    }
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
