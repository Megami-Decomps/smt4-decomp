/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00438c34` (_code @ 0x438c34, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_5_stack;

extern unsigned char LAB_00438e04; /* 0x438e04 */

/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_002e9768. */
/* Supplied declaration required: FUN_00438e28. */
/* Supplied declaration required: FUN_00439394. */
extern unsigned int *FUN_00502328(unsigned int *, unsigned int *, unsigned int, unsigned int);


unsigned int * FUN_00438c34(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  char temp_v3 [4];
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [132];
  unsigned char temp_v10 [8];
  unsigned int *puStack_34;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v11;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  temp_v11 = param_4;
  puVar1 = (unsigned int *)FUN_00502328(param_1,param_2,param_4,param_5);
  if ((int)puVar1 < 0) {
    return puVar1;
  }
  if (param_5 != 0) {
    puVar2 = param_2 + -1;
    if ((param_5 & 1) != 0) {
      *param_2 = 0;
      puVar2 = param_2;
    }
    for (temp_v0 = param_5 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  FUN_00439394(param_1,temp_v10,&temp_v2,param_3);
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      FUN_002e9768(temp_v9,0x40,&LAB_00438e04,temp_v10[temp_v1]);
      temp_v4 = 0;
      puVar1 = &temp_v4;
      temp_v3[0] = 'D';
      temp_v3[1] = -0x7f;
      temp_v3[2] = 'U';
      temp_v3[3] = '\0';
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      FUN_001883b0(puVar1,temp_v9,1);
      if ((int)puVar1 < 0) {
joined_r0x00438d38:
        if ((temp_v4 & 0xfffffffe) == 0) {
          return puVar1;
        }
        if ((temp_v4 & 1) != 0) {
          FUN_00195fc8();
        }
        FUN_001884b0(temp_v4 & 0xfffffffe);
        return puVar1;
      }
      *(unsigned char *)((int)param_1 + 0x1b) = temp_v10[temp_v1];
      puVar1 = param_1;
      FUN_00438e28(param_1,param_2,temp_v3,temp_v11,param_5);
      if ((int)puVar1 < 0) goto joined_r0x00438d38;
      if ((temp_v4 & 0xfffffffe) != 0) {
        if ((temp_v4 & 1) != 0) {
          FUN_00195fc8();
        }
        FUN_001884b0(temp_v4 & 0xfffffffe);
        temp_v4 = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return (unsigned int *)0x0;
}
