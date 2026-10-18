/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dce30` (_code @ 0x1dce30, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0044ea81; /* 0x44ea81 */
extern unsigned char DAT_0044ea87; /* 0x44ea87 */
extern unsigned char DAT_0044ea88; /* 0x44ea88 */
extern unsigned char DAT_0044ea89; /* 0x44ea89 */
extern unsigned int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned char *DAT_0044eaa8; /* 0x44eaa8 */
extern unsigned char DAT_0044f820; /* 0x44f820 */
extern unsigned int DAT_004724cc; /* 0x4724cc */
extern unsigned int DAT_004724d0; /* 0x4724d0 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */
extern unsigned int DAT_004d8c10; /* 0x4d8c10 */
extern unsigned int DAT_004d8c14; /* 0x4d8c14 */
extern unsigned int DAT_004d8c18; /* 0x4d8c18 */
extern unsigned int DAT_004d8c1c; /* 0x4d8c1c */
extern unsigned char DAT_004d8d20; /* 0x4d8d20 */
extern unsigned int DAT_004d9228; /* 0x4d9228 */
extern unsigned int DAT_004d922c; /* 0x4d922c */
extern unsigned int DAT_004d9230; /* 0x4d9230 */
extern unsigned int DAT_004d9234; /* 0x4d9234 */
extern unsigned int DAT_004d9238; /* 0x4d9238 */
extern unsigned int DAT_004d923c; /* 0x4d923c */
extern unsigned int DAT_004d9240; /* 0x4d9240 */
extern unsigned int DAT_004d9244; /* 0x4d9244 */
extern unsigned int DAT_004d9248; /* 0x4d9248 */
extern unsigned int DAT_004d924c; /* 0x4d924c */
extern unsigned int DAT_004d9250; /* 0x4d9250 */
extern unsigned int DAT_004d9254; /* 0x4d9254 */
extern unsigned int DAT_004d9258; /* 0x4d9258 */
extern unsigned int DAT_004d925c; /* 0x4d925c */
extern unsigned int DAT_004d9260; /* 0x4d9260 */

/* Supplied declaration required: FUN_00107734. */
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002fc1a8. */


void FUN_001dce30(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00107734(0,0x12345678);
  FUN_002fc1a8();
  temp_v0 = 0;
  DAT_004d9228 = 0;
  DAT_004d922c = 0x42c80000;
  DAT_004d9230 = 0x44160000;
  temp_v1 = 0x3f800000;
  DAT_004d9234 = 0;
  DAT_004d9238 = 0x3f800000;
  DAT_004d923c = 0;
  DAT_004d9240 = 0;
  DAT_004d9244 = 0;
  DAT_004d9248 = 0;
  DAT_004d924c = 0;
  DAT_004d9250 = 0;
  DAT_004d9254 = 0;
  DAT_004d9258 = 0;
  DAT_004d925c = 0;
  DAT_004d9260 = 0;
  FUN_002c2044(&DAT_004d8d20,1);
  FUN_002c1edc(&DAT_004d8d20,&DAT_004d9228);
  FUN_002c1e30(&DAT_004d8d20,1);
  FUN_00298d50(&DAT_004d8d20);
  DAT_0044eaa8 = &DAT_0044f820;
  DAT_0044ea8c = 0;
  DAT_004d8bd0 = 0;
  DAT_0044ea88 = 0;
  DAT_0044ea87 = 0;
  DAT_0044ea89 = 0;
  DAT_0044ea81 = 0;
  DAT_004d8c10 = 0;
  DAT_004d8c14 = 0;
  DAT_004d8c18 = 0;
  DAT_004d8c1c = temp_v1;
  DAT_004724cc = temp_v0;
  DAT_004724d0 = temp_v0;
  return;
}
