/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4fc4` (_code @ 0x1f4fc4, 0x314 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_004012e4; /* 0x4012e4 */
extern unsigned char DAT_004012f0; /* 0x4012f0 */
extern unsigned char DAT_00401374; /* 0x401374 */
extern unsigned char DAT_00401404; /* 0x401404 */
extern unsigned char DAT_00401420; /* 0x401420 */

/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002aa268. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */


void FUN_001f4fc4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned int *)(param_1 + 0x2180) = 0;
  *(unsigned int *)(param_1 + 0x217c) = 0;
  *(unsigned int *)(param_1 + 0x2188) = 0;
  *(unsigned short *)(param_1 + 0x218c) = 0;
  *(unsigned short *)(param_1 + 0x218e) = 0;
  *(unsigned int *)(param_1 + 0x2184) = 0;
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(param_1 + temp_v1 * 2 + 0x21e4) = 0xffff;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x21e4) = 0xffff;
  } while (temp_v0 < 10);
  temp_v0 = 0;
  temp_v1 = 10;
  do {
    temp_v3 = param_1 + temp_v0 * 2;
    temp_v2 = temp_v0 * 4;
    *(unsigned short *)(temp_v3 + 0x2194) = 0xffff;
    *(unsigned short *)(temp_v3 + 0x21a8) = 0;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(param_1 + temp_v2 + 0x21bc) = 0;
  } while (temp_v1 != 0);
  FUN_002c3344(param_1);
  FUN_002c32f8(param_1,&DAT_004012e4,0xc,&DAT_004012f0,0x84,&DAT_00401374,0x90,&DAT_00401404,0x1c,
               &DAT_00401420,0x39c);
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,0,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 + 0xb);
    FUN_002aa268(temp_v1 + 0x20,5,0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  temp_v0 = 10;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,4,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 + 0x15);
    FUN_002bf030(temp_v1 + 0x20,2);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x14);
  temp_v0 = 0x14;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,7,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 + 1);
    FUN_002bf030(temp_v1 + 0x20,5);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x1e);
  temp_v0 = 0x1e;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,2,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 - 9);
    FUN_002bf030(temp_v1 + 0x20,3);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x28);
  temp_v0 = 0x28;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,4000,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 - 0x13);
    FUN_002bf030(temp_v1 + 0x20,0xb);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  temp_v0 = 0x32;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_002bdb2c(temp_v1 + 0x20,0x14,0xfa6,param_1,2);
    FUN_00296154(temp_v1 + 0x20,0x14,temp_v0 - 0x1d);
    FUN_002bf030(temp_v1 + 0x20,10);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x3c);
  FUN_002bdb2c(param_1 + 0x20f0,0x14,0,param_1,1);
  return;
}
