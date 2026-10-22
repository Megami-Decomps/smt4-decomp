/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325ba4` (_code @ 0x325ba4, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, unsigned int);
int distSpatial(void);
int mapObjGetCombinedEntry(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern int g_mapObj; /* 0x581284 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: mapObjGetCombinedEntry. */
extern int dataTableGetRecordFortyFive(void);


void FUN_00325ba4(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5,
                 int param_6)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0, in_s1; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short *psVar3;
  short *psVar4;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v3;
  unsigned int in_s1;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  long long temp_v7;
  unsigned long long temp_v8;
  
  psVar4 = (short *)0x0;
  temp_v2 = 99999;
  temp_v8 = romwright_piece_4_4(in_s0,in_s1);
  temp_v1 = dataTableGetRecordFortyFive();
  if (0 < temp_v1) {
    temp_v7 = (unsigned long long)(unsigned int)((float)temp_v8 + 50.0f) << 0x20;
    do {
      psVar3 = psVar4;
      mapObjGetCombinedEntry();
      if (((-1 < *psVar3) && (*psVar3 == *(short *)(g_mapObj + 4))) &&
         ((int)psVar3[1] == (int)*(short *)(g_mapObj + 6))) {
        temp_v1 = (int)psVar3[2];
        if (temp_v1 != param_1) {
          temp_v0 = (int)*(short *)(g_mapObj + 6);
          if (temp_v1 != param_2) {
            temp_v0 = param_3;
          }
          if (temp_v1 != param_2 && temp_v1 != temp_v0) goto LAB_00325cdc;
        }
        temp_v4 = VectorSignedToFloat((int)psVar3[3],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat((int)psVar3[4],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorSignedToFloat((int)psVar3[5],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (float)((unsigned long long)temp_v7 >> 0x20);
        temp_v7 = CONCAT44(temp_v3,temp_v6);
        if (((param_6 < 1) ||
            (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 <= temp_v5) << 0x1d),
            romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) &&
           ((-2 < param_6 ||
            (in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 <= temp_v3) << 0x1d),
            romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))))) {
          temp_v3 = (float)((unsigned long long)temp_v8 >> 0x20);
          distSpatial();
          if ((int)temp_v3 < temp_v2) {
            *param_4 = temp_v4;
            *(float *)&param_4[1] = temp_v5;
            param_4[2] = (int)temp_v7;
            temp_v4 = VectorSignedToFloat((int)psVar3[6],(unsigned char)(in_fpscr >> 0x16) & 3);
            *param_5 = temp_v4;
            temp_v2 = (int)temp_v3;
          }
        }
      }
LAB_00325cdc:
      psVar4 = (short *)((int)psVar4 + 1);
      temp_v1 = dataTableGetRecordFortyFive();
    } while ((int)psVar4 < temp_v1);
  }
  return;
}

} /* extern "C" */
