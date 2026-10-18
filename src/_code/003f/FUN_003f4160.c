/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f4160` (_code @ 0x3f4160, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0037b9ec; /* 0x37b9ec */
extern unsigned char DAT_00421824; /* 0x421824 */
extern unsigned char DAT_00421838; /* 0x421838 */
extern unsigned char DAT_0042184c; /* 0x42184c */
extern unsigned char DAT_004218fc; /* 0x4218fc */
extern unsigned char DAT_00421910; /* 0x421910 */
extern unsigned char *DAT_00472348; /* 0x472348 */
extern unsigned char *DAT_0047234c; /* 0x47234c */
extern unsigned char *DAT_00472350; /* 0x472350 */
extern unsigned char *DAT_00472354; /* 0x472354 */
extern unsigned char *DAT_00472358; /* 0x472358 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_002c5f58. */
/* Supplied declaration required: FUN_0037e2b4. */


void FUN_003f4160(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c5f58();
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  DAT_00472348 = &DAT_00421838;
  DAT_0047234c = &DAT_00421824;
  DAT_00472350 = &DAT_0042184c;
  DAT_00472354 = &DAT_004218fc;
  DAT_00472358 = &DAT_00421910;
  FUN_0037e2b4(&DAT_004ea168,&LAB_0037b9ec,0x100000);
  return;
}
