/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262d40` (_code @ 0x262d40, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282f80(int);
int FUN_00283f30(unsigned short *, int);
int FUN_0029f848(int, unsigned int, int, int, int, int);
int memClear(int, int);

/* stack frame of void: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_00282f80. */
/* Supplied declaration required: FUN_00283f30. */
/* Supplied declaration required: FUN_0029f848. */
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: memClear. */


void FUN_00262d40(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12 [5];
  unsigned short temp_v13;
  
  temp_v1 = DAT_0043da90;
  temp_v2 = FUN_002a8764();
  memClear(temp_v1 + 0xe3c,0x640);
  FUN_00283f30(&temp_v10,0);
  temp_v3 = (unsigned int)temp_v10;
  if (temp_v3 != 0) {
    *(unsigned int *)(temp_v1 + 0xe3c) = temp_v3;
    *(unsigned int *)(temp_v1 + 0xe40) = 0xffffffff;
  }
  temp_v3 = (unsigned int)(temp_v3 != 0);
  temp_v7 = 3;
  puVar7 = &temp_v10;
  do {
    temp_v4 = (unsigned int)puVar7[2];
    if (temp_v11 != 0) {
      temp_v9 = temp_v1 + temp_v3 * 8;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v9 + 0xe3c) = (unsigned int)temp_v11;
      *(unsigned int *)(temp_v9 + 0xe40) = 0xffffffff;
    }
    temp_v11 = puVar7[3];
    if (temp_v4 != 0) {
      temp_v9 = temp_v1 + temp_v3 * 8;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v9 + 0xe3c) = temp_v4;
      *(unsigned int *)(temp_v9 + 0xe40) = 0xffffffff;
    }
    temp_v7 = temp_v7 - 1;
    puVar7 = puVar7 + 2;
  } while (temp_v7 != 0);
  if (temp_v13 != 0) {
    temp_v7 = temp_v1 + temp_v3 * 8;
    temp_v3 = temp_v3 + 1;
    *(unsigned int *)(temp_v7 + 0xe3c) = (unsigned int)temp_v13;
    *(unsigned int *)(temp_v7 + 0xe40) = 0xffffffff;
  }
  temp_v7 = 0;
  do {
    temp_v9 = temp_v2 + temp_v7;
    if ((-1 < *(char *)(temp_v9 + 0x90f0)) && (temp_v5 = FUN_002a8740(), temp_v5 != 0)) {
      if (*(unsigned short *)(temp_v5 + 0x34) != 0) {
        temp_v6 = temp_v1 + temp_v3 * 8;
        temp_v3 = temp_v3 + 1;
        *(unsigned int *)(temp_v6 + 0xe3c) = (unsigned int)*(unsigned short *)(temp_v5 + 0x34);
        *(int *)(temp_v6 + 0xe40) = (int)*(char *)(temp_v9 + 0x90f0);
      }
      temp_v6 = 3;
      temp_v0 = *(unsigned short *)(temp_v5 + 0x36);
      puVar7 = (unsigned short *)(temp_v5 + 0x34);
      do {
        temp_v4 = (unsigned int)puVar7[2];
        if (temp_v0 != 0) {
          temp_v8 = temp_v1 + temp_v3 * 8;
          temp_v3 = temp_v3 + 1;
          *(unsigned int *)(temp_v8 + 0xe3c) = (unsigned int)temp_v0;
          *(int *)(temp_v8 + 0xe40) = (int)*(char *)(temp_v9 + 0x90f0);
        }
        temp_v0 = puVar7[3];
        if (temp_v4 != 0) {
          temp_v8 = temp_v1 + temp_v3 * 8;
          temp_v3 = temp_v3 + 1;
          *(unsigned int *)(temp_v8 + 0xe3c) = temp_v4;
          *(int *)(temp_v8 + 0xe40) = (int)*(char *)(temp_v9 + 0x90f0);
        }
        temp_v6 = temp_v6 - 1;
        puVar7 = puVar7 + 2;
      } while (temp_v6 != 0);
      if (*(unsigned short *)(temp_v5 + 0x42) != 0) {
        temp_v6 = temp_v1 + temp_v3 * 8;
        temp_v3 = temp_v3 + 1;
        *(unsigned int *)(temp_v6 + 0xe3c) = (unsigned int)*(unsigned short *)(temp_v5 + 0x42);
        *(int *)(temp_v6 + 0xe40) = (int)*(char *)(temp_v9 + 0x90f0);
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x18);
  FUN_0029f848(temp_v1 + 0x1dc,temp_v3,0xb,1,1,1);
  FUN_00282f80(9);
  return;
}

} /* extern "C" */
