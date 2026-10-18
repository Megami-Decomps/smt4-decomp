/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002faf88` (_code @ 0x2faf88, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0049fc14; /* 0x49fc14 */
extern int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */
extern unsigned int DAT_0049fc40; /* 0x49fc40 */
extern unsigned int DAT_0049fc44; /* 0x49fc44 */
extern unsigned int DAT_0049fc48; /* 0x49fc48 */
extern unsigned int DAT_0049fc4c; /* 0x49fc4c */
extern int DAT_0049fd14; /* 0x49fd14 */

/* Supplied declaration required: FUN_002c57c8. */


void FUN_002faf88(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int in_r3;
  int temp_v0 [2];
  
  temp_v0[0] = in_r3;
  if (DAT_0049fc14 != '\0') {
    if (DAT_0049fc38 >= 200) {
      temp_v0[0] = DAT_0049fc38 - 200;
      DAT_0049fc1c = 0;
      FUN_002c57c8(0xe,temp_v0,4);
      return;
    }
    if (DAT_0049fc38 < 100) {
      FUN_002c57c8(6,0,0,in_r3);
      return;
    }
    if (DAT_0049fc18 < 100) {
      DAT_0049fc18 = DAT_0049fc38;
      DAT_0049fc1c = DAT_0049fc3c;
      DAT_0049fc24 = DAT_0049fc40;
      DAT_0049fc28 = DAT_0049fc44;
      DAT_0049fc2c = DAT_0049fc48;
      DAT_0049fc30 = DAT_0049fc4c;
    }
  }
  else {
    if (DAT_0049fd14 == -1) {
      temp_v0[0] = 3;
      FUN_002c57c8(0xe,temp_v0,4);
      return;
    }
    if (DAT_0049fd14 >= 200) {
      temp_v0[0] = DAT_0049fd14 - 200;
      FUN_002c57c8(0xe,temp_v0,4);
      return;
    }
    if (DAT_0049fd14 < 100) {
      FUN_002c57c8(6,0,0,in_r3);
      return;
    }
  }
  FUN_002c57c8(8,0,0,in_r3);
  return;
}
