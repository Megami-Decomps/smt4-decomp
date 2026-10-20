/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463618` (_code @ 0x463618, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004639e4(int);
int aeabi_uidivmod(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

extern int *DAT_005c1d30; /* 0x5c1d30 */

/* Supplied declaration required: FUN_004639e4. */
/* Supplied declaration required: aeabi_uidivmod. */


unsigned int FUN_00463618(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [3];
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  piVar1 = DAT_005c1d30;
  temp_v2 = 0;
  if (DAT_005c1d30 != (int *)0x0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned short *)(param_2 + 0x38) = *(unsigned short *)(param_1 + 0x24);
    temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1,*(unsigned int *)(param_1 + 0x14),&temp_v6);
    temp_v2 = 0;
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0x20) = temp_v6;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x2c) = temp_v6;
      **(unsigned char **)(param_1 + 0x18) = 1;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 4) = temp_v7;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + 8) = *(unsigned char *)(param_1 + 0x26);
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xc) = *(unsigned int *)(param_1 + 0x28);
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x14) = *(unsigned int *)(param_1 + 0x28);
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x1c) = temp_v8;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x20) = 0x800;
      *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x24) = 0x800;
      temp_v4 = *(int *)(param_1 + 0x18);
      temp_v0 = aeabi_uidivmod(*(int *)(temp_v4 + 0x10) - 1,*(unsigned int *)(temp_v4 + 0x1c));
      *(int *)(param_1 + 0x3c) = temp_v0;
      if (*(char *)(temp_v4 + 8) == '\0') {
        temp_v0 = 0x400;
      }
      else {
        temp_v0 = *(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0x1c) * temp_v0;
      }
      *(int *)(temp_v4 + 0x28) = temp_v0;
      if (temp_v6 != 0) {
        temp_v1 = temp_v6 & 1;
        temp_v3 = (unsigned int)(temp_v1 == 1);
        if (temp_v1 == 1) {
          *(unsigned int *)(param_2 + 0x18) = 0;
        }
        for (; temp_v1 < temp_v6; temp_v1 = temp_v1 + 2) {
          temp_v0 = temp_v3 + 1;
          *(unsigned int *)(param_2 + temp_v3 * 4 + 0x18) = 0;
          temp_v3 = temp_v3 + 2;
          *(unsigned int *)(param_2 + temp_v0 * 4 + 0x18) = 0;
        }
      }
      temp_v4 = *(int *)(param_1 + 0x18);
      temp_v0 = aeabi_uidivmod(*(unsigned int *)(temp_v4 + 0xc),*(unsigned int *)(temp_v4 + 0x1c));
      *(int *)(param_1 + 0x40) = temp_v0;
      *(int *)(param_1 + 0x4c) = *(int *)(temp_v4 + 0xc) - temp_v0 * *(int *)(temp_v4 + 0x1c);
      if (*(romwright_code **)(param_1 + 0x30) != (romwright_code *)0x0) {
        temp_v5[0] = 0;
        temp_v0 = (**(romwright_code **)(param_1 + 0x30))(temp_v5,*(unsigned int *)(param_1 + 0x34));
        if (temp_v0 == 0) {
          return 0;
        }
        *(unsigned int *)(param_1 + 0x54) = temp_v5[0];
        FUN_004639e4(param_1);
        *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x5c);
      }
      else {
        *(unsigned int *)(param_1 + 0x5c) = 0;
        temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
        *(unsigned int *)(param_1 + 0x58) = 0;
        *(unsigned int *)(param_1 + 0x60) = temp_v2;
      }
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
