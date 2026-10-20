/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00512190` (_code @ 0x512190, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(char **, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00558414; /* 0x558414 */
extern char *DAT_0062d6ac; /* 0x62d6ac */
extern unsigned int DAT_0062d6b0; /* 0x62d6b0 */

/* Supplied declaration required: emptyStub_002f4370. */


void FUN_00512190(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  *param_1 = (unsigned int)&DAT_00558414;
  param_1[0x17] = 0;
  DAT_0062d6ac = "䰬Q䯼QḘC";
  DAT_0062d6b0 = 0;
  emptyStub_002f4370(&DAT_0062d6ac,0x431e18,0x100000);
  return;
}

} /* extern "C" */
