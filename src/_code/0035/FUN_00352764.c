/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352764` (_code @ 0x352764, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_3_stack;

extern unsigned char LAB_0035290c; /* 0x35290c */

/* Supplied declaration required: FUN_0023a154. */
/* Supplied declaration required: FUN_002a4b4c. */
/* Supplied declaration required: FUN_002ac8b0. */
extern int FUN_002b5a48(void);
/* Supplied declaration required: FUN_002b90b0. */
/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_00355d68. */


void FUN_00352764(unsigned int *param_1,int *param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [96];
  int temp_v6;
  unsigned char *temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [48];
  int temp_v11;
  unsigned int uStack_24;
  unsigned char temp_v12 [8];
  
  if (*param_2 == 0 && param_2[1] == 0) {
    FUN_002baa40(param_1,0xe0a13882);
    return;
  }
  FUN_0023a154(temp_v10,0x30,&LAB_0035290c);
  FUN_002ac8b0(temp_v5,temp_v10,0x30);
  temp_v9 = 0;
  temp_v2 = *param_2;
  temp_v1 = param_2[1];
  temp_v7 = temp_v5;
  piVar2 = &temp_v9;
  temp_v6 = 4;
  temp_v0 = FUN_002b5a48();
  temp_v8 = (temp_v0 + 1) * 2;
  temp_v3 = 1;
  FUN_00355d68(piVar2,temp_v2,temp_v1,&temp_v6);
  if (((((unsigned int)piVar2 & 0x3fc00) == 0x4400) && (((unsigned int)piVar2 & 0x3ff) >= 100)) &&
     (((unsigned int)piVar2 & 0x3ff) < 0xb4)) {
    FUN_002baa40(&temp_v3,0xd881388c);
  }
  else {
    if (-1 < (int)piVar2) {
      temp_v4 = 0x1200;
      puVar3 = temp_v12;
      temp_v3 = param_3;
      FUN_002a4b4c(puVar3,temp_v9,0,0);
      if ((int)puVar3 < 0) {
        FUN_002baa40(&temp_v3,puVar3);
        temp_v11 = temp_v3;
        uStack_24 = temp_v4;
        if (temp_v9 != 0) {
          FUN_002b90b0();
          temp_v11 = temp_v3;
          uStack_24 = temp_v4;
        }
      }
      else {
        FUN_002baa40(&temp_v11,0);
        if (temp_v9 != 0) {
          FUN_002b90b0();
        }
      }
      *param_1 = temp_v11;
      param_1[1] = uStack_24;
      return;
    }
    FUN_002baa40(&temp_v3,piVar2);
  }
  if (temp_v9 != 0) {
    FUN_002b90b0();
  }
  *param_1 = temp_v3;
  param_1[1] = temp_v4;
  return;
}
