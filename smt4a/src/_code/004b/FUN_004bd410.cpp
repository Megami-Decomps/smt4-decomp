/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd410` (_code @ 0x4bd410, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_0035e458(void);
int FUN_003e4b2c(unsigned int);
int battleRecordInitializeFromDefinition(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int gameGetSlotTable(void);
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_0035d89c(unsigned int);
/* Supplied declaration required: FUN_0035e458. */
extern int FUN_00370ecc(unsigned int);
extern unsigned int dataTable0aSub0GetValueById(unsigned int);
/* Supplied declaration required: FUN_003e4b2c. */
/* Supplied declaration required: battleRecordInitializeFromDefinition. */


void FUN_004bd410(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 unstructured edge(s); 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r9;
  unsigned char temp_v6;
  
  temp_v5 = 0xffffffff;
  temp_v4 = 0;
  do {
    if ((temp_v4 & 0xffff) >= 0xc) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = gameGetSlotTable();
      temp_v3 = temp_v3 + (temp_v4 & 0xffff) * 0x134 + 0x1ddc;
    }
    if (*(unsigned short *)(temp_v3 + 300) == param_1) {
      *(unsigned int *)(temp_v3 + 0x130) = *(unsigned int *)(temp_v3 + 0x130) | 1;
      break;
    }
    if (((int)temp_v5 < 0) && (*(unsigned short *)(temp_v3 + 300) == 0)) {
      temp_v5 = temp_v4;
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 0xc);
  if (-1 < (int)temp_v5) {
    if ((temp_v5 & 0xffff) >= 0xc) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = gameGetSlotTable();
      temp_v3 = temp_v3 + (temp_v5 & 0xffff) * 0x134 + 0x1ddc;
    }
    *(short *)(temp_v3 + 300) = (short)param_1;
    *(unsigned int *)(temp_v3 + 0x130) = *(unsigned int *)(temp_v3 + 0x130) | 1;
    *(short *)(temp_v3 + 0x12e) = (short)temp_v5;
    battleRecordInitializeFromDefinition(temp_v3,0);
  }
  temp_v0 = FUN_00370ecc(param_1);
  if (temp_v0 != 0) {
    unaff_r9 = (unsigned int)*(unsigned short *)(temp_v0 + 4);
  }
  if (temp_v0 == 0 || param_1 == unaff_r9) {
    return;
  }
  temp_v5 = 0;
  do {
    if ((temp_v5 & 0xffff) >= 0xc) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = gameGetSlotTable();
      temp_v0 = temp_v0 + (temp_v5 & 0xffff) * 0x134 + 0x1ddc;
    }
    if ((unsigned int)*(unsigned short *)(temp_v0 + 300) == (unaff_r9 & 0xffff)) {
      if (temp_v0 == 0) break;
      temp_v5 = 0;
      while( 1 ) {
        if ((temp_v5 & 0xffff) >= 0xc) {
          temp_v1 = 0;
        }
        else {
          temp_v1 = gameGetSlotTable();
          temp_v1 = temp_v1 + (temp_v5 & 0xffff) * 0x134 + 0x1ddc;
        }
        if (*(unsigned short *)(temp_v1 + 300) == param_1) break;
        temp_v5 = temp_v5 + 1;
        if ((int)temp_v5 >= 0xc) goto LAB_004bd598;
      }
      if (temp_v1 == 0) break;
      if (-1 >= (int)((unsigned int)*(unsigned short *)(temp_v0 + 100) - (unsigned int)*(unsigned short *)(temp_v1 + 100))) break;
      FUN_003e4b2c(param_1);
      break;
    }
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < 0xc);
LAB_004bd598:
  temp_v5 = 0;
LAB_004bd5a0:
  if ((temp_v5 & 0xffff) >= 0xc) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = gameGetSlotTable();
    temp_v0 = temp_v0 + (temp_v5 & 0xffff) * 0x134 + 0x1ddc;
  }
  if ((unsigned int)*(unsigned short *)(temp_v0 + 300) != (unaff_r9 & 0xffff)) {
    temp_v5 = temp_v5 + 1;
    if ((int)temp_v5 < 0xc) goto LAB_004bd5a0;
    temp_v0 = 0;
  }
  temp_v5 = dataTable0aSub0GetValueById(unaff_r9 & 0xffff);
  if (temp_v0 == 0 || temp_v5 == 0) {
    return;
  }
  temp_v1 = 0;
  while( 1 ) {
    temp_v2 = temp_v0 + temp_v1 * 2;
    temp_v6 = *(unsigned short *)(temp_v2 + 0x34) == temp_v5;
    if (!temp_v6) {
      param_4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x36);
    }
    if (temp_v6 || param_4 == temp_v5) break;
    temp_v1 = temp_v1 + 2;
    if (temp_v1 >= 8) {
      return;
    }
  }
  if (temp_v3 != 0) {
    temp_v0 = 0;
    do {
      temp_v4 = temp_v3 + temp_v0 * 2;
      temp_v6 = *(unsigned short *)(temp_v4 + 0x34) == temp_v5;
      if (!temp_v6) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 0x36);
      }
      if (temp_v6 || temp_v4 == temp_v5) {
        return;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 8);
  }
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    if (*(short *)(temp_v3 + temp_v1 * 2 + 0x34) == 0) break;
    temp_v1 = temp_v1 + 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 < 8);
  if (temp_v3 == 0) {
    return;
  }
  if (temp_v0 >= 8) {
    return;
  }
  *(short *)(temp_v3 + temp_v0 * 2 + 0x34) = (short)temp_v5;
  temp_v4 = temp_v5;
  dataTable04FindById();
  temp_v1 = 0;
  if ((temp_v4 != 0) && (*(unsigned short *)(temp_v4 + 0x26) < 0x12)) {
    temp_v1 = (int)*(char *)((unsigned int)*(unsigned short *)(temp_v4 + 0x26) + temp_v3 + 0x4c);
  }
  temp_v4 = temp_v5;
  FUN_0035e458();
  temp_v2 = FUN_0035d89c(temp_v5);
  if ((int)temp_v4 < temp_v1) {
    temp_v1 = (int)(char)temp_v4;
  }
  else if (temp_v1 < temp_v2) {
    temp_v1 = (int)(char)temp_v2;
  }
  *(char *)(temp_v3 + temp_v0 + 0x44) = (char)temp_v1;
  return;
}

} /* extern "C" */
