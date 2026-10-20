/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7bfc` (_code @ 0x2c7bfc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short [8], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00241798; /* 0x241798 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_002c7bfc(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [8];
  
  temp_v0 = FUN_00187180(0x11,0);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  temp_v2[0] = param_1;
  FUN_00100854(temp_v2,temp_v1,temp_v0,0x10,(unsigned char *)0x241798);
  return;
}

} /* extern "C" */
