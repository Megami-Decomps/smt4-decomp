/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033bb94` (_code @ 0x33bb94, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029bbc8(...);
int FUN_0029bde4(...);
int FUN_0029c1c8(...);
int FUN_0029c6b0(...);
int FUN_002b7bca(...);
int rt_memcpy_w(...);

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp5E6; /* 0x5e6: local_5e6 */
} param_3_stack;

extern int FUN_0020154c(...); /* 0x20154c */

extern int recordContainsPairedId(int);
/* Supplied declaration required: FUN_0029bbc8. */
/* Supplied declaration required: FUN_0029bde4. */
/* Supplied declaration required: FUN_0029c1c8. */
/* Supplied declaration required: FUN_0029c6b0. */
extern unsigned int FUN_0029c8f4(int);
extern int gameGetUnitRecord(unsigned int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0033bb94(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [52];
  short asStack_5fc [11];
  unsigned char temp_v8;
  unsigned char temp_v9 [1476];
  
  rt_memcpy_w(temp_v7,param_1,0x604);
  temp_v1 = gameGetSlotTable();
  temp_v5 = (unsigned int)temp_v8;
  temp_v6 = -1;
  if ((int)*(char *)(temp_v1 + 0x9108) == temp_v5) {
    temp_v6 = 0;
  }
  else if ((int)*(char *)(temp_v1 + 0x9109) == temp_v5) {
    temp_v6 = 1;
  }
  else if ((int)*(char *)(temp_v1 + 0x910a) == temp_v5) {
    temp_v6 = 2;
  }
  FUN_0029bbc8(*(unsigned char *)(param_1 + 0x4a));
  FUN_0029c1c8(temp_v5,param_2,0);
  temp_v2 = gameGetUnitRecord(temp_v5);
  if (-1 < temp_v6) {
    *(unsigned char *)(temp_v1 + temp_v6 + 0x9108) = *(unsigned char *)(temp_v2 + 0x4a);
  }
  temp_v1 = 0;
  do {
    temp_v6 = temp_v2 + temp_v1;
    temp_v4 = temp_v1 + 2;
    *(unsigned char *)(temp_v6 + 0x4c) = *(unsigned char *)(temp_v6 + 0x4c) | temp_v9[temp_v1];
    *(unsigned char *)(temp_v6 + 0x4d) = temp_v9[temp_v1 + 1] | *(unsigned char *)(temp_v6 + 0x4d);
    temp_v1 = temp_v4;
  } while (temp_v4 < 0x40);
  temp_v1 = 0;
  do {
    temp_v4 = temp_v2 + temp_v1;
    temp_v6 = temp_v1 + 0x40;
    temp_v1 = temp_v1 + 1;
    temp_v5 = (unsigned int)temp_v9[temp_v6] + (unsigned int)*(unsigned char *)(temp_v4 + 0x8c);
    if (temp_v5 >= 0x100) {
      temp_v5 = 0xff;
    }
    *(char *)(temp_v4 + 0x8c) = (char)temp_v5;
  } while (temp_v1 < 0x500);
  FUN_0029bde4(temp_v2);
  temp_v4 = 0;
  temp_v1 = 0;
  temp_v6 = 0;
  do {
    if (asStack_5fc[temp_v6] != 0) {
      temp_v3 = recordContainsPairedId(temp_v2);
      if (temp_v3 != 0) {
        if (asStack_5fc[temp_v6] != 0) {
          temp_v4 = temp_v4 + 1;
        }
      }
      else {
        temp_v3 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(param_3 + temp_v3) = asStack_5fc[temp_v6];
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_002b7bca(param_3,8,2,FUN_0020154c);
  temp_v5 = FUN_0029c8f4(temp_v2);
  if (0 < 8 - temp_v1) {
    *(unsigned short *)(param_3 + temp_v1 * 2) = 0;
  }
  if (0 < (int)(temp_v5 - 1)) {
    psVar5 = (short *)(temp_v2 + 0x32);
    if (((temp_v5 & 1) == 0) && (psVar5 = (short *)(temp_v2 + 0x34), *psVar5 == 0)) {
      temp_v1 = temp_v1 - 1;
    }
    temp_v0 = psVar5[1];
    temp_v3 = 0;
    for (temp_v6 = (int)(temp_v5 - 1) >> 1; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
      if (temp_v0 == 0) {
        temp_v1 = temp_v1 - 1;
      }
      temp_v0 = psVar5[3];
      if (psVar5[2] == 0) {
        temp_v3 = temp_v3 - 1;
      }
      psVar5 = psVar5 + 2;
    }
    temp_v1 = temp_v1 + temp_v3;
  }
  if ((-1 < (int)(temp_v5 - 1)) && (*(short *)(temp_v2 + (temp_v5 - 1) * 2 + 0x34) == 0)) {
    temp_v1 = temp_v1 - 1;
  }
  if (0 < temp_v1) {
    FUN_0029c6b0(temp_v2);
    return 1;
  }
  temp_v1 = 0;
  do {
    temp_v0 = *(short *)(param_3 + temp_v1 * 2);
    temp_v6 = temp_v4;
    if (temp_v0 != 0) {
      for (; temp_v6 < 8; temp_v6 = temp_v6 + 1) {
        if (*(short *)(temp_v2 + temp_v6 * 2 + 0x34) == 0) {
          *(short *)(temp_v2 + temp_v6 * 2 + 0x34) = temp_v0;
          break;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 8) {
      FUN_0029c6b0(temp_v2);
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
