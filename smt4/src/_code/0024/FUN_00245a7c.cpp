/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245a7c` (_code @ 0x245a7c, 0x1f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfc24(int, int, unsigned int, int);
int dataTableGet(int, int);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_2_stack;

extern char randRange(unsigned int);
extern int gameGetSupportUnitData(void);
extern int gameGetOptionProgressStatus(void);
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);
extern int dataTableGetCount(void);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_00245a7c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int aiStack_80 [18];
  int temp_v11 [6];
  
  dataTableGet(0x3e,0);
  temp_v3 = dataTableGetEntries();
  dataTableGet(0x3e,0);
  temp_v4 = dataTableGetCount();
  temp_v5 = gameGetSupportUnitData();
  temp_v0 = *(unsigned short *)(temp_v5 + 0x604);
  temp_v5 = gameGetOptionProgressStatus();
  if (temp_v5 != 2) {
    temp_v5 = 0;
    if (temp_v4 < 1) {
      return 0;
    }
    while (rt_memcpy_w(&temp_v9,temp_v3 + temp_v5 * 0x50,0x50), temp_v9 != temp_v0) {
      temp_v5 = temp_v5 + 1;
      if (temp_v4 <= temp_v5) {
        return 0;
      }
    }
  }
  else {
    temp_v5 = gameGetSupportUnitData();
    temp_v0 = *(unsigned short *)(temp_v5 + 0x46);
    temp_v5 = 0;
    if (temp_v4 < 1) {
      return 0;
    }
    while (rt_memcpy_w(&temp_v9,temp_v3 + temp_v5 * 0x50,0x50), temp_v10 != temp_v0) {
      temp_v5 = temp_v5 + 1;
      if (temp_v4 <= temp_v5) {
        return 0;
      }
    }
  }
  if (-1 < temp_v5) {
    rt_memcpy_w(&temp_v9,temp_v3 + temp_v5 * 0x50,0x50);
    temp_v3 = -1;
    temp_v11[0] = 0;
    temp_v7 = 0xffffffff;
    temp_v4 = 0;
    temp_v11[1] = 0;
    temp_v11[2] = 0;
    temp_v11[3] = 0;
    temp_v11[4] = 0;
    temp_v11[5] = 0;
    do {
      temp_v5 = aiStack_80[param_1 * 6 + temp_v4];
      if (temp_v5 == 0) break;
      temp_v1 = temp_v4;
      if (temp_v5 != param_2) {
        temp_v11[temp_v4] = temp_v5;
        temp_v7 = (unsigned int)(char)((char)temp_v7 + '\x01');
        temp_v1 = temp_v3;
      }
      temp_v3 = temp_v1;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 6);
    if (-1 < (int)temp_v7) {
      if (-1 < temp_v3) {
        temp_v8 = 5 - temp_v3;
        if (0 < (int)temp_v8) {
          piVar7 = temp_v11 + temp_v3;
          if ((temp_v8 & 1) != 0) {
            piVar7 = temp_v11 + temp_v3 + 1;
            temp_v11[temp_v3] = temp_v11[temp_v3 + 1];
          }
          for (temp_v3 = (int)temp_v8 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
            *piVar7 = piVar7[1];
            piVar7[1] = piVar7[2];
            piVar7 = piVar7 + 2;
          }
        }
        temp_v11[5] = 0;
      }
      temp_v2 = randRange(temp_v7 & 0xffff);
      temp_v6 = FUN_002bfdc4();
      FUN_002bfc24(0,temp_v11[temp_v2],temp_v6,4);
      return temp_v11[temp_v2];
    }
  }
  return 0;
}

} /* extern "C" */
