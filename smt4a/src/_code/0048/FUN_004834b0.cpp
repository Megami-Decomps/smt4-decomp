/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004834b0` (_code @ 0x4834b0, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018719c(int);
int FUN_00356308(void);
int FUN_00483304(int, int);
int VectorSignedToFloat(int, int);

extern int DAT_00581288; /* 0x581288 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00356308. */
extern int FUN_00379734(unsigned short);
/* Supplied declaration required: FUN_00483304. */


void FUN_004834b0(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  unsigned short temp_v12 [512];
  unsigned short temp_v13 [536];
  
  temp_v3 = *(unsigned short *)(param_1 + 0xa0);
  if (temp_v3 == 0) {
    return;
  }
  temp_v5 = 0;
  temp_v6 = temp_v5;
  do {
    temp_v0 = 0;
    temp_v2 = param_1 + temp_v5 * 2;
    do {
      temp_v4 = *(int *)(param_1 + temp_v0 * 4 + 0x18);
      if ((temp_v4 != 0) && ((unsigned int)*(unsigned short *)(temp_v2 + 0xa2) == *(unsigned int *)(temp_v4 + 0x24)))
      goto LAB_00483524;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
    puVar3 = temp_v12 + temp_v6;
    temp_v6 = (temp_v6 + 1) & 0xffff;
    *puVar3 = *(unsigned short *)(temp_v2 + 0xa2);
LAB_00483524:
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < (int)(unsigned int)temp_v3);
  if (temp_v6 == 0) {
    return;
  }
  temp_v3 = 0;
  if (param_2 != 0) {
    if (param_2 != 1 && param_2 != 2) {
      if (param_2 == 3) {
        temp_v0 = 0;
        if (temp_v6 == 0) {
          return;
        }
        do {
          temp_v5 = (unsigned int)temp_v12[temp_v0];
          FUN_00356308();
          if ((((*(short *)(temp_v5 + 10) != 1) ||
               ((temp_v2 = FUN_0018719c(0x137), temp_v2 != 0 &&
                (temp_v2 = FUN_0018719c(0x147), temp_v2 == 0)))) &&
              (temp_v2 = FUN_00379734(*(unsigned short *)(temp_v5 + 8)), *(char *)(temp_v2 + 10) == '\x03'))
             && (temp_v2 = FUN_0018719c((int)*(short *)(temp_v2 + 0xc)), temp_v2 == 0)) {
            FUN_00483304(param_1,temp_v12[temp_v0]);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)temp_v6);
        return;
      }
      FUN_00483304(param_1,temp_v3);
      return;
    }
    temp_v5 = 0;
    temp_v11 = (unsigned long long)*(unsigned int *)(DAT_00581288 + 0x1c);
    temp_v10 = romwright_piece_4_4(*(unsigned int *)(DAT_00581288 + 0x20),*(unsigned int *)(DAT_00581288 + 0x24));
    temp_v0 = 0;
    if (temp_v6 == 0) {
      return;
    }
    do {
      temp_v1 = (unsigned int)temp_v12[temp_v0];
      FUN_00356308();
      if (((*(short *)(temp_v1 + 10) != 1) ||
          ((temp_v2 = FUN_0018719c(0x137), temp_v2 != 0 && (temp_v2 = FUN_0018719c(0x147), temp_v2 == 0))))
         && ((temp_v2 = FUN_00379734(*(unsigned short *)(temp_v1 + 8)), *(char *)(temp_v2 + 10) != '\x03' ||
             (temp_v2 = FUN_0018719c((int)*(short *)(temp_v2 + 0xc)), temp_v2 == 0)))) {
        temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v7 = (float)temp_v11 - temp_v7;
        temp_v8 = (float)((unsigned long long)temp_v10 >> 0x20) - temp_v8;
        temp_v9 = (float)temp_v10 - temp_v9;
        temp_v7 = romwright_sqrt_4(temp_v7 * temp_v7 + temp_v8 * temp_v8 + temp_v9 * temp_v9);
        if (param_2 != 1) {
          if ((param_2 == 2) && ((int)temp_v7 + 0xbc69ffffU < 0x1e3ffff)) {
            puVar3 = temp_v13 + temp_v5;
            temp_v5 = (temp_v5 + 1) & 0xffff;
            *puVar3 = temp_v12[temp_v0];
          }
        }
        else if ((int)temp_v7 + 0xbb9effffU < 0xda7fff) {
          puVar3 = temp_v13 + temp_v5;
          temp_v5 = (temp_v5 + 1) & 0xffff;
          *puVar3 = temp_v12[temp_v0];
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)temp_v6);
    if (temp_v5 == 0) {
      return;
    }
    temp_v0 = FUN_0014bef4((temp_v5 - 1) & 0xffff);
    puVar3 = temp_v13 + temp_v0;
  }
  else {
    temp_v0 = FUN_0014bef4((temp_v6 - 1) & 0xffff);
    puVar3 = temp_v12 + temp_v0;
  }
  temp_v3 = *puVar3;
  FUN_00483304(param_1,temp_v3);
  return;
}

} /* extern "C" */
