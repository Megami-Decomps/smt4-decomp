/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323354` (_code @ 0x323354, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_002459c0. */
extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_00249b54. */
extern unsigned int FUN_00249bac(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_00323354(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6 [2];
  
  temp_v0 = FUN_00296f60(0);
  FUN_00296f60(1);
  temp_v1 = FUN_00249bac();
  FUN_00249b54(temp_v1,&temp_v5,temp_v6);
  temp_v4 = temp_v5;
  if (temp_v5 < temp_v6[0] + temp_v5) {
    do {
      temp_v2 = FUN_00293c98();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
      temp_v3 = *puVar4;
      if (((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) &&
         (temp_v2 = FUN_002459c0(puVar4,temp_v0), temp_v2 != 0)) {
        FUN_0028df54(1);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5 + temp_v6[0]);
  }
  temp_v4 = FUN_00293c98();
  if (*(char *)(temp_v4 + 0x49c5) != '\0') {
    FUN_00293c98();
    temp_v4 = FUN_00249b0c();
    if ((temp_v4 != 0) && (temp_v4 = FUN_002459c0(temp_v4,temp_v0), temp_v4 != 0)) {
      FUN_0028df54(1);
      return 1;
    }
  }
  FUN_0028df54(0);
  return 1;
}
