/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223b84` (_code @ 0x223b84, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(void);
int asdMemAlloc(int, int, int, int, int);
int asdTMTexTableLoadSprites(int);
int asdTMTexTableLoadTmx(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_0044e158; /* 0x44e158 */
extern int DAT_0044e15c; /* 0x44e15c */
extern int DAT_0044e160; /* 0x44e160 */

/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_00223b84(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e158 < '\x01') {
    asdTMTexTableLoadSprites(0x17);
    asdTMTexTableLoadTmx(0x23,0);
    if (DAT_0044e15c == 0) {
      temp_v0 = 0x100;
      asdMemAlloc(0x100,0x100,0,0x266,1);
      DAT_0044e15c = temp_v0;
      rt_memclr();
    }
    if (DAT_0044e160 == 0) {
      temp_v0 = 0x100;
      asdMemAlloc(0x100,0x100,0,0x81,1);
      DAT_0044e160 = temp_v0;
      rt_memclr();
    }
  }
  DAT_0044e158 = DAT_0044e158 + '\x01';
  return;
}

} /* extern "C" */
