/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352b30` (_code @ 0x352b30, 0x248 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_1_stack;

extern unsigned char LAB_00352d78; /* 0x352d78 */

/* Supplied declaration required: FUN_0023a2b0. */
/* Supplied declaration required: FUN_0023a2ec. */
/* Supplied declaration required: FUN_002a4df0. */
/* Supplied declaration required: FUN_002acb3c. */
extern int FUN_002b5c2c(void);
/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_00355f78. */
/* Supplied declaration required: FUN_0035a2c4. */


int * FUN_00352b30(unsigned int *param_1)

{
/* irregular: 4 goto(s); 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [20];
  short asStack_f4 [14];
  unsigned int temp_v7;
  int temp_v8;
  unsigned char *temp_v9;
  int temp_v10;
  int temp_v11;
  int iStack_bc;
  unsigned char temp_v12 [96];
  unsigned char temp_v13 [52];
  
  FUN_0023a2ec(temp_v13,0x30,&LAB_00352d78);
  FUN_002acb3c(temp_v12,temp_v13,0x30);
  temp_v11 = 0;
  temp_v2 = *param_1;
  temp_v3 = param_1[1];
  temp_v9 = temp_v12;
  piVar4 = &temp_v11;
  temp_v8 = 4;
  temp_v0 = FUN_002b5c2c();
  temp_v10 = (temp_v0 + 1) * 2;
  FUN_00355f78(piVar4,temp_v2,temp_v3,&temp_v8,1);
  if (((((unsigned int)piVar4 & 0x3fc00) != 0x4400) || (99 >= ((unsigned int)piVar4 & 0x3ff))) ||
     (((unsigned int)piVar4 & 0x3ff) >= 0xb4)) {
    if (-1 < (int)piVar4) {
      piVar2 = &iStack_bc;
      FUN_002a4df0(piVar2,temp_v11,0,0,temp_v6,0x34);
      piVar4 = piVar2;
      if (-1 < (int)piVar2) {
        temp_v1 = 0x34;
        temp_v0 = 0;
        FUN_0023a2b0();
        piVar3 = piVar2;
        FUN_0035a2c4();
        temp_v4 = 0;
        if (temp_v4 < temp_v7) {
          do {
            piVar4 = &iStack_bc;
            FUN_002a4df0(piVar4,temp_v11,temp_v1,temp_v0,&temp_v8,4);
            if ((int)piVar4 < 0) {
              if (temp_v11 != 0) {
                FUN_002b93f0();
              }
              return piVar4;
            }
            piVar4 = (int *)(int)(*(short *)((unsigned char *)&temp_v8 + 2));
            temp_v5 = 0xfffffffb < temp_v1;
            temp_v1 = temp_v1 + 4;
            temp_v0 = temp_v0 + (unsigned int)temp_v5;
            temp_v5 = piVar4 == piVar2;
            if (temp_v5) {
              piVar4 = (int *)(int)(short)temp_v8;
            }
            if (temp_v5 && piVar4 == piVar3) {
              *(short *)((int)param_1 + 0x4a) = (*(short *)((unsigned char *)&temp_v8 + 2));
              *(short *)(param_1 + 0x12) = (short)temp_v8;
              goto joined_r0x00352cf8;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v7);
        }
        temp_v0 = 0;
LAB_00352d18:
        if ((int *)(int)asStack_f4[temp_v0 * 2] != piVar3) goto LAB_00352d50;
        *(short *)((int)param_1 + 0x4a) = asStack_f4[temp_v0 * 2 + 1];
        *(short *)(param_1 + 0x12) = asStack_f4[temp_v0 * 2];
joined_r0x00352cf8:
        piVar4 = (int *)0x0;
        if (temp_v11 == 0) {
          return (int *)0x0;
        }
        FUN_002b93f0();
        return piVar4;
      }
    }
  }
  else {
joined_r0x00352d68:
    piVar4 = (int *)0xd901388b;
  }
  if (temp_v11 != 0) {
    FUN_002b93f0();
  }
  return piVar4;
LAB_00352d50:
  temp_v0 = temp_v0 + 1;
  if (temp_v0 >= 7) goto joined_r0x00352d68;
  goto LAB_00352d18;
}
