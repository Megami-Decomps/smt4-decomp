/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b4ac` (_code @ 0x13b4ac, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001463b4(void);
int FUN_00178b04(int, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0013b4ec; /* 0x13b4ec */
extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001463b4. */
extern unsigned int FUN_001464b4(void);
/* Supplied declaration required: FUN_00178b04. */


void FUN_0013b4ac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0056fcc0 == 0) {
    temp_v0 = 0x4c;
    FUN_00178b04(0x4c,&LAB_0013b4ec,0x28);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_001464b4();
    }
    DAT_0056fcc0 = temp_v1;
    FUN_001463b4();
    return;
  }
  return;
}

} /* extern "C" */
