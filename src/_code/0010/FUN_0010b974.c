/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b974` (_code @ 0x10b974, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e2094; /* 0x4e2094 */
extern unsigned int DAT_004e23e0; /* 0x4e23e0 */

/* Supplied declaration required: FUN_00121694. */
extern unsigned int FUN_00132aa0(unsigned char *);
extern int FUN_002bf85c(unsigned char *);
/* Supplied declaration required: FUN_002c54f0. */


unsigned int FUN_0010b974(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002bf85c(&DAT_004e1f68);
  if (temp_v0 != 0) {
    temp_v1 = FUN_00132aa0(&DAT_004e2094);
    temp_v2 = 0x10000;
    FUN_002c54f0(0x10000,0x100,0,temp_v1,1);
    DAT_004e23e0 = temp_v2;
    FUN_00121694(&DAT_004e1f68,temp_v2,temp_v1);
  }
  return DAT_004e23e0;
}
