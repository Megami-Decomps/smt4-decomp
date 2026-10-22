/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240674` (_code @ 0x240674, 0x3ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e503c(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameGetPlayerData(void);
extern int FUN_001834a4(unsigned int, unsigned int);
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
extern float FUN_001b4874(unsigned int, unsigned int);
extern int actorIsActive(void);
extern int partySlotMatchesSelected(unsigned int);
/* Supplied declaration required: FUN_003e503c. */
extern unsigned int FUN_004ccbf0(int);
extern unsigned int FUN_004ccdb8(unsigned short, int, int);


void FUN_00240674(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned short temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  
  temp_v1 = gameGetSlotTable();
  temp_v2 = FUN_001834a4(0x1d,0x14);
  temp_v3 = gameGetPlayerData();
  temp_v4 = FUN_004ccbf0((unsigned int)*(unsigned short *)(temp_v3 + 0x62) + (int)*(short *)(param_1 + 0x788a));
  if (*(char *)(param_1 + 0x788e) != '\0') {
    temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
  }
  else {
    temp_v5 = (float)FUN_001b4874((*(unsigned int *)(param_1 + 0x7884) << 0x14) |
                                (*(unsigned int *)(param_1 + 0x7880) >> 0xc),
                                *(unsigned int *)(param_1 + 0x7884) >> 0xc);
    temp_v6 = (float)FUN_001b4874(temp_v4,0);
    temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
  }
  *(unsigned short *)(param_1 + 0x7888) = temp_v0;
  temp_v3 = 0;
  do {
    temp_v10 = (int)*(char *)(temp_v1 + temp_v3 + 0x1ca0);
    if ((-1 < temp_v10) && (temp_v7 = gameGetSlotRecord(temp_v10), temp_v7 != 0)) {
      temp_v10 = param_1 + temp_v10 * 0x28;
      temp_v4 = FUN_004ccdb8(*(unsigned short *)(temp_v7 + 0x62),
                           (unsigned int)*(unsigned short *)(temp_v7 + 100) + (int)*(short *)(temp_v10 + 0x78b2),
                           (int)*(short *)(temp_v10 + 0x78b8));
      if (*(char *)(temp_v10 + 0x78b6) != '\0') {
        temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
      }
      else {
        temp_v5 = (float)FUN_001b4874((*(unsigned int *)(temp_v10 + 0x78a8) >> 0xc) |
                                    (*(unsigned int *)(temp_v10 + 0x78ac) << 0x14),
                                    *(unsigned int *)(temp_v10 + 0x78ac) >> 0xc);
        temp_v6 = (float)FUN_001b4874(temp_v4,0);
        temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
      }
      *(unsigned short *)(temp_v10 + 0x78b0) = temp_v0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v2 = FUN_001834a4(0x1d,0x5f);
  temp_v3 = 0;
  do {
    if (((((*(char *)(temp_v1 + 0x1ca0) < '\0') ||
          (*(char *)(temp_v1 + 0x1ca0) != *(char *)(temp_v1 + temp_v3 + 0x1c88))) &&
         ((*(char *)(temp_v1 + 0x1ca1) < '\0' ||
          (*(char *)(temp_v1 + 0x1ca1) != *(char *)(temp_v1 + temp_v3 + 0x1c88))))) &&
        (((*(char *)(temp_v1 + 0x1ca2) < '\0' ||
          (*(char *)(temp_v1 + 0x1ca2) != *(char *)(temp_v1 + temp_v3 + 0x1c88))) &&
         (temp_v10 = (int)*(char *)(temp_v1 + temp_v3 + 0x1c88), -1 < temp_v10)))) &&
       (temp_v7 = gameGetSlotRecord(temp_v10), temp_v7 != 0)) {
      temp_v10 = param_1 + temp_v10 * 0x28;
      temp_v4 = FUN_004ccdb8(*(unsigned short *)(temp_v7 + 0x62),
                           (unsigned int)*(unsigned short *)(temp_v7 + 100) + (int)*(short *)(temp_v10 + 0x78b2),
                           (int)*(short *)(temp_v10 + 0x78b8));
      if (*(char *)(temp_v10 + 0x78b6) != '\0') {
        temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
      }
      else {
        temp_v5 = (float)FUN_001b4874((*(unsigned int *)(temp_v10 + 0x78a8) >> 0xc) |
                                    (*(unsigned int *)(temp_v10 + 0x78ac) << 0x14),
                                    *(unsigned int *)(temp_v10 + 0x78ac) >> 0xc);
        temp_v6 = (float)FUN_001b4874(temp_v4,0);
        temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
      }
      *(unsigned short *)(temp_v10 + 0x78b0) = temp_v0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  temp_v9 = 0;
  do {
    temp_v8 = temp_v9;
    FUN_003e503c();
    temp_v1 = actorIsActive();
    if (temp_v1 != 0) {
      temp_v1 = temp_v9 + 0x19;
      if (temp_v1 >= 0x25) {
        temp_v1 = 0x24;
      }
      temp_v2 = param_1 + temp_v1 * 0x28;
      temp_v4 = FUN_004ccbf0((int)*(short *)(temp_v2 + 0x788a) + (unsigned int)*(unsigned short *)(temp_v8 + 100));
      temp_v1 = partySlotMatchesSelected(temp_v8);
      if (temp_v1 != 0) {
        temp_v1 = FUN_001834a4(0x1d,0x13b);
      }
      else {
        temp_v1 = FUN_001834a4(0x1d,0x5f);
      }
      if (*(char *)(temp_v2 + 0x788e) != '\0') {
        temp_v0 = **(unsigned short **)(temp_v1 + 0xc);
      }
      else {
        temp_v5 = (float)FUN_001b4874((*(unsigned int *)(temp_v2 + 0x7880) >> 0xc) |
                                    (*(unsigned int *)(temp_v2 + 0x7884) << 0x14),
                                    *(unsigned int *)(temp_v2 + 0x7884) >> 0xc);
        temp_v6 = (float)FUN_001b4874(temp_v4,0);
        temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v1 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
      }
      *(unsigned short *)(temp_v2 + 0x7888) = temp_v0;
    }
    temp_v9 = temp_v9 + 1;
  } while ((int)temp_v9 < 0xc);
  return;
}

} /* extern "C" */
