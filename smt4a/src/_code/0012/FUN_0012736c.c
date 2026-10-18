/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012736c` (_code @ 0x12736c, 0x176 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_8_stack;

extern unsigned char LAB_001289e1; /* 0x1289e1 */
extern unsigned char LAB_001289ed; /* 0x1289ed */

extern unsigned int FUN_001274fc(int);
/* Supplied declaration required: FUN_002fa06c. */
extern int aeabi_uidivmod(int, unsigned int);


unsigned int
FUN_0012736c(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(unsigned int *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(unsigned char **)(param_1 + 0x20) = &LAB_001289e1;
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(unsigned char **)(param_1 + 0x24) = &LAB_001289ed;
    }
    if (param_2 == -1) {
      param_2 = 6;
    }
    if ((int)param_4 < 0) {
      param_4 = -param_4;
      temp_v4 = 0;
    }
    else if ((int)param_4 >= 0x10) {
      param_4 = param_4 - 0x10;
      temp_v4 = 2;
    }
    if ((((param_5 - 1U < 9) && (param_3 == 8)) &&
        (((int)param_4 >= 8 && (((int)param_4 < 0x10 && (-1 < param_2)))))) &&
       ((param_2 < 10 && ((-1 < param_6 && (param_6 < 5)))))) {
      if (param_4 == 8) {
        param_4 = 9;
      }
      piVar1 = (int *)(**(romwright_code **)(param_1 + 0x20))(*(unsigned int *)(param_1 + 0x28),1,0x16c4);
      if (piVar1 != (int *)0x0) {
        *(int **)(param_1 + 0x1c) = piVar1;
        *piVar1 = param_1;
        piVar1[6] = temp_v4;
        temp_v0 = 1 << (param_4 & 0xff);
        piVar1[0xc] = param_4;
        piVar1[7] = 0;
        piVar1[0xd] = temp_v0 - 1;
        piVar1[0xb] = temp_v0;
        temp_v2 = 1 << ((param_5 + 7U) & 0xff);
        piVar1[0x13] = temp_v2;
        piVar1[0x14] = param_5 + 7U;
        piVar1[0x15] = temp_v2 - 1;
        temp_v2 = aeabi_uidivmod(param_5 + 9,3);
        piVar1[0x16] = temp_v2;
        temp_v0 = (**(romwright_code **)(param_1 + 0x20))(*(unsigned int *)(param_1 + 0x28),temp_v0,2);
        piVar1[0xe] = temp_v0;
        temp_v0 = (**(romwright_code **)(param_1 + 0x20))(*(unsigned int *)(param_1 + 0x28),piVar1[0xb],2);
        piVar1[0x10] = temp_v0;
        temp_v0 = (**(romwright_code **)(param_1 + 0x20))(*(unsigned int *)(param_1 + 0x28),piVar1[0x13],2);
        piVar1[0x11] = temp_v0;
        temp_v0 = 1 << ((param_5 + 6U) & 0xff);
        piVar1[0x5b0] = 0;
        piVar1[0x5a7] = temp_v0;
        temp_v0 = (**(romwright_code **)(param_1 + 0x20))(*(unsigned int *)(param_1 + 0x28),temp_v0,4);
        piVar1[2] = temp_v0;
        temp_v3 = piVar1[0x5a7];
        piVar1[3] = temp_v3 << 2;
        if ((((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (piVar1[0x11] != 0)) && (temp_v0 != 0)) {
          piVar1[0x5a9] = (temp_v3 & 0xfffffffe) + temp_v0;
          piVar1[0x5a6] = temp_v0 + temp_v3 * 3;
          piVar1[0x21] = param_2;
          piVar1[0x22] = param_6;
          *(unsigned char *)(piVar1 + 9) = 8;
          temp_v1 = FUN_001274fc(param_1);
          return temp_v1;
        }
        piVar1[1] = 0x29a;
        *(char **)(param_1 + 0x18) = "insufficient memory";
        FUN_002fa06c(param_1);
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}
