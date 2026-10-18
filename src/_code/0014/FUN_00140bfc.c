/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140bfc` (_code @ 0x140bfc, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

/* Supplied declaration required: FUN_0014c250. */
extern int FUN_00152394(int, unsigned int, unsigned int *);
extern unsigned int *FUN_001523d8(int, unsigned int);
extern unsigned int *FUN_002ac5d8(unsigned char *);
/* Supplied declaration required: FUN_002ac5f4. */
/* Supplied declaration required: FUN_002ac658. */
/* Supplied declaration required: FUN_002ac780. */


unsigned int
FUN_00140bfc(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [2];
  char temp_v6;
  unsigned char temp_v7 [16];
  
  temp_v0 = FUN_002ac780(param_1[1]);
  if (((param_4 & 4) != 0) &&
     (piVar2 = param_1, FUN_002ac658(param_1,temp_v0,param_3,param_5,0), piVar2 == (int *)0x0)) {
    return 0;
  }
  if ((param_4 & 8) != 0) {
    temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
    if (temp_v1 != 0) {
      FUN_002ac5f4(temp_v7,temp_v1);
      puVar4 = (unsigned int *)FUN_002ac5d8(temp_v7);
      if (puVar4 == (unsigned int *)0x0) {
        return 0;
      }
      temp_v2 = 0;
      if (temp_v2 < *puVar4) {
        do {
          if (*puVar4 <= temp_v2) {
            return 0;
          }
          if (puVar4 + temp_v2 * 2 + 1 == (unsigned int *)0x0) {
            return 0;
          }
          temp_v3 = puVar4[temp_v2 * 2 + 1];
          temp_v4 = puVar4[temp_v2 * 2 + 2];
          temp_v6 = '\0';
          temp_v5[0] = 0xffffffff;
          temp_v1 = FUN_00152394(param_1[1],temp_v3,temp_v5);
          if (temp_v1 == 0) {
            return 0;
          }
          piVar2 = param_1;
          if (temp_v6 != '\0') {
            FUN_0014c250(param_1,temp_v3,temp_v4,param_3,param_5);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
          }
          else if ((param_4 & 8) != 0) {
            temp_v0 = FUN_002ac780(param_1[1],temp_v3);
            FUN_002ac658(param_1,temp_v0,param_3,param_5,1);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *puVar4);
      }
    }
    else {
      puVar4 = (unsigned int *)FUN_001523d8(param_1[1],param_2);
      temp_v2 = 0;
      if (temp_v2 < *puVar4) {
        do {
          if ((param_4 & 8) != 0) {
            temp_v0 = FUN_002ac780(param_1[1],puVar4[temp_v2 + 1]);
            piVar2 = param_1;
            FUN_002ac658(param_1,temp_v0,param_3,param_5,1);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *puVar4);
      }
    }
  }
  return 1;
}
