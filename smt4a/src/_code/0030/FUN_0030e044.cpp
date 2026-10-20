/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e044` (_code @ 0x30e044, 0x152 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0030e044_arg0 fn_0030e044_arg0;
struct fn_0030e044_arg0 {
    unsigned char pad_0x0[0x2c];
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x4];
    uint field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x4];
    int field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x28];
    uint field_0x6c; /* +0x6c */
    uint field_0x70; /* +0x70 */
    uint field_0x74; /* +0x74 */
    uint field_0x78; /* +0x78 */
    uint field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0xc];
    unsigned char field_0x8c; /* +0x8c */
    unsigned char pad_0x8d[0x3];
    uint field_0x90; /* +0x90 */
};

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;


unsigned int FUN_0030e044(fn_0030e044_arg0 *param_1,unsigned int param_2)

{
  char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  unsigned int temp_v6;
  char *pcVar9;
  char *pcVar10;
  unsigned int temp_v7;
  unsigned int temp_v8;
  char *pcVar11;
  
  temp_v3 = param_1->field_0x78;
  temp_v4 = param_1->field_0x6c;
  temp_v7 = param_1->field_0x7c;
  pcVar9 = (char *)(param_1->field_0x38 + temp_v4);
  if (param_1->field_0x2c - 0x106U < temp_v4) {
    temp_v4 = (temp_v4 - param_1->field_0x2c) + 0x106;
  }
  else {
    temp_v4 = 0;
  }
  temp_v1 = pcVar9[temp_v3];
  temp_v0 = pcVar9[temp_v3 - 1];
  if (*(unsigned int *)&param_1->field_0x8c <= temp_v3) {
    temp_v7 = temp_v7 >> 2;
  }
  temp_v5 = param_1->field_0x74;
  temp_v8 = param_1->field_0x90;
  if (temp_v5 < param_1->field_0x90) {
    temp_v8 = temp_v5;
  }
  do {
    pcVar7 = (char *)(param_1->field_0x38 + param_2);
    if ((((pcVar7[temp_v3] == temp_v1) && (pcVar7[temp_v3 - 1] == temp_v0)) && (*pcVar7 == *pcVar9)) &&
       (pcVar7[1] == pcVar9[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar11 = pcVar9 + 2;
      while (((((pcVar10 = pcVar11 + 1, *pcVar10 == pcVar7[1] &&
                (pcVar10 = pcVar11 + 2, *pcVar10 == pcVar7[2])) &&
               ((pcVar10 = pcVar11 + 3, *pcVar10 == pcVar7[3] &&
                ((pcVar10 = pcVar11 + 4, *pcVar10 == pcVar7[4] &&
                 (pcVar10 = pcVar11 + 5, *pcVar10 == pcVar7[5])))))) &&
              (pcVar10 = pcVar11 + 6, *pcVar10 == pcVar7[6])) &&
             (pcVar10 = pcVar11 + 7, *pcVar10 == pcVar7[7]))) {
        pcVar10 = pcVar11 + 8;
        pcVar7 = pcVar7 + 8;
        if ((*pcVar10 != *pcVar7) || (pcVar11 = pcVar10, pcVar9 + 0x102 <= pcVar10)) break;
      }
      temp_v2 = -((int)(pcVar9 + 0x102) - (int)pcVar10);
      temp_v6 = temp_v2 + 0x102;
      if ((int)temp_v3 < (int)temp_v6) {
        param_1->field_0x70 = param_2;
        if ((int)temp_v8 <= (int)temp_v6) {
          if (temp_v5 < temp_v6) {
            temp_v6 = temp_v5;
          }
          return temp_v6;
        }
        temp_v1 = pcVar9[temp_v6];
        temp_v0 = pcVar9[temp_v2 + 0x101];
        temp_v3 = temp_v6;
      }
    }
    temp_v6 = temp_v3;
    param_2 = (unsigned int)*(unsigned short *)(param_1->field_0x40 + (param_2 & param_1->field_0x34) * 2);
    if ((param_2 <= temp_v4) || (temp_v7 = temp_v7 - 1, temp_v3 = temp_v6, temp_v7 == 0)) {
      if (temp_v5 < temp_v6) {
        temp_v6 = temp_v5;
      }
      return temp_v6;
    }
  } while( 1 );
}

} /* extern "C" */
