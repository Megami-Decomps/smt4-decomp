/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192564` (_code @ 0x192564, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00192590; /* 0x192590 */
extern unsigned int DAT_00448c5c; /* 0x448c5c */
extern unsigned int DAT_00448c70; /* 0x448c70 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_00192564(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_00448c5c = FUN_002c5c04(&LAB_00192590);
  DAT_00448c70 = 0;
  asdTMTexTableLoadTmx(0x38,0);
  return;
}

} /* extern "C" */
