/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b9e4` (_code @ 0x10b9e4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e2094; /* 0x4e2094 */
extern unsigned int DAT_004e23e0; /* 0x4e23e0 */

/* Supplied declaration required: FUN_00121774. */
extern unsigned int FUN_00132b7c(unsigned char *);
extern int FUN_002bf684(unsigned char *);
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_0010b9e4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bf684(&DAT_004e1f68);
  if (temp_v0 != 0) {
    temp_v1 = FUN_00132b7c(&DAT_004e2094);
    DAT_004e23e0 = FUN_002c5300(0x10000,0x100,0,temp_v1,1);
    FUN_00121774(&DAT_004e1f68,DAT_004e23e0,temp_v1);
  }
  return DAT_004e23e0;
}
