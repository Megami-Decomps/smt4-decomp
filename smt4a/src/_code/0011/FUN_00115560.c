/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115560` (_code @ 0x115560, 0x152 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

extern unsigned char LAB_00106e41; /* 0x106e41 */
extern int *DAT_00594b20; /* 0x594b20 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f2978. */
/* Supplied declaration required: FUN_002f2e3c. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00301484. */


unsigned int FUN_00115560(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [68];
  int temp_v8 [4];
  int temp_v9;
  unsigned int *temp_v10;
  unsigned int temp_v11 [8];
  unsigned char temp_v12 [12];
  int iStack_1c;
  unsigned int temp_v13;
  
  iStack_1c = param_1;
  temp_v13 = param_2;
  FUN_002f5020(temp_v6,&LAB_00106e41,8);
  temp_v5 = 0;
  FUN_002e6e34(temp_v8,param_1 + 4);
  temp_v0 = 0;
  do {
    temp_v4 = temp_v0 * 4 + param_1;
    temp_v2 = *(int *)(temp_v4 + 0x34);
    if ((temp_v2 != 0) && (*(char *)(temp_v2 + 0x34) == '\x01')) {
      temp_v3 = temp_v5 * 8;
      *(unsigned int *)(temp_v7 + (temp_v3 - 4)) = *(unsigned int *)(*(int *)(temp_v2 + 0x3c) + 0x3c);
      temp_v11[temp_v5] = temp_v0;
      if (*(char *)(*(int *)(temp_v4 + 0x34) + 0x35) == '\x02') {
        temp_v7[temp_v3] = 2;
      }
      if (*(char *)(*(int *)(temp_v4 + 0x34) + 0x35) == '\x03') {
        temp_v7[temp_v3] = 1;
      }
      if (*(char *)(*(int *)(temp_v4 + 0x34) + 0x35) == '\x01') {
        temp_v7[temp_v3] = 2;
      }
      temp_v5 = temp_v5 + 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  FUN_002e6e5c(temp_v8);
  if ((temp_v5 != 0) &&
     (temp_v2 = (**(romwright_code **)(*DAT_00594b20 + 0x10))(DAT_00594b20,temp_v6,temp_v5,temp_v13),
     temp_v2 != 0)) {
    FUN_002e6e34(temp_v12,param_1 + 4);
    for (temp_v0 = 0; temp_v0 < temp_v5; temp_v0 = temp_v0 + 1) {
      temp_v9 = temp_v0 * 4;
      puVar7 = *(unsigned int **)(temp_v11[temp_v0] * 4 + param_1 + 0x34);
      if ((puVar7 != (unsigned int *)0x0) &&
         (temp_v10 = puVar7 + 8, *(char *)(puVar7 + 0xd) == '\x01')) {
        if (*(char *)((int)puVar7 + 0x35) == '\x02') {
          if (-1 < (int)((unsigned int)temp_v7[temp_v0 * 8 + 1] << 0x1e)) goto LAB_001156a2;
          FUN_002f2978(puVar7[0xf],*puVar7,puVar7[1],puVar7 + 4,puVar7);
        }
        if (*(char *)((int)temp_v10 + 0x15) == '\x01') {
          if (-1 >= (int)((unsigned int)temp_v7[temp_v0 * 8 + 1] << 0x1e)) {
            temp_v8[0] = temp_v9 + param_1;
            FUN_00301484(*(unsigned int *)(temp_v8[0] + 0x34));
            *(unsigned int *)(*(int *)(temp_v8[0] + 0x34) + 0xc) = 0;
            if ((*(char *)((int)temp_v10 + 0x15) == '\x03') &&
               ((temp_v7[temp_v0 * 8 + 1] & 1) != 0)) {
              FUN_002f2e3c(puVar7[0xf],*puVar7,puVar7[1],puVar7[0xc],puVar7,1);
            }
          }
        }
        else if ((*(char *)((int)temp_v10 + 0x15) == '\x03') &&
                ((temp_v7[temp_v0 * 8 + 1] & 1) != 0)) {
          FUN_002f2e3c(puVar7[0xf],*puVar7,puVar7[1],puVar7[0xc],puVar7,1);
        }
      }
LAB_001156a2:;
    }
    FUN_002e6e5c(temp_v12);
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
