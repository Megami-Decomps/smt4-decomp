/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104e54` (_code @ 0x104e54, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004e23cc; /* 0x4e23cc */
extern unsigned int DAT_004e3138; /* 0x4e3138 */
extern unsigned int DAT_004e313c; /* 0x4e313c */
extern unsigned int DAT_004e3140; /* 0x4e3140 */
extern unsigned int DAT_004e3144; /* 0x4e3144 */
extern unsigned int DAT_004e3148; /* 0x4e3148 */
extern unsigned int DAT_004e314c; /* 0x4e314c */
extern unsigned char DAT_004e3150; /* 0x4e3150 */
extern unsigned char DAT_004e3151; /* 0x4e3151 */
extern unsigned char DAT_004e3152; /* 0x4e3152 */

/* Supplied declaration required: FUN_0010bf78. */
/* Supplied declaration required: FUN_0010c350. */
/* Supplied declaration required: FUN_0010fc60. */
/* Supplied declaration required: FUN_0010fc90. */
/* Supplied declaration required: FUN_0010ff4c. */
/* Supplied declaration required: FUN_00110978. */
/* Supplied declaration required: FUN_001177e0. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00104e54(void)

{
/* irregular: 8 native warning(s); review required */
  FUN_001177e0();
  FUN_0010c350();
  DAT_004e313c = 0;
  DAT_004e3138 = 0;
  DAT_004e3144 = 0;
  DAT_004e3148 = 0;
  DAT_004e3140 = 0;
  DAT_004e314c = 0;
  DAT_004e3151 = 0;
  DAT_004e3150 = 0;
  DAT_004e3152 = 0;
  FUN_0010bf78();
  if (DAT_004e23cc != 0) {
    FUN_002c415c();
  }
  FUN_00110978();
  FUN_0010ff4c();
  FUN_0010fc60();
  FUN_0010fc90();
  return;
}
