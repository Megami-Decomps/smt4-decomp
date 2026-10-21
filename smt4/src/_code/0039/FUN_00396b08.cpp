/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396b08` (_code @ 0x396b08, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordSetPosition(int *, int *);
int recordSetDirection(int *, int *);
int recordSetOrigin(int *, int *);
int FUN_002329a8(int *, unsigned int);
int dataTable29Sub0GetEntryWithAoc(void);
int FUN_002533f4(int, unsigned int, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp868; /* 0x868: local_868 */
    unsigned int sp86C; /* 0x86c: local_86c */
    unsigned int sp870; /* 0x870: local_870 */
    unsigned int sp874; /* 0x874: local_874 */
    unsigned int sp878; /* 0x878: local_878 */
    unsigned int sp87C; /* 0x87c: local_87c */
    unsigned int sp880; /* 0x880: local_880 */
    unsigned int sp884; /* 0x884: local_884 */
    unsigned int sp888; /* 0x888: local_888 */
} param_2_stack;

extern int g_lmapScene; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern int FUN_001e2954(int);
extern int dataTable00RankOfPicked(int);
/* Supplied declaration required: recordSetPosition. */
/* Supplied declaration required: recordSetDirection. */
/* Supplied declaration required: recordSetOrigin. */
/* Supplied declaration required: FUN_002329a8. */
extern int *FUN_00232a6c(int, unsigned int);
/* Supplied declaration required: dataTable29Sub0GetEntryWithAoc. */
/* Supplied declaration required: FUN_002533f4. */
extern int gameFlagIsSet(unsigned int);
extern int randNextInRange(unsigned int);


void FUN_00396b08(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int *piVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *unaff_r11;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned short temp_v22 [512];
  unsigned char temp_v23 [1072];
  
  temp_v0 = *(unsigned short *)(param_1 + 0xa0);
  if (temp_v0 == 0) {
    return;
  }
  temp_v5 = 0;
  temp_v6 = temp_v5;
  do {
    temp_v1 = 0;
    temp_v4 = param_1 + temp_v5 * 2;
    do {
      temp_v3 = *(int *)(param_1 + temp_v1 * 4 + 0x18);
      if ((temp_v3 != 0) && ((unsigned int)*(unsigned short *)(temp_v4 + 0xa2) == *(unsigned int *)(temp_v3 + 0x20)))
      goto LAB_00396b7c;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x20);
    puVar4 = temp_v22 + temp_v6;
    temp_v6 = (temp_v6 + 1) & 0xffff;
    *puVar4 = *(unsigned short *)(temp_v4 + 0xa2);
LAB_00396b7c:
    temp_v5 = temp_v5 + 1;
  } while ((int)temp_v5 < (int)(unsigned int)temp_v0);
  if (temp_v6 == 0) {
    return;
  }
  temp_v5 = 0;
  if (param_2 != 0) {
    if (!(param_2 != 1 && param_2 != 2)) {
      temp_v5 = 0;
      temp_v1 = 0;
      if (temp_v6 != 0) {
        unaff_r11 = temp_v23;
      }
      temp_v12 = (unsigned long long)*(unsigned int *)(g_lmapScene + 0x1c);
      temp_v11 = *(float *)(g_lmapScene + 0x20);
      temp_v10 = *(float *)(g_lmapScene + 0x24);
      if (temp_v6 == 0) {
        return;
      }
      do {
        temp_v2 = (unsigned int)temp_v22[temp_v1];
        dataTable29Sub0GetEntryWithAoc();
        temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v8 = (float)temp_v12 - temp_v8;
        temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v7 = romwright_sqrt_4(temp_v8 * temp_v8 + (temp_v11 - temp_v7) * (temp_v11 - temp_v7) +
                      (temp_v10 - temp_v9) * (temp_v10 - temp_v9));
        if (param_2 != 1) {
          if ((param_2 == 2) && ((int)temp_v7 + 0xbc69ffffU < 0x1e3ffff)) {
            temp_v4 = temp_v5 * 2;
            temp_v5 = (temp_v5 + 1) & 0xffff;
            *(unsigned short *)(unaff_r11 + temp_v4) = temp_v22[temp_v1];
          }
        }
        else if ((int)temp_v7 + 0xbb9effffU < 0xda7fff) {
          temp_v4 = temp_v5 * 2;
          temp_v5 = (temp_v5 + 1) & 0xffff;
          *(unsigned short *)(unaff_r11 + temp_v4) = temp_v22[temp_v1];
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v6);
      if (temp_v5 == 0) {
        return;
      }
      temp_v1 = randNextInRange((temp_v5 - 1) & 0xffff);
      puVar4 = (unsigned short *)(unaff_r11 + temp_v1 * 2);
      temp_v5 = (unsigned int)*puVar4;
    }
  }
  else {
    temp_v1 = randNextInRange((temp_v6 - 1) & 0xffff);
    puVar4 = temp_v22 + temp_v1;
    temp_v5 = (unsigned int)*puVar4;
  }
  temp_v6 = temp_v5;
  dataTable29Sub0GetEntryWithAoc();
  temp_v19 = VectorSignedToFloat((int)*(short *)(temp_v6 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v20 = VectorSignedToFloat((int)*(short *)(temp_v6 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v21 = VectorSignedToFloat((int)*(short *)(temp_v6 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0x42480000;
  temp_v17 = 0x42480000;
  temp_v18 = 0x42480000;
  temp_v1 = *(int *)(param_1 + 4);
  FUN_002533f4(temp_v1,*(unsigned int *)(param_1 + 8),0);
  piVar5 = (int *)FUN_00232a6c(param_1,0);
  if (piVar5 != (int *)0x0) {
    FUN_002329a8(piVar5,*(unsigned int *)(param_1 + 0x98));
    recordSetOrigin(piVar5,&temp_v19);
    recordSetDirection(piVar5,&temp_v13);
    recordSetPosition(piVar5,&temp_v16);
    piVar5[7] = temp_v1;
    piVar5[8] = temp_v5;
    temp_v4 = FUN_001e2954(temp_v1);
    piVar5[0x18] = temp_v4;
    temp_v1 = dataTable00RankOfPicked(temp_v1);
    piVar5[0x19] = temp_v1;
    temp_v1 = gameFlagIsSet(0x529);
    if ((temp_v1 != 0) && (param_2 == 1)) {
      (**(romwright_code **)(*piVar5 + 0x14))(piVar5);
    }
  }
  return;
}

} /* extern "C" */
