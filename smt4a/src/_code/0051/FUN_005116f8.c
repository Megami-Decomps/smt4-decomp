/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005116f8` (_code @ 0x5116f8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0042ce40(); /* 0x42ce40 */
extern unsigned char DAT_005583d8; /* 0x5583d8 */
extern unsigned int DAT_006475e4; /* 0x6475e4 */
extern unsigned int DAT_006475e8; /* 0x6475e8 */
extern unsigned int DAT_006475ec; /* 0x6475ec */
extern unsigned int DAT_006475f0; /* 0x6475f0 */
extern unsigned char DAT_006475f4; /* 0x6475f4 */
extern unsigned int DAT_006475f8; /* 0x6475f8 */
extern unsigned char DAT_006475fc; /* 0x6475fc */

/* Supplied declaration required: FUN_002f4370. */


void FUN_005116f8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (unsigned int)&DAT_005583d8;
  param_1[0x15] = 0;
  DAT_006475e4 = 0;
  DAT_006475e8 = 0;
  DAT_006475ec = 0;
  DAT_006475f0 = 0;
  DAT_006475f4 = 0;
  DAT_006475f8 = 0;
  DAT_006475fc = 0;
  FUN_002f4370(&DAT_006475e4,FUN_0042ce40,0x100000);
  return;
}
