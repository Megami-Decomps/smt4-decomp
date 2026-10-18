/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318658` (_code @ 0x318658, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0024511c. */
extern int FUN_00245198(unsigned int, unsigned int);
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_0033b5c4(unsigned int, unsigned int);


unsigned char FUN_00318658(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v0 = FUN_00296f60(2);
  temp_v3 = FUN_00293c98();
  temp_v4 = FUN_0033b5c4(temp_v3,0);
  if (temp_v4 != 0) {
    temp_v4 = FUN_00245198(temp_v3,0);
    return temp_v4 != 0;
  }
  FUN_0024511c(temp_v3,0,temp_v2,temp_v1,temp_v0);
  return 0;
}
