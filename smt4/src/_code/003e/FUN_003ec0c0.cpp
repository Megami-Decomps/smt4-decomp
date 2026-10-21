/* NON_MATCHING: unresolved global-initializer boundary: original LDR R0 at 0x3ec0bc falls through into this unit, followed by compiler destructor-registration setup. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420f30; /* 0x420f30 */
extern char *DAT_004eabc0; /* 0x4eabc0 */
extern unsigned int DAT_004eabc4; /* 0x4eabc4 */


void FUN_003ec0c0(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  *param_1 = (unsigned int)&DAT_00420f30;
  param_1[0x17] = 0;
  DAT_004eabc0 = "炜?灬?갴5";
  DAT_004eabc4 = 0;
  return;
}

} /* extern "C" */
