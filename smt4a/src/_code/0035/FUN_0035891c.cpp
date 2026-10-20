/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035891c` (_code @ 0x35891c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_001677c0(void);
int FUN_001835b4(int, int, unsigned int, int, int, int);
int FUN_00183bb0(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


unsigned int FUN_0035891c(int *param_1)

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
  FUN_00183bb0();
  FUN_00157558(DAT_0059dbb4);
  temp_v1 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v1 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  temp_v4 = 0;
  do {
    temp_v1 = temp_v5 + temp_v4 * 8;
    FUN_001835b4(2,0x29,temp_v4 * 1000,(int)*(float *)(temp_v1 + 8),(int)*(float *)(temp_v1 + 0xc),2);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  FUN_00183bb0();
  FUN_001677c0();
  temp_v1 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  return 0;
}

} /* extern "C" */
