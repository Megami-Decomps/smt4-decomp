/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee3d4` (_code @ 0x2ee3d4, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_002215e8(); /* 0x2215e8 */
extern unsigned char LAB_002ee4b0; /* 0x2ee4b0 */
extern unsigned char LAB_002ee4c8; /* 0x2ee4c8 */
extern unsigned char LAB_002ee4dc; /* 0x2ee4dc */
extern unsigned char LAB_002ee4f0; /* 0x2ee4f0 */
extern unsigned char LAB_002ee504; /* 0x2ee504 */
extern unsigned char LAB_002fcc94; /* 0x2fcc94 */
extern unsigned char LAB_002fccb4; /* 0x2fccb4 */
extern unsigned char LAB_002fccd4; /* 0x2fccd4 */
extern unsigned char LAB_0030a07c; /* 0x30a07c */
extern unsigned char *DAT_0043dea8; /* 0x43dea8 */
extern unsigned char *DAT_0043deac; /* 0x43deac */
extern unsigned char *DAT_0043deb0; /* 0x43deb0 */
extern unsigned char *DAT_0043deb4; /* 0x43deb4 */
extern unsigned char *DAT_0043deb8; /* 0x43deb8 */
extern unsigned int DAT_0043debc; /* 0x43debc */

/* Supplied declaration required: FUN_001dcd28. */
/* Supplied declaration required: FUN_002c5978. */


unsigned char * FUN_002ee3d4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  
  puVar1 = &LAB_002ee4b0;
  FUN_002c5978(&LAB_002ee4b0,2,0,0,FUN_002215e8,0,0);
  puVar2 = &LAB_002ee4c8;
  DAT_0043dea8 = puVar1;
  FUN_002c5978(&LAB_002ee4c8,0x65,0,0,&LAB_002fccb4,0,0);
  puVar1 = &LAB_002ee4dc;
  DAT_0043deac = puVar2;
  FUN_002c5978(&LAB_002ee4dc,0x75,0,0,&LAB_002fccd4,0,0);
  puVar2 = &LAB_002ee4f0;
  DAT_0043deb4 = puVar1;
  FUN_002c5978(&LAB_002ee4f0,0xd3,0,0,&LAB_0030a07c,0,0);
  puVar1 = &LAB_002ee504;
  DAT_0043deb8 = puVar2;
  FUN_002c5978(&LAB_002ee504,0xe6,0,0,&LAB_002fcc94,0,0);
  DAT_0043deb0 = puVar1;
  FUN_001dcd28();
  DAT_0043debc = 0;
  return DAT_0043dea8;
}
