/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228808` (_code @ 0x228808, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00228808_arg0 fn_00228808_arg0;
struct fn_00228808_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1b0];
    ushort field_0x1b4; /* +0x1b4 */
    short field_0x1b6; /* +0x1b6 */
};

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0023ea94(void);
extern int FUN_0023eae0(unsigned int);
/* Supplied declaration required: FUN_00282924. */
extern unsigned int *FUN_002939f4(void);
extern int FUN_002c5f60(int, int);


unsigned int FUN_00228808(fn_00228808_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  puVar1 = (unsigned int *)FUN_002939f4();
  if ((puVar1[0x112b] & 1) != 0) {
    return 1;
  }
  temp_v2 = 0x28;
  FUN_00282924(puVar1,param_1);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v3 = *puVar1;
    if ((temp_v3 & 10) != 0) {
      temp_v2 = 0x1e;
      if (param_3 == 1) {
        temp_v2 = 0x55;
      }
LAB_00228864:
      if ((temp_v3 & 0x10) != 0) goto LAB_0022886c;
    }
    else {
      if ((temp_v3 & 0x20) != 0) goto LAB_00228864;
      if ((temp_v3 & 0x10) == 0) {
        temp_v1 = FUN_0023eae0(99);
        if (temp_v1 < temp_v2) {
          return 1;
        }
        return 0;
      }
      if (*(unsigned short *)((int)puVar1 + 0x206) >> 10 == 1) {
        return 0;
      }
      if (param_3 == 1) {
        temp_v2 = 0x55;
      }
LAB_0022886c:
      temp_v0 = FUN_002c5f60((short)puVar1[0x6d] * 100,(int)*(short *)((int)puVar1 + 0x1b6));
      temp_v4 = SBORROW4(temp_v0,0x28);
      temp_v1 = temp_v0 - 0x28;
      if (temp_v0 < 0x29) {
        temp_v4 = SBORROW4(temp_v2,0x46);
        temp_v1 = temp_v2 - 0x46;
      }
      if (temp_v1 < 0 != temp_v4) {
        temp_v2 = 0x46;
      }
    }
    if ((temp_v3 & 10) != 0) {
      temp_v1 = FUN_0023ea94();
      temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(*(float *)(temp_v1 + 0x14) * temp_v5);
    }
    if ((*puVar1 & 0x10) != 0) {
      temp_v1 = FUN_0023ea94();
      temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(*(float *)(temp_v1 + 0x18) * temp_v5);
    }
  }
  temp_v1 = FUN_0023eae0(99);
  if (temp_v1 < temp_v2) {
    return 1;
  }
  return 0;
}
