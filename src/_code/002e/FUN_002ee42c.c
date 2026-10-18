/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee42c` (_code @ 0x2ee42c, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_002216e4(); /* 0x2216e4 */
extern unsigned char LAB_002ee508; /* 0x2ee508 */
extern unsigned char LAB_002ee520; /* 0x2ee520 */
extern unsigned char LAB_002ee534; /* 0x2ee534 */
extern unsigned char LAB_002ee548; /* 0x2ee548 */
extern unsigned char LAB_002ee55c; /* 0x2ee55c */
extern unsigned char LAB_002fcd0c; /* 0x2fcd0c */
extern unsigned char LAB_002fcd2c; /* 0x2fcd2c */
extern unsigned char LAB_002fcd4c; /* 0x2fcd4c */
extern unsigned char LAB_0030a0b4; /* 0x30a0b4 */
extern unsigned char *DAT_0043dea8; /* 0x43dea8 */
extern unsigned char *DAT_0043deac; /* 0x43deac */
extern unsigned char *DAT_0043deb0; /* 0x43deb0 */
extern unsigned char *DAT_0043deb4; /* 0x43deb4 */
extern unsigned char *DAT_0043deb8; /* 0x43deb8 */
extern unsigned int DAT_0043debc; /* 0x43debc */

/* Supplied declaration required: FUN_001dce30. */
/* Supplied declaration required: FUN_002c5788. */


unsigned char * FUN_002ee42c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  
  puVar1 = &LAB_002ee508;
  FUN_002c5788(&LAB_002ee508,2,0,0,FUN_002216e4,0,0);
  puVar2 = &LAB_002ee520;
  DAT_0043dea8 = puVar1;
  FUN_002c5788(&LAB_002ee520,0x65,0,0,&LAB_002fcd2c,0,0);
  puVar1 = &LAB_002ee534;
  DAT_0043deac = puVar2;
  FUN_002c5788(&LAB_002ee534,0x75,0,0,&LAB_002fcd4c,0,0);
  puVar2 = &LAB_002ee548;
  DAT_0043deb4 = puVar1;
  FUN_002c5788(&LAB_002ee548,0xd3,0,0,&LAB_0030a0b4,0,0);
  puVar1 = &LAB_002ee55c;
  DAT_0043deb8 = puVar2;
  FUN_002c5788(&LAB_002ee55c,0xe6,0,0,&LAB_002fcd0c,0,0);
  DAT_0043deb0 = puVar1;
  FUN_001dce30();
  DAT_0043debc = 0;
  return DAT_0043dea8;
}
