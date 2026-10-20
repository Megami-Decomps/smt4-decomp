/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7e44` (_code @ 0x2d7e44, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001db658(int, int, unsigned int);
int FUN_0024a878(int, unsigned int);
int FUN_002c1b64(int, int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern unsigned char DAT_0044ea80; /* 0x44ea80 */

/* Supplied declaration required: FUN_001db658. */
/* Supplied declaration required: FUN_0024a878. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int);
extern int FUN_0030ed7c(void);


void FUN_002d7e44(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v1 = DAT_0044ea00;
  temp_v0 = FUN_002c5d80(1);
  piVar5 = (int *)(temp_v1 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00,0);
  temp_v4 = 1;
  temp_v1 = FUN_0030ed7c();
  if ((temp_v1 != 0) && (*(int *)(DAT_0044ea00 + 0x528) == 0)) {
    temp_v4 = 0;
  }
  FUN_0024a878(0,temp_v4);
  temp_v1 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  if ((*(int *)((unsigned char *)&DAT_0044ea80 + 0x78)) != 0) {
    FUN_001db658(0x1e,0x606060ff,0x909090ff);
    return;
  }
  return;
}

} /* extern "C" */
