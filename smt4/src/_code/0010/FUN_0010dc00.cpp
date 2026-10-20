/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dc00` (_code @ 0x10dc00, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a23c(void);
int FUN_0010a780(void);
int FUN_0010fcdc(void);
int memClear(unsigned short *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned short DAT_004eaae0; /* 0x4eaae0 */
extern unsigned short DAT_004eaae2; /* 0x4eaae2 */
extern unsigned char DAT_004eaae4; /* 0x4eaae4 */
extern unsigned int DAT_004eaae8; /* 0x4eaae8 */

/* Supplied declaration required: FUN_0010a23c. */
/* Supplied declaration required: FUN_0010a780. */
/* Supplied declaration required: FUN_0010fcdc. */
/* Supplied declaration required: memClear. */


unsigned int FUN_0010dc00(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_0010fcdc();
  FUN_0010a23c();
  FUN_0010a780();
  memClear(&DAT_004eaae0,0x70);
  DAT_004eaae0 = 0;
  DAT_004eaae2 = 0x40;
  DAT_004eaae4 = 1;
  DAT_004eaae8 = 1;
  return 1;
}

} /* extern "C" */
