/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139424` (_code @ 0x139424, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001458e4(void);
int FUN_00157194(void);
int FUN_00178b04(int, unsigned char *, int);
int FUN_002e3328(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_001394b0; /* 0x1394b0 */
extern unsigned int *DAT_005b3fdc; /* 0x5b3fdc */

/* Supplied declaration required: FUN_001458e4. */
/* Supplied declaration required: FUN_00157194. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_00139424(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  if (DAT_005b3fdc != (unsigned int *)0x0) {
    FUN_00157194();
    FUN_002e3328();
  }
  puVar1 = (unsigned int *)0x24;
  FUN_00178b04(0x24,&LAB_001394b0,0x2f2);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  DAT_005b3fdc = puVar1;
  FUN_001458e4();
  return;
}

} /* extern "C" */
