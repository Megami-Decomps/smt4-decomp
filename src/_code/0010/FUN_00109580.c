/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109580` (_code @ 0x109580, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int DAT_0044e0e4; /* 0x44e0e4 */
extern unsigned char DAT_004c54f4; /* 0x4c54f4 */
extern unsigned int DAT_004c5604; /* 0x4c5604 */
extern unsigned int DAT_004c5608; /* 0x4c5608 */
extern unsigned int DAT_004c560c; /* 0x4c560c */
extern unsigned int DAT_004c5610; /* 0x4c5610 */
extern unsigned int DAT_004c5614; /* 0x4c5614 */
extern unsigned int *DAT_004c5618; /* 0x4c5618 */
extern unsigned int DAT_004c561c; /* 0x4c561c */
extern unsigned int DAT_004c5620; /* 0x4c5620 */
extern unsigned char DAT_004c5624; /* 0x4c5624 */
extern unsigned char DAT_004c5625; /* 0x4c5625 */
extern unsigned int DAT_004c5628; /* 0x4c5628 */
extern unsigned int DAT_004c562c; /* 0x4c562c */
extern unsigned int DAT_004c5630; /* 0x4c5630 */

/* Supplied declaration required: FUN_00120dc4. */
/* Supplied declaration required: FUN_00121230. */
/* Supplied declaration required: FUN_00121248. */
/* Supplied declaration required: FUN_001212e8. */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned char *);
extern int FUN_002c564c(unsigned int);


void FUN_00109580(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    DAT_004c5604 = 0x5a;
    DAT_004c5608 = 0x4b0;
    DAT_004c560c = 0x1e;
    DAT_004c5610 = 0x3f000000;
    DAT_004c5614 = 0x3f4ccccd;
    DAT_004c5628 = 0xbe0;
    DAT_004c562c = 0xe60;
    DAT_004c5630 = 0x820;
    DAT_004c5618 = &DAT_004c5628;
    DAT_004c561c = 0x3ecccccd;
    DAT_004c5620 = 0x3ecccccd;
    DAT_004c5625 = 1;
    DAT_004c5624 = 0;
    FUN_001212e8(&DAT_004c54f4);
    puVar2 = &DAT_004c54f4;
    FUN_00121248(&DAT_004c54f4);
    DAT_0044e0e4 = FUN_002c5300(0x10000,0x100,0,puVar2);
    FUN_00121230(&DAT_004c54f4,DAT_0044e0e4,puVar2);
    FUN_00120dc4(1,&DAT_004c54f4);
    return;
  }
  return;
}
