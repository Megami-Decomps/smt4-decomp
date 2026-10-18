/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102aa0` (_code @ 0x102aa0, 0x250 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00102c04; /* 0x102c04 */
extern unsigned char LAB_00102c1c; /* 0x102c1c */
extern unsigned char LAB_00102c34; /* 0x102c34 */
extern unsigned char LAB_00102c4c; /* 0x102c4c */
extern unsigned char LAB_00102c64; /* 0x102c64 */
extern unsigned char LAB_00102c7c; /* 0x102c7c */
extern int FUN_00108018(); /* 0x108018 */
extern int FUN_001082b4(); /* 0x1082b4 */
extern int FUN_001092b0(); /* 0x1092b0 */
extern int FUN_00109aa0(); /* 0x109aa0 */
extern unsigned char LAB_0010a290; /* 0x10a290 */
extern int FUN_0010c7b4(); /* 0x10c7b4 */
extern unsigned char DAT_0043e1b8; /* 0x43e1b8 */
extern unsigned char DAT_0043e1f8; /* 0x43e1f8 */
extern unsigned int DAT_00464d68; /* 0x464d68 */
extern unsigned int uRam004729cc; /* 0x4729cc */

/* Supplied declaration required: FUN_0010a588. */
/* Supplied declaration required: FUN_0010a620. */
/* Supplied declaration required: FUN_0010a6fc. */
/* Supplied declaration required: FUN_0010af38. */
/* Supplied declaration required: FUN_0010b320. */
/* Supplied declaration required: FUN_0010b340. */
/* Supplied declaration required: FUN_0010ba24. */
/* Supplied declaration required: FUN_0010be60. */
/* Supplied declaration required: FUN_0010d610. */
/* Supplied declaration required: FUN_0010e570. */
/* Supplied declaration required: FUN_0010e5cc. */
/* Supplied declaration required: FUN_002c46e0. */
/* Supplied declaration required: FUN_002c4710. */
/* Supplied declaration required: FUN_002c4afc. */


void FUN_00102aa0(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned char *puVar1;
  
  FUN_0010a588(6);
  puVar1 = &LAB_00102c04;
  FUN_002c4afc(&LAB_00102c04);
  FUN_002c4710(0,puVar1);
  puVar1 = &LAB_00102c1c;
  FUN_002c4afc(&LAB_00102c1c);
  FUN_002c4710(1,puVar1);
  puVar1 = &LAB_00102c34;
  FUN_002c4afc(&LAB_00102c34);
  FUN_002c4710(2,puVar1);
  puVar1 = &LAB_00102c4c;
  FUN_002c4afc(&LAB_00102c4c);
  FUN_002c4710(3,puVar1);
  puVar1 = &LAB_00102c64;
  FUN_002c4afc(&LAB_00102c64);
  FUN_002c4710(4,puVar1);
  puVar1 = &LAB_00102c7c;
  FUN_002c4afc(&LAB_00102c7c);
  FUN_002c4710(5,puVar1);
  FUN_002c46e0(0);
  FUN_002c46e0(1);
  FUN_002c46e0(2);
  FUN_002c46e0(3);
  FUN_002c46e0(4);
  FUN_0010be60(3);
  FUN_0010b320(5);
  FUN_0010b340(&DAT_0043e1b8);
  FUN_0010e570(&DAT_0043e1f8);
  FUN_0010e5cc(0xffffff00);
  FUN_0010d610(&LAB_0010a290,FUN_0010c7b4);
  FUN_0010a620(0xf87a,1,0);
  FUN_0010a620(0xf87b,4,0);
  FUN_0010af38(FUN_001082b4);
  FUN_0010a6fc(FUN_00109aa0);
  FUN_0010ba24(0xf87a,1,FUN_00108018);
  FUN_0010ba24(0xf87b,4,FUN_001092b0);
  DAT_00464d68 = 0x8190;
  uRam004729cc = 0x8190;
  return;
}
