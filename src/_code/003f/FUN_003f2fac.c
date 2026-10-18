/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2fac` (_code @ 0x3f2fac, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_004e8578; /* 0x4e8578 */
extern unsigned int DAT_004e857c; /* 0x4e857c */
extern unsigned int DAT_004e8580; /* 0x4e8580 */

extern int FUN_00360144(int, int);
extern unsigned int FUN_003601e4(int, int);


unsigned long long FUN_003f2fac(void)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  DAT_004e8578 = 0;
  DAT_004e857c = 0;
  DAT_004e8580 = 0xffffffff;
  temp_v3 = 0x4e8584;
  temp_v4 = 0x4e8fa4;
  temp_v2 = 0;
  do {
    temp_v0 = 0;
    if (temp_v3 != 0) {
      temp_v0 = FUN_00360144(temp_v3,temp_v2);
    }
    piVar6 = (int *)(temp_v2 * 4 + 0x4e9b44);
    *piVar6 = temp_v0;
    temp_v3 = temp_v3 + 0x6c;
    if (temp_v4 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = FUN_003601e4(temp_v4,temp_v2);
    }
    temp_v2 = temp_v2 + 1;
    temp_v4 = temp_v4 + 0x7c;
    *(unsigned int *)(*piVar6 + 0x68) = temp_v1;
  } while (temp_v2 < 0x18);
  return 0x35ff14004e8568;
}
