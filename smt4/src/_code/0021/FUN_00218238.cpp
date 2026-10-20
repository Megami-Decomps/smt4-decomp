/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218238` (_code @ 0x218238, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00224ce0(unsigned int, int *, int *, int);
int FUN_002bf288(...);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00224ce0. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_00218238(int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_00224ce0(param_2,&temp_v5,&temp_v6,param_5);
  if (param_5 != 0) {
    temp_v4 = 0;
    temp_v1 = 0;
    if (*(int *)(param_1 + 0x3048) == 1) {
      temp_v4 = FUN_002beda4(param_1 + 0xac);
      temp_v1 = FUN_002bed98(param_1 + 0xac);
    }
    temp_v1 = param_4 + temp_v1;
    temp_v4 = param_3 + temp_v4;
    FUN_002bf288(2,0x15,0xde,temp_v4,temp_v1,0x35);
    if (*(int *)(param_1 + 0x3048) == 1) {
      FUN_002bf538();
      temp_v0 = DAT_0044ea00;
      temp_v2 = FUN_002c5da8(6,1,0);
      piVar5 = (int *)(temp_v0 + 0x12ac);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x15,0xde,temp_v4,temp_v1,0x36);
      temp_v0 = DAT_0044ea00;
      temp_v2 = FUN_002c5da8(6,7,0);
      piVar5 = (int *)(temp_v0 + 0x12ac);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
    FUN_002bf288(2,0x15,temp_v6,param_3,param_4,0x37);
    FUN_002bf288(2,0x15,temp_v5,temp_v4,temp_v1,0x38);
    return;
  }
  FUN_002bf288(2,0x15,0xdd,param_3,param_4,0x2c);
  FUN_002bf288(2,0x15,temp_v6,param_3,param_4,0x2d);
  FUN_002bf288(2,0x15,temp_v5,param_3,param_4,0x2e);
  return;
}

} /* extern "C" */
