/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019ffbc` (_code @ 0x19ffbc, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba12c(int);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, unsigned int, int, int, int);
int FUN_002bf380(int, int, unsigned int, int, int, int);
int FUN_002bf538(void);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_0019ffbc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  unsigned int temp_v5 [4];
  
  FUN_002c39a4(DAT_0044ea00);
  FUN_002bed3c();
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002bf538();
  temp_v4 = 0.35f;
  temp_v5[0] = 0;
  temp_v5[1] = 6;
  temp_v5[2] = 1;
  temp_v5[3] = 7;
  FUN_002ba12c(DAT_0044ea00);
  FUN_002bf380(2,0x39,temp_v5[(unsigned int)*(unsigned char *)(param_1 + 0x37) * 2],(int)temp_v4,0,0xb);
  temp_v4 = 0.33f;
  FUN_002ba12c(DAT_0044ea00);
  FUN_002bf288(2,0x39,temp_v5[(unsigned int)*(unsigned char *)(param_1 + 0x37) * 2 + 1],(int)temp_v4,0,0xc);
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return;
}

} /* extern "C" */
