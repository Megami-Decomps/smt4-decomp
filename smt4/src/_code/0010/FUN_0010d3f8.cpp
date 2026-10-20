/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d3f8` (_code @ 0x10d3f8, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011a1b8(unsigned int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e25e9; /* 0x4e25e9 */
extern signed char DAT_004e25ea; /* 0x4e25ea */
extern signed char DAT_004e25fa; /* 0x4e25fa */

/* Supplied declaration required: FUN_0011a1b8. */


unsigned int FUN_0010d3f8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  if ((param_1 < 2) && (temp_v0 = param_1 * 0x10, (&DAT_004e25ea)[temp_v0] == '\0')) {
    (&DAT_004e25ea)[temp_v0] = 1;
    (&DAT_004e25e9)[temp_v0] = 0x40;
    temp_v1[1] = 0xffffffff;
    temp_v1[0] = 0xffffffff;
    if (DAT_004e25ea != '\0') {
      temp_v1[0] = 0;
    }
    if (DAT_004e25fa != '\0') {
      temp_v1[DAT_004e25ea != '\0'] = 1;
    }
    FUN_0011a1b8(temp_v1[0],temp_v1[1]);
    return 1;
  }
  return 0;
}

} /* extern "C" */
