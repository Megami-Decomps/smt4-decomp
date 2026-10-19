/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499338` (_code @ 0x499338, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0057f578; /* 0x57f578 */

extern int FUN_00192718(short);
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_00345718. */
/* Supplied declaration required: FUN_0034aa94. */
extern int FUN_004cfe4c(int);


void FUN_00499338(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  unsigned int unaff_r4;
  
  temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
  pcVar5 = *(romwright_code **)(temp_v1 + 0x24);
  temp_v2 = *(unsigned int *)(temp_v1 + 0x28);
  if ((pcVar5 != (romwright_code *)0x0) || (((temp_v2 & 1) != 0 && (temp_v2 != 0)))) {
    if ((temp_v2 & 1) != 0) {
      pcVar5 = *(romwright_code **)((unsigned char *)pcVar5 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar5)();
  }
  switch(*(unsigned int *)(param_1 + 0x16004)) {
  case 1:
    temp_v1 = FUN_0023b3d0();
    if (temp_v1 != 0) {
      FUN_0031f718(0xffffffff,0,0,param_4,unaff_r4);
      FUN_002a7324(1);
      temp_v1 = *(int *)(param_1 + 0xb40);
      temp_v3 = FUN_004cfe4c(param_1 + temp_v1 * 0x74 + 0xb60);
      temp_v0 = *(short *)(param_1 + temp_v1 * 0x1002 + 0xf74 + temp_v3 * 4);
      if (temp_v0 != 0) {
        temp_v1 = FUN_00192718(temp_v0);
        if (temp_v1 == 4) {
          FUN_0034aa94(0,temp_v0);
        }
        temp_v1 = FUN_00192718(temp_v0);
        if (temp_v1 == 5) {
          FUN_0034aa94(1,temp_v0);
        }
        temp_v1 = FUN_00192718(temp_v0);
        if (temp_v1 == 6) {
          FUN_0034aa94(2,temp_v0);
        }
      }
      *(unsigned int *)(param_1 + 0x16004) = 2;
      return;
    }
    break;
  case 3:
    temp_v1 = FUN_0026c3a0();
    if (temp_v1 != 0) {
      *(unsigned int *)(param_1 + 0x16004) = 0;
      FUN_002c85b0();
      FUN_00333f6c();
      *(unsigned char *)(DAT_0057f578 + 0x10) = 1;
      return;
    }
    break;
  case 4:
    temp_v1 = FUN_0023b3d0();
    if (temp_v1 != 0) {
      if (*(int *)(param_1 + 0x16004) != 3) {
        if (*(int *)(param_1 + 0x16004) == 1) {
          *(unsigned int *)(param_1 + 0x16004) = 4;
        }
        else {
          FUN_0022e774();
          *(unsigned int *)(param_1 + 0x16004) = 3;
          FUN_00345718(0);
          if (*(int *)(param_1 + 0x16028) != 0) {
            FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x16028) + 4));
            if (*(int **)(param_1 + 0x16028) != (int *)0x0) {
              (**(romwright_code **)(**(int **)(param_1 + 0x16028) + 4))();
              *(unsigned int *)(param_1 + 0x16028) = 0;
            }
          }
        }
      }
      return;
    }
  }
  return;
}
