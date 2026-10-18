/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a6ec` (_code @ 0x12a6ec, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_004656c8; /* 0x4656c8 */
extern unsigned char DAT_004656c9; /* 0x4656c9 */

extern int FUN_0013b808(unsigned char *);
/* Supplied declaration required: FUN_0013b844. */
extern int FUN_0013b880(unsigned char *);
/* Supplied declaration required: FUN_0013b8bc. */


void FUN_0012a6ec(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [4];
  
  if (((DAT_004656c8 != '\0') && (temp_v0 = FUN_0013b880(temp_v2), -1 < temp_v0)) &&
     (temp_v0 = FUN_0013b808(temp_v3), -1 < temp_v0)) {
    DAT_004656c9 = temp_v2[0] | temp_v3[0];
    temp_v1 = 0;
    FUN_0013b844();
    if ((temp_v1 & 0x80000000) == 0) {
      FUN_0013b8bc();
    }
  }
  return;
}
