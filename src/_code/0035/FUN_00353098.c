/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353098` (_code @ 0x353098, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00353100; /* 0x353100 */
extern unsigned char LAB_00353104; /* 0x353104 */
extern unsigned char LAB_00353110; /* 0x353110 */
extern unsigned char LAB_00353124; /* 0x353124 */
extern unsigned char LAB_0035312c; /* 0x35312c */
extern unsigned char LAB_00353130; /* 0x353130 */

/* Supplied declaration required: FUN_00352fd8. */


unsigned int FUN_00353098(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0xe0e13884;
    }
    FUN_00352fd8(&LAB_0035312c,&LAB_00353124,&LAB_00353110,&LAB_00353104,&LAB_00353100);
  }
  else {
    FUN_00352fd8(&LAB_0035312c,&LAB_00353124,&LAB_00353110,&LAB_00353130,&LAB_00353100);
  }
  return 0;
}
