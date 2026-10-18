/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159030` (_code @ 0x159030, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_00589285; /* 0x589285 */
extern unsigned char DAT_00589287; /* 0x589287 */
extern unsigned short DAT_00589288; /* 0x589288 */
extern unsigned short DAT_0058928a; /* 0x58928a */
extern unsigned int DAT_0058928c; /* 0x58928c */
extern unsigned char *DAT_0058929c; /* 0x58929c */
extern unsigned int DAT_005892a0; /* 0x5892a0 */
extern unsigned char DAT_005b4824; /* 0x5b4824 */

/* Supplied declaration required: FUN_001a0ff4. */


void FUN_00159030(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  DAT_0058929c = &DAT_005b4824;
  DAT_005892a0 = 0xc25c;
  DAT_00589288 = 0xff;
  DAT_0058928a = 0xff;
  if ((DAT_0058928c == 0) || (DAT_00589285 != '\0')) {
    temp_v0 = 0xc8a0a7fc;
  }
  else {
    temp_v0 = DAT_0058928c;
    FUN_001a0ff4();
  }
  if ((temp_v0 & 0x80000000) == 0) {
    DAT_00589287 = 1;
  }
  return;
}
