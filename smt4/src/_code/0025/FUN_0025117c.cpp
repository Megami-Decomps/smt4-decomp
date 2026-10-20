/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025117c` (_code @ 0x25117c, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(int, int, int, int, int, unsigned int);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_0025117c(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = FUN_002bf4f8(0x19,param_1 + 0x57);
  if (param_5 != 0) {
    FUN_002bf538();
    temp_v2 = DAT_0044ea00;
    temp_v1 = FUN_002c5da8(6,1,0);
    piVar5 = (int *)(temp_v2 + 0x12ac);
    temp_v3 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0x19,0x4f,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,
                 param_4);
    temp_v0 = DAT_0044ea00;
    temp_v2 = FUN_002c5da8(6,7,0);
    piVar5 = (int *)(temp_v0 + 0x12ac);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v2;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v1 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_002bf538();
    return;
  }
  FUN_002bf288(2,0x19,0x4e,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,param_4)
  ;
  return;
}

} /* extern "C" */
