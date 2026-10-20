/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128584` (_code @ 0x128584, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad4f8(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */
extern unsigned int DAT_004d4204; /* 0x4d4204 */
extern unsigned int DAT_004d4208; /* 0x4d4208 */

/* Supplied declaration required: FUN_002ad4f8. */


void FUN_00128584(unsigned int param_1,unsigned char param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  DAT_004d4201 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4200 = param_2;
  DAT_004d4204 = param_1;
  DAT_004d4208 = param_3;
  FUN_002ad4f8();
  return;
}

} /* extern "C" */
