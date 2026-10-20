/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b76c` (_code @ 0x35b76c, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145e24(int, unsigned int);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_00182540(void);
int FUN_00222240(void);
int FUN_00300100(int, int);
int FUN_00409718(int);

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern signed char DAT_0059dbe0; /* 0x59dbe0 */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern int DAT_0059dc00; /* 0x59dc00 */
extern int DAT_0059dc0c; /* 0x59dc0c */

/* Supplied declaration required: FUN_00145e24. */
extern unsigned int FUN_00152f54(void);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00182540. */
/* Supplied declaration required: FUN_00222240. */
/* Supplied declaration required: FUN_00300100. */
/* Supplied declaration required: FUN_00409718. */


void FUN_0035b76c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x11f8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1210) != '\0' || temp_v3 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1214))();
    *(unsigned char *)(temp_v0 + 0x1210) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  temp_v2 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v0 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  temp_v3 = *(int *)(DAT_0059dbb4 + 0x12b8);
  piVar6 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v2 = *(int *)(DAT_0059dbb4 + temp_v3 * 4 + 0x12c0);
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  if (DAT_0059dbe0 != '\0') {
    FUN_00409718(DAT_0059dbb4);
  }
  else {
    temp_v1 = FUN_00152f54();
    FUN_00145e24(DAT_0059dbb4,temp_v1);
  }
  FUN_00300100(2,1);
  if (DAT_0059dc00 != 0) {
    FUN_00222240();
  }
  if (DAT_0059dbf0 != 0) {
    FUN_00182540();
  }
  if (DAT_0059dc0c != 0) {
    FUN_00222240();
  }
  FUN_0016c410(DAT_0059dbb4);
  FUN_0016c560(DAT_0059dbb4);
  temp_v0 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x11f8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1210) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1214))();
    *(unsigned char *)(temp_v0 + 0x1210) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
