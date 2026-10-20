/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe544` (_code @ 0x3fe544, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_003fdd1c(int, unsigned int);
int FUN_003fe3e8(int);
int FUN_003fe90c(int);
int nn_math_ARMv6_MTX34CopyAsm(int, unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_003fe6d0; /* 0x3fe6d0 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

/* Supplied declaration required: FUN_00178b04. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_003fdd1c. */
/* Supplied declaration required: FUN_003fe3e8. */
/* Supplied declaration required: FUN_003fe90c. */
extern unsigned int FUN_0041a3ac(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_003fe544(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  if (param_3 < *(unsigned short *)(*(int **)(param_2 + 0x3c) + 1)) {
    FUN_003fdd1c(param_1,*(unsigned int *)(**(int **)(param_2 + 0x3c) + param_3 * 4));
  }
  *(int *)(param_1 + 0x20c) = param_2;
  FUN_003fe3e8(param_1);
  temp_v0 = *(int *)(param_1 + 0x20c);
  temp_v6 = temp_v0 == 0;
  if (!temp_v6) {
    temp_v0 = temp_v0 + 0xc;
    temp_v6 = temp_v0 == 0;
  }
  if (!temp_v6) {
    temp_v3 = 0;
    temp_v1 = 0;
    temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x70);
    if (temp_v5 != 0) {
      do {
        temp_v4 = temp_v1 * 4;
        temp_v1 = temp_v1 + 1;
        temp_v4 = *(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x6c) + temp_v4) + 0x10);
        if (temp_v3 < temp_v4) {
          temp_v3 = temp_v4;
        }
      } while (temp_v1 < (int)temp_v5);
    }
    FUN_003fe90c(param_1 + 0x84);
  }
  temp_v0 = *(int *)(param_1 + 0x20c);
  temp_v6 = temp_v0 == 0;
  if (!temp_v6) {
    temp_v0 = temp_v0 + 0xc;
    temp_v6 = temp_v0 == 0;
  }
  if (!temp_v6) {
    temp_v3 = 0;
    temp_v1 = 0;
    temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x7c);
    if (temp_v5 != 0) {
      do {
        temp_v4 = temp_v1 * 4;
        temp_v1 = temp_v1 + 1;
        temp_v4 = *(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x78) + temp_v4) + 0x10);
        if (temp_v3 < temp_v4) {
          temp_v3 = temp_v4;
        }
      } while (temp_v1 < (int)temp_v5);
    }
    FUN_003fe90c(param_1 + 0xb4);
  }
  temp_v3 = *(int *)(param_2 + 0x88);
  temp_v0 = 0;
  if (temp_v3 != 0) {
    temp_v0 = *(int *)(temp_v3 + 8);
  }
  if ((temp_v3 != 0 && temp_v0 != 0) && -1 < temp_v0) {
    temp_v0 = 0x24;
    FUN_00178b04(0x24,&LAB_003fe6d0,0x5d);
    temp_v2 = 0;
    if (temp_v0 != 0) {
      temp_v2 = FUN_0041a3ac();
    }
    *(unsigned int *)(param_1 + 0x25c) = temp_v2;
  }
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = 0x3f800000;
    DAT_0064c058 = 0;
    DAT_0064c05c = 0;
    DAT_0064c060 = 0;
    DAT_0064c064 = 0;
    DAT_0064c068 = 0x3f800000;
    DAT_0064c06c = 0;
    DAT_0064c070 = 0;
    DAT_0064c074 = 0;
    DAT_0064c078 = 0;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c080 = 0;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x1c0,&DAT_0064c054);
  return;
}

} /* extern "C" */
