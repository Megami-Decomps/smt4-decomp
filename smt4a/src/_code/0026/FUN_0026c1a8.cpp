/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c1a8` (_code @ 0x26c1a8, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, unsigned int, int);
int FUN_00230a50(int *, unsigned int [4], int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_00588fd4; /* 0x588fd4 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00230a50. */


unsigned int FUN_0026c1a8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5 [4];
  
  temp_v4 = 0;
  temp_v5[0] = 0;
  if ((*(char *)(DAT_00588fd4 + 0x2012) != '\0') &&
     (*(char *)(DAT_00588fd4 + 0x2018) == '\x03' || *(char *)(DAT_00588fd4 + 0x2018) == '\n')) {
    FUN_00157558(DAT_0059dbb4);
    temp_v0 = DAT_0059dbb4;
    temp_v1 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_00230a50(&temp_v4,temp_v5,10);
    FUN_001677c0();
    FUN_001835b4(2,0x12,0,temp_v4,temp_v5[0],1);
    FUN_001677c0();
    FUN_00230a50(&temp_v4,temp_v5,8);
    FUN_001677c0();
    FUN_001835b4(2,0x12,1,temp_v4,temp_v5[0],1);
    FUN_001677c0();
    FUN_00230a50(&temp_v4,temp_v5,9);
    FUN_001677c0();
    FUN_001835b4(2,0x12,2,temp_v4,temp_v5[0],1);
    temp_v0 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
