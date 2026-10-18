/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4930` (_code @ 0x2e4930, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: FUN_002deb84. */


void FUN_002e4930(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  FUN_002c76c0(0);
  temp_v1 = FUN_002deb84();
  temp_v0 = DAT_0057f590;
  if (temp_v1 == 0) {
    if (DAT_0057f590 != 0) {
      *(unsigned char *)(DAT_0057f590 + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  temp_v2 = FUN_002ba85c();
  temp_v3 = FUN_00236038(0);
  temp_v4 = FUN_002deb84();
  FUN_0021bdac(temp_v2,temp_v3,temp_v4,5,1,0);
  return;
}
