/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f39ac` (_code @ 0x3f39ac, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [12], unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0034f45c; /* 0x34f45c */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_003f39ac(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  
  temp_v0 = FUN_00187180(0x14,0);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  temp_v2[0] = param_1;
  FUN_00100854(temp_v2,temp_v1,temp_v0,6,&LAB_0034f45c);
  return;
}

} /* extern "C" */
