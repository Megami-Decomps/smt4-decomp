/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023346c` (_code @ 0x23346c, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_004073c8; /* 0x4073c8 */
extern unsigned char DAT_0040741c; /* 0x40741c */
extern unsigned char DAT_00407434; /* 0x407434 */

/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */


void FUN_0023346c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  FUN_002c3178();
  FUN_002c312c(param_1,&DAT_004073c8,0x54,&DAT_0040741c,0x18,0,0,0,0,&DAT_00407434,0x70);
  temp_v0 = param_1 + 0x1a4;
  temp_v1 = param_1 + 0x3d4;
  temp_v4 = 0;
  do {
    FUN_002bd954(param_1 + temp_v4 * 0x8c + 0x20,0x1c,1,param_1,0x15);
    switch(temp_v4) {
    case 0:
      FUN_002bd8e8(param_1 + 0x20,0);
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 8) {
        return;
      }
      continue;
    case 1:
      temp_v2 = param_1 + 0xac;
      temp_v3 = 1;
      break;
    case 2:
      FUN_002bee58(param_1 + 0x138,0);
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 8) {
        return;
      }
      continue;
    case 3:
      temp_v3 = 2;
      temp_v2 = temp_v0 + 0x20;
      break;
    case 4:
      temp_v2 = param_1 + 0x250;
      temp_v3 = 3;
      break;
    case 5:
      temp_v2 = param_1 + 0x2dc;
      temp_v3 = 4;
      break;
    case 6:
      temp_v2 = param_1 + 0x368;
      temp_v3 = 5;
      break;
    case 7:
      temp_v3 = 6;
      temp_v2 = temp_v1 + 0x20;
      break;
    default:
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 8) {
        return;
      }
      continue;
    }
    FUN_002bd8e8(temp_v2,temp_v3,0);
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 8) {
      return;
    }
  } while( 1 );
}
