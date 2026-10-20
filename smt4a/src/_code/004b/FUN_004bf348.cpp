/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bf348` (_code @ 0x4bf348, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003f0e20(...);
int VectorSignedToFloat(unsigned int, int);

typedef struct fn_004bf348_arg0 fn_004bf348_arg0;
struct fn_004bf348_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x459c];
    undefined4 field_0x45a0; /* +0x45a0 */
    undefined4 field_0x45a4; /* +0x45a4 */
    undefined4 field_0x45a8; /* +0x45a8 */
    unsigned char pad_0x45ac[0x898];
    byte field_0x4e44; /* +0x4e44 */
};

extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571418; /* 0x571418 */
extern unsigned int DAT_0057141c; /* 0x57141c */
extern unsigned int DAT_00571460; /* 0x571460 */
extern unsigned int DAT_00571464; /* 0x571464 */
extern unsigned int DAT_00571470; /* 0x571470 */
extern unsigned int DAT_00571474; /* 0x571474 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714e8; /* 0x5714e8 */
extern unsigned int DAT_005714ec; /* 0x5714ec */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
extern int lcgRandomRange(unsigned int);
extern int gameFlagIsSet(unsigned int);
extern int FUN_0028cb6c(void);
/* Supplied declaration required: FUN_003f0e20. */
extern int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_004bf348(fn_004bf348_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  puVar1 = (unsigned int *)btlGetMainState();
  if (((DAT_005714e8 & puVar1[0x116a]) != 0 || (DAT_005714ec & puVar1[0x116b]) != 0) ||
     (temp_v0 = gameFlagIsSet(0x46e), temp_v0 != 0)) {
    return 1;
  }
  temp_v0 = gameFlagIsSet(0x472);
  if (temp_v0 == 0) {
    temp_v4 = 0x28;
    puVar3 = puVar1;
    FUN_003f0e20(puVar1,param_1);
    if (puVar3 != (unsigned int *)0x0) {
      temp_v1 = *puVar3;
      temp_v3 = puVar3[1];
      if ((!((DAT_005713fc & temp_v3) == 0 && (DAT_005713f8 & temp_v1) == 0)) ||
         (!((DAT_00571408 & temp_v1) == 0 && (DAT_0057140c & temp_v3) == 0))) {
        temp_v4 = 0x1e;
        if ((param_3 == 1) &&
           (temp_v4 = 0x55, (DAT_00571460 & temp_v1) != 0 || (DAT_00571464 & temp_v3) != 0)) {
          temp_v4 = 100;
        }
        if (((param_2 != 1) && (param_2 == 2)) &&
           ((temp_v3 & DAT_00571474) != 0 || (DAT_00571470 & temp_v1) != 0)) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v0 = 0;
          if (temp_v2 != 0) {
            temp_v0 = *(int *)(temp_v2 + 0x110);
          }
          if ((temp_v2 != 0 && temp_v0 != 0) && -1 < temp_v0) {
            return 1;
          }
        }
      }
      else if (!((DAT_00571418 & temp_v1) == 0 && (DAT_0057141c & temp_v3) == 0)) {
        if (((param_2 != 1) && (param_2 == 2)) &&
           ((temp_v1 & DAT_00571470) != 0 || (temp_v3 & DAT_00571474) != 0)) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v0 = 0;
          if (temp_v2 != 0) {
            temp_v0 = *(int *)(temp_v2 + 0x110);
          }
          if ((temp_v2 != 0 && temp_v0 != 0) && -1 < temp_v0) {
            return 1;
          }
        }
      }
      else if ((DAT_00571410 & temp_v1) != 0 || (DAT_00571414 & temp_v3) != 0) {
        if (*(unsigned short *)((int)puVar3 + 0x2ca) >> 10 == 1) {
          return 0;
        }
        if ((param_3 == 1) &&
           (temp_v4 = 0x55, (DAT_00571460 & temp_v1) != 0 || (DAT_00571464 & temp_v3) != 0)) {
          temp_v4 = 100;
        }
        if (((param_2 != 1) && (param_2 == 2)) &&
           ((temp_v1 & DAT_00571470) != 0 || (temp_v3 & DAT_00571474) != 0)) {
          temp_v2 = btlGetMainState();
          FUN_003f0e20(temp_v2,param_1);
          temp_v0 = 0;
          if (temp_v2 != 0) {
            temp_v0 = *(int *)(temp_v2 + 0x110);
          }
          if ((temp_v2 != 0 && temp_v0 != 0) && -1 < temp_v0) {
            return 1;
          }
        }
      }
      temp_v1 = *puVar3;
      temp_v3 = puVar3[1];
      if ((((DAT_00571410 & temp_v1) != 0 || (DAT_00571414 & temp_v3) != 0) &&
          (temp_v0 = __aeabi_idivmod(puVar3[0x96] * 100,puVar3[0x97]), temp_v0 < 0x29)) && (temp_v4 < 0x50))
      {
        temp_v4 = 0x50;
      }
      if (((DAT_005713fc & temp_v3) != 0 || (DAT_005713f8 & temp_v1) != 0) ||
         ((DAT_0057140c & temp_v3) != 0 || (DAT_00571408 & temp_v1) != 0)) {
        temp_v0 = FUN_0028cb6c();
        temp_v5 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (unsigned int)(*(float *)(temp_v0 + 0x10) * temp_v5);
      }
      if ((*puVar3 & DAT_00571410) != 0 || (puVar3[1] & DAT_00571414) != 0) {
        temp_v0 = FUN_0028cb6c();
        temp_v5 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (unsigned int)(*(float *)(temp_v0 + 0x14) * temp_v5);
      }
    }
    temp_v0 = lcgRandomRange(99);
    if ((DAT_00571498 & puVar1[0x1168]) != 0 || (DAT_0057149c & puVar1[0x1169]) != 0) {
      if ((char)puVar1[0x1391] == '\0') {
        temp_v4 = 0;
      }
      else {
        temp_v4 = 100;
      }
    }
    if (temp_v0 < (int)temp_v4) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
