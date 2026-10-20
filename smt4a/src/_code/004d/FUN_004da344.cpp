/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da344` (_code @ 0x4da344, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_004daf18(int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_00184310. */
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern unsigned int computeCountLimit(void);
extern int FUN_004da980(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004daf18. */
extern int FUN_004db65c(int, unsigned int, unsigned int, unsigned char *);
extern int FUN_004dc3b4(int, unsigned int, unsigned int, unsigned char *);


unsigned char
FUN_004da344(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned char *param_5)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  
  temp_v6 = 1;
  temp_v0 = gameGetSlotTable();
  if (param_5 != (unsigned char *)0x0) {
    *(unsigned int *)(param_5 + 4) = 0;
    *(unsigned short *)(param_5 + 8) = 0;
  }
  if (param_4 != 0) {
    *(unsigned int *)(param_1 + 0x1b0) = 0;
    temp_v1 = FUN_004db65c(param_1,param_2,param_3,temp_v7);
    if (temp_v1 != 0) {
      if (param_5 != (unsigned char *)0x0) {
        *(unsigned short *)(param_5 + 8) = (unsigned short)((temp_v8 << 0xf) >> 0x11);
      }
    }
    else {
joined_r0x004da498:
      temp_v6 = 0;
      if (param_5 != (unsigned char *)0x0) {
        temp_v6 = 0;
        *(unsigned int *)(param_5 + 4) = 1;
        *(unsigned short *)(param_5 + 8) = (unsigned short)((temp_v8 << 0xf) >> 0x11);
      }
    }
  }
  else {
    temp_v1 = FUN_004dc3b4(param_1,param_2,param_3,temp_v7);
    if (temp_v1 == 0) goto joined_r0x004da498;
    if (param_5 != (unsigned char *)0x0) {
      *(unsigned short *)(param_5 + 8) = (unsigned short)((temp_v8 << 0xf) >> 0x11);
    }
  }
  temp_v2 = (temp_v8 & 0x1ffff) >> 2;
  FUN_00184310();
  if ((temp_v2 != 0) && (temp_v3 = computeCountLimit(), temp_v3 < *(unsigned short *)(temp_v2 + 6))) {
    if (param_5 != (unsigned char *)0x0) {
      temp_v3 = 2;
    }
    temp_v6 = 0;
    if (param_5 != (unsigned char *)0x0) {
      *(unsigned int *)(param_5 + 4) = temp_v3;
    }
  }
  temp_v1 = 0;
  while ((*(char *)(temp_v0 + temp_v1 + 0x1c88) < '\0' ||
         (temp_v4 = gameGetSlotRecord(), (unsigned int)*(unsigned short *)(temp_v4 + 0x62) != (temp_v8 & 0x1ffff) >> 2))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x18) {
      if (param_5 != (unsigned char *)0x0) {
LAB_004da4c8:
        temp_v0 = FUN_004da980(param_1,param_2,param_3);
        if ((temp_v0 == 5) || (FUN_004daf18(param_1,(temp_v8 & 0x1ffff) >> 2), param_1 == 0)) {
          *(unsigned int *)(param_5 + 4) = 1;
        }
        *param_5 = temp_v6;
      }
      return temp_v6;
    }
  }
  if (temp_v1 < 0x18) {
    temp_v5 = 0;
    if (param_5 != (unsigned char *)0x0) {
      temp_v5 = 3;
    }
    temp_v6 = 0;
    if (param_5 == (unsigned char *)0x0) {
      return 0;
    }
    *(unsigned int *)(param_5 + 4) = temp_v5;
    goto LAB_004da4c8;
  }
  if (param_5 != (unsigned char *)0x0) {
    temp_v0 = FUN_004da980(param_1,param_2,param_3);
    if ((temp_v0 == 5) || (FUN_004daf18(param_1,(temp_v8 & 0x1ffff) >> 2), param_1 == 0)) {
      *(unsigned int *)(param_5 + 4) = 1;
    }
    *param_5 = temp_v6;
  }
  return temp_v6;
}

} /* extern "C" */
