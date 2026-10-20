/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345b94` (_code @ 0x345b94, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, int);
int FUN_00280840(int, int, unsigned int);
int FUN_00300100(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern unsigned char DAT_0059dbe0; /* 0x59dbe0 */

extern int FUN_001692ac(unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_00280840. */
/* Supplied declaration required: FUN_00300100. */
extern int FUN_00399c60(void);
extern int FUN_003a1988(void);


void FUN_00345b94(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v1 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1);
  piVar5 = (int *)(temp_v1 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0016c4b8(DAT_0059dbb4,0);
  temp_v4 = 1;
  temp_v1 = FUN_003a1988();
  if (((temp_v1 != 0) && (*(int *)(DAT_0059dbb4 + 0x52c) == 0)) &&
     (temp_v1 = FUN_00399c60(), temp_v1 != 0)) {
    temp_v4 = 0;
  }
  FUN_00300100(0,temp_v4);
  temp_v1 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  if ((*(int *)((unsigned char *)&DAT_0059dbe0 + 0x78)) != 0) {
    FUN_00280840(0x1e,0x606060ff,0x909090ff);
    return;
  }
  return;
}

} /* extern "C" */
