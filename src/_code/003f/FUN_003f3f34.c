/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3f34` (_code @ 0x3f3f34, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0037b7dc; /* 0x37b7dc */
extern unsigned char DAT_00421bdc; /* 0x421bdc */
extern unsigned char DAT_00421bf0; /* 0x421bf0 */
extern unsigned char DAT_00421c04; /* 0x421c04 */
extern unsigned char DAT_00421cb4; /* 0x421cb4 */
extern unsigned char DAT_00421cc8; /* 0x421cc8 */
extern unsigned char *DAT_00472348; /* 0x472348 */
extern unsigned char *DAT_0047234c; /* 0x47234c */
extern unsigned char *DAT_00472350; /* 0x472350 */
extern unsigned char *DAT_00472354; /* 0x472354 */
extern unsigned char *DAT_00472358; /* 0x472358 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_0037e0a4. */


void FUN_003f3f34(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c5d5c();
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  DAT_00472348 = &DAT_00421bf0;
  DAT_0047234c = &DAT_00421bdc;
  DAT_00472350 = &DAT_00421c04;
  DAT_00472354 = &DAT_00421cb4;
  DAT_00472358 = &DAT_00421cc8;
  FUN_0037e0a4(&DAT_004ea168,&LAB_0037b7dc,0x100000);
  return;
}
