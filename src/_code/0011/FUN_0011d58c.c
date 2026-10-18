/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d58c` (_code @ 0x11d58c, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */
extern unsigned int DAT_004c642c; /* 0x4c642c */
extern unsigned char DAT_004c6430; /* 0x4c6430 */
extern unsigned int DAT_004c643c; /* 0x4c643c */
extern unsigned int DAT_004c6448; /* 0x4c6448 */

/* Supplied declaration required: FUN_00147de0. */
/* Supplied declaration required: FUN_00147e44. */
/* Supplied declaration required: FUN_00147fd0. */
/* Supplied declaration required: FUN_00148184. */
/* Supplied declaration required: FUN_001482cc. */
/* Supplied declaration required: FUN_002b563c. */


unsigned int FUN_0011d58c(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int iStack_2c;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_00147de0(&temp_v1);
  FUN_00147e44(param_1,temp_v0,DAT_0044e440,DAT_0044e444);
  DAT_004c643c = temp_v2;
  DAT_004c6448 = temp_v3;
  DAT_004c6430 = temp_v1 != iStack_2c;
  FUN_00148184(&DAT_004c642c);
  FUN_002b563c(param_1,0x10,&DAT_004c642c,0x20,DAT_0044e368);
  FUN_00147fd0(param_1,0);
  FUN_001482cc(&DAT_004c642c,0x20);
  return 0;
}
