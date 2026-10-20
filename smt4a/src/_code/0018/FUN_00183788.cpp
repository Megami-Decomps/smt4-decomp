/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183788` (_code @ 0x183788, 0x428 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00185dd4(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_12: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_12_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern unsigned int DAT_00630724; /* 0x630724 */
extern unsigned int DAT_00630728; /* 0x630728 */
extern unsigned int DAT_0063072c; /* 0x63072c */
extern unsigned int DAT_00630730; /* 0x630730 */
extern unsigned int DAT_00630734; /* 0x630734 */
extern unsigned int DAT_00630738; /* 0x630738 */
extern unsigned int DAT_0063073c; /* 0x63073c */
extern unsigned int DAT_00630740; /* 0x630740 */
extern unsigned int DAT_00630744; /* 0x630744 */
extern unsigned int DAT_00630748; /* 0x630748 */
extern unsigned int DAT_0063074c; /* 0x63074c */
extern unsigned int DAT_00630750; /* 0x630750 */
extern unsigned int DAT_00630754; /* 0x630754 */
extern unsigned int DAT_00630758; /* 0x630758 */
extern unsigned int DAT_0063075c; /* 0x63075c */
extern unsigned int DAT_00630760; /* 0x630760 */
extern unsigned int DAT_0063077c; /* 0x63077c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00185dd4. */


void FUN_00183788(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
                 int param_10,unsigned long long param_11,int param_12)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v0 = FUN_001834a4(param_5,param_6);
  psVar4 = *(short **)(temp_v0 + 0xc);
  temp_v1 = param_1;
  if (param_2 < param_1) {
    temp_v1 = param_2;
  }
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v10 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat((int)*psVar4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = VectorFloatToUnsigned((temp_v6 / temp_v10) * temp_v8,3);
  if ((0 < param_1) && (temp_v9 == 0)) {
    temp_v9 = 1;
  }
  temp_v2 = ((param_2 << 0xc) / 100) * 0x14;
  temp_v11 = (unsigned int)param_11;
  temp_v12 = (unsigned int)((unsigned long long)param_11 >> 0x20);
  if (param_3 == 0) {
    if (temp_v2 < 0x1000) {
      temp_v2 = 0x1000;
    }
    if ((unsigned int)(param_1 << 0xc) <= temp_v2) {
      param_6 = param_9;
    }
    FUN_00185dd4(2,param_5,param_6,param_10,temp_v11,temp_v9,(int)psVar4[1],temp_v12);
    DAT_00630724 = 0x3f800000;
    DAT_00630728 = 0x3f800000;
    DAT_0063072c = 0x3f800000;
    DAT_00630730 = DAT_0063077c;
    DAT_00630734 = 0x3f800000;
    DAT_00630738 = 0x3f800000;
    DAT_0063073c = 0x3f800000;
    DAT_00630740 = DAT_0063077c;
    DAT_00630744 = 0x3f800000;
    DAT_00630748 = 0x3f800000;
    DAT_0063074c = 0x3f800000;
    DAT_00630750 = DAT_0063077c;
    DAT_00630754 = 0x3f800000;
    DAT_00630758 = 0x3f800000;
    DAT_0063075c = 0x3f800000;
    DAT_00630760 = DAT_0063077c;
    return;
  }
  temp_v1 = param_1 + param_3;
  if (param_2 < param_1 + param_3) {
    temp_v1 = param_2;
  }
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  temp_v8 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = VectorFloatToUnsigned((temp_v6 / temp_v8) * temp_v10,3);
  if (temp_v7 == 0) {
    temp_v7 = 1;
  }
  if (temp_v2 < 0x1000) {
    temp_v2 = 0x1000;
  }
  if ((unsigned int)(temp_v1 << 0xc) <= temp_v2) {
    param_6 = param_9;
  }
  temp_v1 = param_4 - 10;
  if (param_3 >= 1) {
    temp_v4 = temp_v7 - temp_v9;
    temp_v5 = temp_v4;
    if (temp_v4 == 0) {
      temp_v5 = 1;
    }
    if (param_4 - 0xbU < 10) {
      temp_v6 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v10,3);
      temp_v4 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v8,3);
      temp_v5 = temp_v5 - temp_v1;
      temp_v9 = temp_v9 + temp_v4;
    }
    else if (param_4 >= 0x15) {
      temp_v5 = 0;
      temp_v9 = temp_v7;
    }
    if (param_12 == 0) {
      FUN_00185dd4(2,param_5,param_6,param_10,temp_v11,temp_v9,(int)psVar4[1],temp_v12);
    }
    temp_v1 = DAT_0059dbb4;
    if (temp_v5 == 0) {
      DAT_00630724 = 0x3f800000;
      DAT_00630728 = 0x3f800000;
      DAT_0063072c = 0x3f800000;
      DAT_00630730 = DAT_0063077c;
      DAT_00630734 = 0x3f800000;
      DAT_00630738 = 0x3f800000;
      DAT_0063073c = 0x3f800000;
      DAT_00630740 = DAT_0063077c;
      DAT_00630744 = 0x3f800000;
      DAT_00630748 = 0x3f800000;
      DAT_0063074c = 0x3f800000;
      DAT_00630750 = DAT_0063077c;
      DAT_00630754 = 0x3f800000;
      DAT_00630758 = 0x3f800000;
      DAT_0063075c = 0x3f800000;
      DAT_00630760 = DAT_0063077c;
      return;
    }
    if (param_12 != 0) {
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
    }
    FUN_00185dd4(2,param_5,param_7,param_10 + temp_v9,(int)param_11,temp_v5,
                 (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),(int)((unsigned long long)param_11 >> 0x20));
    temp_v1 = DAT_0059dbb4;
    temp_v0 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12b8);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v1 + 0x12d0) == '\0' && temp_v5 == temp_v0) {
      DAT_00630724 = 0x3f800000;
      DAT_00630728 = 0x3f800000;
      DAT_0063072c = 0x3f800000;
      DAT_00630730 = DAT_0063077c;
      DAT_00630734 = 0x3f800000;
      DAT_00630738 = 0x3f800000;
      DAT_0063073c = 0x3f800000;
      DAT_00630740 = DAT_0063077c;
      DAT_00630744 = 0x3f800000;
      DAT_00630748 = 0x3f800000;
      DAT_0063074c = 0x3f800000;
      DAT_00630750 = DAT_0063077c;
      DAT_00630754 = 0x3f800000;
      DAT_00630758 = 0x3f800000;
      DAT_0063075c = 0x3f800000;
      DAT_00630760 = DAT_0063077c;
      return;
    }
  }
  else {
    temp_v5 = temp_v9 - temp_v7;
    if (temp_v9 < temp_v7) {
      temp_v5 = 0;
      temp_v7 = temp_v9;
    }
    if (param_4 - 0xbU < 10) {
      temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v9 - temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = VectorFloatToUnsigned(temp_v6 * 0.1f * temp_v8,3);
      temp_v5 = temp_v5 - temp_v1;
    }
    else if (param_4 >= 0x15) {
      temp_v5 = 0;
    }
    if (param_12 == 0) {
      FUN_00185dd4(2,param_5,param_6,param_10,temp_v11,temp_v7,(int)psVar4[1],temp_v12);
    }
    temp_v1 = DAT_0059dbb4;
    if (temp_v5 == 0) {
      DAT_00630724 = 0x3f800000;
      DAT_00630728 = 0x3f800000;
      DAT_0063072c = 0x3f800000;
      DAT_00630730 = DAT_0063077c;
      DAT_00630734 = 0x3f800000;
      DAT_00630738 = 0x3f800000;
      DAT_0063073c = 0x3f800000;
      DAT_00630740 = DAT_0063077c;
      DAT_00630744 = 0x3f800000;
      DAT_00630748 = 0x3f800000;
      DAT_0063074c = 0x3f800000;
      DAT_00630750 = DAT_0063077c;
      DAT_00630754 = 0x3f800000;
      DAT_00630758 = 0x3f800000;
      DAT_0063075c = 0x3f800000;
      DAT_00630760 = DAT_0063077c;
      return;
    }
    if (param_12 != 0) {
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v4) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
    }
    FUN_00185dd4(2,param_5,param_8,param_10 + temp_v7,(int)param_11,temp_v5,
                 (int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),(int)((unsigned long long)param_11 >> 0x20));
    temp_v1 = DAT_0059dbb4;
    temp_v0 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12b8);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (*(char *)(temp_v1 + 0x12d0) == '\0' && temp_v5 == temp_v0) {
      DAT_00630724 = 0x3f800000;
      DAT_00630728 = 0x3f800000;
      DAT_0063072c = 0x3f800000;
      DAT_00630730 = DAT_0063077c;
      DAT_00630734 = 0x3f800000;
      DAT_00630738 = 0x3f800000;
      DAT_0063073c = 0x3f800000;
      DAT_00630740 = DAT_0063077c;
      DAT_00630744 = 0x3f800000;
      DAT_00630748 = 0x3f800000;
      DAT_0063074c = 0x3f800000;
      DAT_00630750 = DAT_0063077c;
      DAT_00630754 = 0x3f800000;
      DAT_00630758 = 0x3f800000;
      DAT_0063075c = 0x3f800000;
      DAT_00630760 = DAT_0063077c;
      return;
    }
  }
  (*(romwright_code *)piVar7[7])();
  *(unsigned char *)(piVar7 + 6) = 0;
  DAT_00630724 = 0x3f800000;
  DAT_00630728 = 0x3f800000;
  DAT_0063072c = 0x3f800000;
  DAT_00630730 = DAT_0063077c;
  DAT_00630734 = 0x3f800000;
  DAT_00630738 = 0x3f800000;
  DAT_0063073c = 0x3f800000;
  DAT_00630740 = DAT_0063077c;
  DAT_00630744 = 0x3f800000;
  DAT_00630748 = 0x3f800000;
  DAT_0063074c = 0x3f800000;
  DAT_00630750 = DAT_0063077c;
  DAT_00630754 = 0x3f800000;
  DAT_00630758 = 0x3f800000;
  DAT_0063075c = 0x3f800000;
  DAT_00630760 = DAT_0063077c;
  return;
}

} /* extern "C" */
