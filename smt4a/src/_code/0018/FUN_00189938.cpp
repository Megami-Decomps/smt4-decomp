/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189938` (_code @ 0x189938, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(void);
int FUN_001a0ff4(int, unsigned int, unsigned int, int, int, signed char *);
int FUN_001a1118(int, int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00589284; /* 0x589284 */
extern signed char DAT_00589285; /* 0x589285 */
extern signed char DAT_00589286; /* 0x589286 */
extern signed char DAT_00589287; /* 0x589287 */
extern unsigned short DAT_00589288; /* 0x589288 */
extern unsigned short DAT_0058928a; /* 0x58928a */
extern int DAT_0058928c; /* 0x58928c */
extern unsigned int DAT_0058929c; /* 0x58929c */
extern unsigned int DAT_005892a0; /* 0x5892a0 */
extern unsigned char DAT_0061a664; /* 0x61a664 */

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_001a0ff4. */
/* Supplied declaration required: FUN_001a1118. */


void FUN_00189938(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  DAT_00589284 = 0;
  if (DAT_00589286 != '\0') {
    if ((DAT_0058928c == 0) || (DAT_00589285 != '\0')) {
      temp_v0 = -0x375f5804;
    }
    else {
      temp_v0 = DAT_0058928c;
      FUN_001a0ff4(DAT_0058928c,DAT_0058929c,DAT_005892a0,DAT_00589288,DAT_0058928a,&DAT_00589285);
    }
    if (temp_v0 < 0) {
      FUN_00189a38();
    }
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_0061a664 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_0061a664 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    DAT_00589286 = '\0';
    if (DAT_0058928c != 0) {
      FUN_001a1118(DAT_0058928c,(int)DAT_00589287);
      return;
    }
  }
  return;
}

} /* extern "C" */
