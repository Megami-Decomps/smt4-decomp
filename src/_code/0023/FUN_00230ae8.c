/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230ae8` (_code @ 0x230ae8, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a60c. */
extern int FUN_00240ea4(char *);
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029d8c0. */
extern int FUN_0029d8fc(int);
extern int FUN_0029e3bc(void);
/* Supplied declaration required: FUN_0029ebdc. */
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_002b91c4. */


void FUN_00230ae8(int param_1,char *param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = *(int *)(param_1 + 4);
  temp_v3 = temp_v0 != -1;
  if (temp_v3) {
    temp_v0 = *(int *)(param_1 + 8);
  }
  temp_v4 = temp_v0 != -1;
  if (temp_v3 && temp_v4) {
    temp_v0 = *(int *)(param_1 + 0xc);
  }
  if ((temp_v3 && temp_v4) && temp_v0 != -1) {
    *(unsigned short *)(param_1 + 0x14) = 0xffff;
    *(unsigned char *)(param_1 + 0x11) = 0;
    *(unsigned char *)(param_1 + 0x12) = 0;
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0xc)) {
      do {
        temp_v1 = FUN_0029d8fc((int)*(short *)(param_1 + temp_v0 * 2 + 0x18));
        if (temp_v1 == 1 || temp_v1 == 2) {
          *(unsigned char *)(param_1 + 0x11) = 1;
          *(short *)(param_1 + 0x14) = (short)temp_v0;
        }
        if (temp_v1 == 6) {
          *(unsigned char *)(param_1 + 0x11) = 0;
          *(unsigned char *)(param_1 + 0x12) = 1;
          *(short *)(param_1 + 0x14) = (short)temp_v0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0xc));
    }
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    temp_v0 = (int)*(short *)(param_1 + 0x14);
    if (*param_2 != '\x01') {
      temp_v1 = FUN_0029f260();
    }
    else {
      temp_v1 = FUN_0029ebdc(param_2 + 0x10);
    }
    if (temp_v1 + temp_v0 < *(int *)(param_2 + 8)) {
      if (*param_2 != '\x01') {
        temp_v1 = FUN_0029e3bc();
      }
      else {
        temp_v1 = FUN_00240ea4(param_2 + 0x10);
      }
      if (*(char *)(param_1 + 0x10) != '\0' && temp_v1 != temp_v0) {
        FUN_002b91c4(0x100016c);
      }
      if (*param_2 != '\x01') {
        temp_v2 = FUN_0029f260();
      }
      else {
        temp_v2 = FUN_0029ebdc(param_2 + 0x10);
      }
      if (*param_2 == '\0') {
        FUN_00299000(param_2 + 0x10,temp_v2);
        FUN_0029d8c0(param_2 + 0x10,temp_v0);
      }
      if (*param_2 == '\x01') {
        FUN_0022a60c(param_2 + 0x10,temp_v2);
        FUN_00299558(param_2 + 0x10,temp_v0);
        return;
      }
    }
  }
  return;
}
