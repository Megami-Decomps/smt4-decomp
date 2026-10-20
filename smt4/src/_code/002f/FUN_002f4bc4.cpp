/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4bc4` (_code @ 0x2f4bc4, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002bf288(int, int, unsigned int, int, int, int);
int FUN_002bf538(void);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_002f4bc4(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = *param_1;
  FUN_002bed3c();
  FUN_002c39a4(DAT_0044ea00);
  temp_v1 = DAT_0044ea00;
  temp_v0 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v1 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  temp_v4 = 0;
  do {
    temp_v1 = temp_v5 + temp_v4 * 8;
    FUN_002bf288(2,0x34,temp_v4 * 1000,(int)*(float *)(temp_v1 + 0x68),(int)*(float *)(temp_v1 + 0x6c),2);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  FUN_002bed3c();
  FUN_002bf538();
  temp_v1 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  return 0;
}

} /* extern "C" */
