/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f34f8` (_code @ 0x3f34f8, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0035619c; /* 0x35619c */
extern unsigned char DAT_00420b9c; /* 0x420b9c */
extern unsigned char DAT_004306c0; /* 0x4306c0 */
extern unsigned char DAT_004307c0; /* 0x4307c0 */
extern unsigned char DAT_004308c0; /* 0x4308c0 */
extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned char *DAT_004d431c; /* 0x4d431c */
extern unsigned int DAT_004d4320; /* 0x4d4320 */
extern unsigned int DAT_004d4324; /* 0x4d4324 */
extern unsigned int DAT_004d4328; /* 0x4d4328 */
extern unsigned int DAT_004d432c; /* 0x4d432c */
extern unsigned int DAT_004d4330; /* 0x4d4330 */
extern unsigned int DAT_004d4340; /* 0x4d4340 */
extern unsigned int DAT_004d434c; /* 0x4d434c */
extern unsigned int DAT_004d4350; /* 0x4d4350 */
extern unsigned int DAT_004d4354; /* 0x4d4354 */
extern unsigned char *DAT_004d4358; /* 0x4d4358 */
extern unsigned int DAT_004d435c; /* 0x4d435c */
extern unsigned int DAT_004d4360; /* 0x4d4360 */
extern unsigned int DAT_004d4364; /* 0x4d4364 */
extern unsigned int DAT_004d4368; /* 0x4d4368 */
extern unsigned int DAT_004d436c; /* 0x4d436c */
extern unsigned int DAT_004d437c; /* 0x4d437c */
extern unsigned int DAT_004d4388; /* 0x4d4388 */
extern unsigned int DAT_004d438c; /* 0x4d438c */
extern unsigned int DAT_004d4390; /* 0x4d4390 */
extern unsigned char *DAT_004d4394; /* 0x4d4394 */
extern unsigned int DAT_004d4398; /* 0x4d4398 */
extern unsigned int DAT_004d439c; /* 0x4d439c */
extern unsigned int DAT_004d43a0; /* 0x4d43a0 */
extern unsigned int DAT_004d43a4; /* 0x4d43a4 */
extern unsigned int DAT_004d43a8; /* 0x4d43a8 */
extern unsigned int DAT_004d43b8; /* 0x4d43b8 */
extern unsigned int DAT_004d43c4; /* 0x4d43c4 */
extern unsigned int DAT_004d43c8; /* 0x4d43c8 */
extern unsigned int DAT_004d43cc; /* 0x4d43cc */
extern unsigned int DAT_004d43d0; /* 0x4d43d0 */
extern unsigned char DAT_004d43e0; /* 0x4d43e0 */

/* Supplied declaration required: FUN_002a4e50. */
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c5f58. */


unsigned long long FUN_003f34f8(void)

{
/* irregular: 3 native warning(s); review required */
  FUN_002c5f58(&DAT_004d43e0,&LAB_0035619c,0x10,0x20);
  DAT_0044e660 = 0;
  DAT_004d43d0 = 0;
  FUN_002c3b00(&DAT_004d43d0);
  DAT_004d4320 = 0;
  DAT_004d4324 = 0;
  DAT_004d4328 = 0;
  DAT_004d432c = 0;
  DAT_004d4330 = 0;
  DAT_004d4340 = 0;
  DAT_004d434c = 0;
  DAT_004d4350 = 0;
  DAT_004d4354 = 0xffffffff;
  DAT_004d431c = &DAT_00420b9c;
  FUN_002a4e50(&DAT_004d431c,0x10,&DAT_004306c0,0x100,4,0);
  FUN_002c3b00(&DAT_004d434c);
  DAT_004d435c = 0;
  DAT_004d4360 = 0;
  DAT_004d4364 = 0;
  DAT_004d4368 = 0;
  DAT_004d436c = 0;
  DAT_004d437c = 0;
  DAT_004d4388 = 0;
  DAT_004d438c = 0;
  DAT_004d4390 = 0xffffffff;
  DAT_004d4358 = &DAT_00420b9c;
  FUN_002a4e50(&DAT_004d4358,8,&DAT_004307c0,0x100,4,0);
  FUN_002c3b00(&DAT_004d4388);
  DAT_004d4398 = 0;
  DAT_004d439c = 0;
  DAT_004d43a0 = 0;
  DAT_004d43a4 = 0;
  DAT_004d43a8 = 0;
  DAT_004d43b8 = 0;
  DAT_004d43c4 = 0;
  DAT_004d43c8 = 0;
  DAT_004d43cc = 0xffffffff;
  DAT_004d4394 = &DAT_00420b9c;
  FUN_002a4e50(&DAT_004d4394,8,&DAT_004308c0,0x80,4,0);
  FUN_002c3b00(&DAT_004d43c4);
  return 0x14dbd0004d4394;
}
