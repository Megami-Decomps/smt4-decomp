/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf4f8` (_code @ 0x3cf4f8, 0x300 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247478(short [11], unsigned int, unsigned int);
int dataTable40FindById(void);

/* stack frame of param_3: 7 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp248; /* 0x248: local_248 */
    unsigned char sp249; /* 0x249: local_249 */
    unsigned short sp252; /* 0x252: local_252 */
    unsigned short sp268; /* 0x268: local_268 */
} param_3_stack;

extern int FUN_00229914(int *, int, int);
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_00247478. */
extern unsigned int btlGetMainState(void);
/* Supplied declaration required: dataTable40FindById. */


void FUN_003cf4f8(int *param_1,int param_2,short *param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  short *psVar5;
  char *pcVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  short temp_v9 [11];
  short temp_v10;
  char temp_v11;
  char temp_v12;
  short asStack_244 [266];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  temp_v2 = btlGetMainState();
  FUN_00247478(temp_v9,temp_v2,*(unsigned int *)(param_2 + 0x20));
  psVar5 = asStack_244;
  temp_v4 = 0x85;
  psVar4 = param_3;
  do {
    *psVar4 = -1;
    psVar4[1] = 0;
    *psVar5 = -1;
    psVar5[1] = 0;
    temp_v4 = temp_v4 - 1;
    psVar4 = psVar4 + 2;
    psVar5 = psVar5 + 2;
  } while (temp_v4 != 0);
  if (*(int *)(param_2 + 0x570) != 0) {
    return;
  }
  temp_v4 = (int)temp_v10;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  if ((temp_v4 != 0) && (dataTable40FindById(), temp_v4 != 0)) {
    if ((*(char *)(temp_v4 + 0x23) != '\x04') && (*(char *)(temp_v4 + 0x32) == '\0')) {
      temp_v0 = *(char *)(temp_v4 + 0x33);
      temp_v8 = temp_v0 == '\0';
      if (temp_v8) {
        temp_v0 = *(char *)(temp_v4 + 0x34);
      }
      if ((!(temp_v8 && temp_v0 == '\0')) || ((*(unsigned char *)(temp_v4 + 0x35) & 2) != 0)) {
        temp_v15 = 1;
      }
    }
    else {
      temp_v15 = 1;
    }
  }
  temp_v6 = (int)temp_v11;
  temp_v4 = (int)temp_v12;
  if (temp_v9[0] == 6) {
    temp_v13 = 1;
  }
  else if (temp_v9[0] == 1) {
    temp_v14 = 1;
  }
  temp_v5 = 0;
  temp_v7 = temp_v4;
  if (((*(unsigned int *)(*param_1 + 0x44a0) & 0x40000) == 0) && (temp_v7 = temp_v6, temp_v6 < temp_v4)) {
    temp_v4 = randRange((temp_v4 - temp_v6) & 0xffff);
    temp_v7 = temp_v6 + temp_v4;
  }
  do {
    if ((*(char *)(param_2 + temp_v5 + 0x38) != '\0') &&
       (((*(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v5 * 0x288) & 0x40) != 0 ||
        (temp_v4 = FUN_00229914(param_1,param_2,temp_v5), temp_v4 != 0)))) {
      *(unsigned char *)(param_2 + temp_v5 + 0x38) = 0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x6d);
  temp_v0 = (char)temp_v7;
  if (temp_v13 != 0) {
    temp_v1 = 0;
    temp_v6 = 0x85;
    pcVar6 = (char *)(param_2 + 0x38);
    temp_v4 = 0;
    do {
      temp_v5 = temp_v4;
      if (*pcVar6 != '\0') {
        temp_v5 = temp_v4 + 1;
        asStack_244[temp_v4 * 2] = temp_v1;
        asStack_244[temp_v4 * 2 + 1] = 0;
      }
      temp_v6 = temp_v6 - 1;
      temp_v1 = temp_v1 + 1;
      pcVar6 = pcVar6 + 1;
      temp_v4 = temp_v5;
    } while (temp_v6 != 0);
    if (temp_v5 != 0) {
      temp_v4 = randRange((temp_v5 - 1U) & 0xffff);
      temp_v1 = asStack_244[temp_v4 * 2];
      asStack_244[temp_v4 * 2 + 1] = asStack_244[temp_v4 * 2 + 1] + 1;
      param_3[1] = 1;
      *param_3 = temp_v1;
      if (*(char *)(*param_1 + 0x80) < '\0') {
        *(char *)(*param_1 + 0x80) = temp_v0;
      }
      if (*(char *)(*param_1 + 0x81) < '\0') {
        *(char *)(*param_1 + 0x81) = temp_v0;
      }
    }
    return;
  }
  temp_v6 = 0;
  temp_v4 = 0;
  do {
    if (*(char *)(param_2 + temp_v4 + 0x38) != '\0') {
      temp_v3 = 0;
      temp_v5 = (int)*(short *)(*(int *)(*param_1 + 0x1e98) + temp_v4 * 0x114 + 0x60);
      if (((-1 < temp_v5) &&
          (puVar7 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v5 * 0x288), puVar7 != (unsigned int *)0x0))
         && ((*puVar7 & 0x100) != 0)) {
        temp_v3 = 1;
      }
      param_3[temp_v6 * 2] = (short)temp_v4;
      (param_3 + temp_v6 * 2)[1] = (short)temp_v7;
      if ((temp_v3 & temp_v14 & ~temp_v15) != 0) {
        if (*(char *)(*param_1 + 0x80) < '\0') {
          *(char *)(*param_1 + 0x80) = temp_v0 * '\x03';
        }
        if (*(char *)(*param_1 + 0x81) < '\0') {
          *(char *)(*param_1 + 0x81) = temp_v0 * '\x03';
        }
      }
      temp_v6 = temp_v6 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x85);
  return;
}

} /* extern "C" */
