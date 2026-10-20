/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c55c` (_code @ 0x31c55c, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_001677c0(void);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0057f3b4; /* 0x57f3b4 */
extern unsigned int DAT_0057f3d0; /* 0x57f3d0 */
extern int DAT_0057f3d4; /* 0x57f3d4 */
extern unsigned int DAT_0057f3dc; /* 0x57f3dc */
extern int DAT_0057f3e0; /* 0x57f3e0 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


unsigned char FUN_0031c55c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = DAT_0057f3b4;
  if (*(char *)(DAT_0057f3b4 + 0x18) != '\0') {
    FUN_00183bb0();
    FUN_00157558(DAT_0059dbb4);
    temp_v4 = DAT_0059dbb4;
    temp_v1 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v4 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x1274))();
      *(unsigned char *)(temp_v4 + 0x1270) = 0;
    }
    temp_v4 = DAT_0059dbb4;
    temp_v1 = FUN_00169294(6,1,0);
    piVar5 = (int *)(temp_v4 + 0x12b8);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    FUN_001879d0(DAT_0059dbb4);
    temp_v4 = DAT_0057f3d4 * 1000;
    FUN_001677c0();
    FUN_001835b4(2,DAT_0057f3d0,temp_v4,0,0,0xfa);
    temp_v4 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x12b8);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    temp_v4 = DAT_0057f3e0 * 1000;
    FUN_001677c0();
    FUN_001835b4(2,DAT_0057f3dc,temp_v4,0,-*(int *)(temp_v0 + 0xc),0xfb);
    FUN_001835b4(2,DAT_0057f3dc,temp_v4 + 1,0,*(unsigned int *)(temp_v0 + 0xc),0xfb);
    FUN_00183bb0();
    FUN_001677c0();
    temp_v0 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v4 = *piVar5;
    temp_v1 = piVar5[temp_v4 + 2];
    *piVar5 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
