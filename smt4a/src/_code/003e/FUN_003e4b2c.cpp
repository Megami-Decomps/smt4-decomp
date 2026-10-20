/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4b2c` (_code @ 0x3e4b2c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_0035e458(void);
int FUN_004cd0c8(int, int, unsigned short [10]);
int FUN_004cd4b8(int, int);
int SBORROW4(unsigned int, unsigned int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int gameGetSlotTable(void);
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_0035d89c(unsigned int);
/* Supplied declaration required: FUN_0035e458. */
/* Supplied declaration required: FUN_004cd0c8. */
/* Supplied declaration required: FUN_004cd4b8. */


unsigned int FUN_003e4b2c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned short temp_v9 [10];
  
  temp_v4 = 0;
  while( 1 ) {
    if ((temp_v4 & 0xffff) >= 0xc) {
      temp_v6 = 0;
    }
    else {
      temp_v6 = gameGetSlotTable();
      temp_v6 = temp_v6 + (temp_v4 & 0xffff) * 0x134 + 0x1ddc;
    }
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v6 + 300);
    if (temp_v0 == param_1) break;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 0xc) {
      return 0;
    }
  }
  temp_v8 = temp_v6 != 0;
  temp_v1 = 0;
  if (temp_v8) {
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v6 + 100);
    temp_v1 = param_2 - temp_v0;
  }
  if ((!temp_v8 || param_2 == temp_v0) || temp_v1 < 0 != (temp_v8 && SBORROW4(param_2,temp_v0))) {
    return 0;
  }
  temp_v1 = param_2 - temp_v0;
  if (param_3 < (int)(param_2 - temp_v0)) {
    temp_v1 = param_3;
  }
  temp_v9[0] = 0;
  temp_v9[1] = 0;
  temp_v9[2] = 0;
  temp_v9[3] = 0;
  temp_v9[4] = 0;
  temp_v9[5] = 0;
  temp_v9[6] = 0;
  temp_v9[7] = 0;
  FUN_004cd0c8(temp_v6,(int)(short)temp_v1,temp_v9);
  temp_v5 = 0;
  temp_v2 = 0;
  do {
    if (*(short *)(temp_v6 + temp_v2 * 2 + 0x34) == 0) break;
    temp_v2 = temp_v2 + 1;
    temp_v5 = temp_v5 + 1;
  } while (temp_v2 < 8);
  temp_v2 = 0;
  do {
    temp_v4 = (unsigned int)temp_v9[temp_v2];
    if (temp_v4 == 0) break;
    if ((temp_v6 != 0) && (temp_v5 < 8)) {
      *(unsigned short *)(temp_v6 + temp_v5 * 2 + 0x34) = temp_v9[temp_v2];
      temp_v0 = temp_v4;
      dataTable04FindById();
      temp_v7 = 0;
      if ((temp_v0 != 0) && (*(unsigned short *)(temp_v0 + 0x26) < 0x12)) {
        temp_v7 = (int)*(char *)((unsigned int)*(unsigned short *)(temp_v0 + 0x26) + temp_v6 + 0x4c);
      }
      temp_v0 = temp_v4;
      FUN_0035e458();
      temp_v3 = FUN_0035d89c(temp_v4);
      if ((int)temp_v0 < temp_v7) {
        temp_v7 = (int)(char)temp_v0;
      }
      else if (temp_v7 < temp_v3) {
        temp_v7 = (int)(char)temp_v3;
      }
      *(char *)(temp_v6 + temp_v5 + 0x44) = (char)temp_v7;
    }
    temp_v2 = temp_v2 + 1;
    temp_v5 = temp_v5 + 1;
  } while (temp_v2 < 8);
  FUN_004cd4b8(temp_v6,(int)(short)temp_v1);
  return 1;
}

} /* extern "C" */
