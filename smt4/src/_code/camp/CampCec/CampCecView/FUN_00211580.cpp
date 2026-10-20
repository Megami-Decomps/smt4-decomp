/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211580` (_code @ 0x211580, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001eb874(unsigned int, int, int, int, int, int);
int FUN_002c198c(int);
int FUN_002c39a4(int);
int FUN_002e15f8(int, int, int);
int FUN_002ec0b4(int, int);
int FUN_002ec0fc(int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002ec210(int, int, int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0043db10; /* 0x43db10 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001eb874. */
extern unsigned int FUN_0025981c(void);
extern int FUN_0026efec(int);
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e15f8. */
/* Supplied declaration required: FUN_002ec0b4. */
/* Supplied declaration required: FUN_002ec0fc. */
/* Supplied declaration required: FUN_002ec210. */


unsigned int FUN_00211580(void)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  
  temp_v1 = DAT_0043db10;
  FUN_002c39a4(DAT_0044ea00);
  temp_v8 = DAT_0044ea00;
  temp_v2 = FUN_002c5d80(1,0);
  piVar9 = (int *)(temp_v8 + 0x124c);
  temp_v5 = *piVar9;
  temp_v6 = piVar9[temp_v5 + 2];
  *piVar9 = temp_v5 + 1;
  piVar9[temp_v5 + 3] = temp_v2;
  if (*(char *)(temp_v8 + 0x1264) != '\0' || temp_v6 != temp_v2) {
    (**(romwright_code **)(temp_v8 + 0x1268))();
    *(unsigned char *)(temp_v8 + 0x1264) = 0;
  }
  temp_v3 = FUN_0025981c();
  FUN_002ec210(temp_v1 + 200,0,0,temp_v3,0);
  temp_v8 = 0;
  do {
    temp_v2 = FUN_0026efec(*(int *)(temp_v1 + 0x140) + temp_v8);
    temp_v0 = *(short *)(temp_v2 + 0x48);
    temp_v7 = *(int *)(temp_v1 + 0x13c);
    temp_v5 = *(int *)(temp_v1 + 0x140);
    temp_v6 = FUN_002bf4f8(0x39,temp_v8 + 0x96);
    temp_v9 = (int)*(short *)(temp_v6 + 10);
    temp_v6 = (int)*(short *)(temp_v6 + 8);
    FUN_001eb874(*(unsigned int *)(temp_v1 + temp_v8 * 4 + 300),temp_v2,temp_v1 + temp_v8 * 0x14 + 0xdc,temp_v6,
                 temp_v9,temp_v0 == 0);
    if ((temp_v7 == temp_v5 + temp_v8) && (*(int *)(temp_v1 + 0x108) == 0)) {
      FUN_002e15f8(temp_v1 + 0x118,temp_v6,temp_v9);
    }
    if (((*(unsigned char *)(temp_v2 + 0x20) & 0x10) != 0) && (*(int *)(temp_v1 + 0x108) == 0)) {
      FUN_002ec0b4(temp_v6,temp_v9);
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 3);
  temp_v4 = *(unsigned int *)(temp_v1 + 0x154);
  FUN_002ec0fc(temp_v1 + 0x104,0,0,temp_v4 & 1,(temp_v4 & 2) >> 1,(temp_v4 & 4) >> 2,
               *(unsigned int *)(temp_v1 + 0x13c),*(unsigned int *)(temp_v1 + 0x140),
               *(unsigned int *)(temp_v1 + 0x148));
  temp_v1 = DAT_0044ea00;
  piVar9 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v8 = *piVar9;
  temp_v2 = piVar9[temp_v8 + 2];
  *piVar9 = temp_v8 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar9[temp_v8 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  return 0;
}

} /* extern "C" */
