/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427d6c` (_code @ 0x427d6c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00427c74(unsigned char *, unsigned char *, unsigned char *, unsigned char *, unsigned char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00427dd4; /* 0x427dd4 */
extern unsigned char LAB_00427dd8; /* 0x427dd8 */
extern unsigned char LAB_00427de4; /* 0x427de4 */
extern unsigned char LAB_00427df8; /* 0x427df8 */
extern unsigned char LAB_00427e00; /* 0x427e00 */
extern unsigned char LAB_00427e04; /* 0x427e04 */

/* Supplied declaration required: FUN_00427c74. */


unsigned int FUN_00427d6c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0xe0e13884;
    }
    FUN_00427c74(&LAB_00427e00,&LAB_00427df8,&LAB_00427de4,&LAB_00427dd8,&LAB_00427dd4);
  }
  else {
    FUN_00427c74(&LAB_00427e00,&LAB_00427df8,&LAB_00427de4,&LAB_00427e04,&LAB_00427dd4);
  }
  return 0;
}

} /* extern "C" */
