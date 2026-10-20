/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ed94` (_code @ 0x30ed94, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_00594976; /* 0x594976 */
extern signed char DAT_00594977; /* 0x594977 */

extern int FUN_002eb6ae(int, unsigned int);
extern int FUN_002f2c94(int);


unsigned int FUN_0030ed94(int param_1)

{
  int temp_v0;
  
  if (((((*(unsigned short *)(param_1 + 0x3c) & 0xf) == 2) && (*(unsigned char *)(param_1 + 0x25) >> 4 == 1)) &&
      ((DAT_00594977 != '\0' || (temp_v0 = FUN_002f2c94(param_1), temp_v0 != 0)))) &&
     (((DAT_00594976 != '\0' && (temp_v0 = FUN_002eb6ae(param_1,0x10), temp_v0 == 0)) ||
      (temp_v0 = FUN_002f2c94(param_1), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
