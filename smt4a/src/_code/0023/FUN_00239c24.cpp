/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239c24` (_code @ 0x239c24, 0x908 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(...);
int FUN_001bbf0c(void);
int FUN_001bc124(int, int);
int FUN_002296b0(int);
int FUN_00281b94(...);
int FUN_002c5468(void);
int FUN_002c553c(void);
int FUN_002c670c(int);
int FUN_002ddea0(void);
int FUN_002de4d4(int, int, int);
int FUN_002edf08(void);
int FUN_002ef048(void);
int naviMainSetFlagsAndActivate(int, int, int, int, int, int);
int FUN_003273ac(int);
int FUN_003276f0(...);
int FUN_00331efc(void);
int FUN_00398004(int);
int FUN_003ae3c4(...);
int VectorSignedToFloat(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_005f1604; /* 0x5f1604 */
extern unsigned char DAT_0060fec8; /* 0x60fec8 */
extern int DAT_0060ff88; /* 0x60ff88 */
extern int DAT_0060ff94; /* 0x60ff94 */
extern unsigned char DAT_0060ff9c; /* 0x60ff9c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: randRange. */
extern int gameFlagsGetBlock(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002296b0. */
extern int FUN_00262614(int);
/* Supplied declaration required: FUN_00281b94. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c553c. */
/* Supplied declaration required: FUN_002c670c. */
/* Supplied declaration required: FUN_002ddea0. */
/* Supplied declaration required: FUN_002de4d4. */
/* Supplied declaration required: FUN_002edf08. */
/* Supplied declaration required: FUN_002ef048. */
extern int flagCategoryIsAvailable(int);
/* Supplied declaration required: naviMainSetFlagsAndActivate. */
/* Supplied declaration required: FUN_003273ac. */
extern int FUN_00327540(int);
/* Supplied declaration required: FUN_003276f0. */
/* Supplied declaration required: FUN_00331efc. */
extern int FUN_003683b8(int);
extern int lmapGetSpawnIndex(void);
extern int FUN_003857c8(int);
/* Supplied declaration required: FUN_00398004. */
extern int FUN_003adc40(void);
/* Supplied declaration required: FUN_003ae3c4. */


void FUN_00239c24(void)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char *puVar10;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  
  temp_v3 = gameFlagsGetBlock();
  randRange(4);
  temp_v4 = lmapGetSpawnIndex();
  temp_v5 = FUN_003adc40();
  if (temp_v4 >= 0x65) {
    if (temp_v5 == 0) {
      FUN_002296b0(0);
      DAT_0060ff94 = 0;
      temp_v5 = FUN_00327540((int)*(float *)(temp_v3 + 0x15c4));
      if (temp_v5 != 0) {
        FUN_003273ac((int)*(float *)(temp_v3 + 0x15c4));
      }
      else {
        FUN_002edf08();
      }
      while (DAT_0060ff94 < 2) {
        FUN_002296b0(1);
        DAT_0060ff94 = 0;
        FUN_002edf08();
      }
      FUN_002c5468();
      FUN_00398004(1);
    }
  }
  else if (!(temp_v5 == 1 && temp_v4 == 0)) {
    FUN_002296b0(0);
    DAT_0060ff94 = 0;
    if (temp_v4 != 0) {
      temp_v5 = temp_v4 * 0x44;
      temp_v11 = *(int *)(temp_v4 * 0x44 + 0x5814c4);
      *(unsigned char *)(temp_v3 + 0xe04) = *(unsigned char *)(temp_v5 + 0x5814ca);
      *(unsigned char *)(temp_v3 + 0xe05) = *(unsigned char *)(temp_v5 + 0x5814cb);
      FUN_002296b0(1);
      temp_v10 = 0;
      if (*(unsigned char *)(temp_v3 + 0x7c5) != 0xff) {
        *(unsigned char *)(temp_v3 + 0x7c5) = 0xff;
      }
      if ('\0' < *(char *)(temp_v3 + 0xe05)) {
        do {
          temp_v6 = 0;
          if ('\0' < *(char *)(temp_v3 + 0xe04)) {
            temp_v8 = temp_v3 + temp_v10 * 0x78;
            do {
              temp_v12 = temp_v10 * 0xf + temp_v6;
              temp_v13 = temp_v8 + temp_v6 * 8;
              if (*(char *)(temp_v11 + temp_v12) != '\x01') {
                *(unsigned char *)(temp_v13 + 0x3c) = 2;
              }
              else {
                *(unsigned char *)(temp_v13 + 0x3c) = 1;
              }
              temp_v2 = *(char *)(temp_v11 + temp_v12);
              if (temp_v2 != '\x02') {
                temp_v12 = temp_v8 + temp_v6 * 8;
                if (temp_v2 != '\x03') {
                  *(unsigned char *)(temp_v12 + 0x43) = 0;
                }
                else {
                  *(unsigned char *)(temp_v12 + 0x43) = 2;
                  *(char *)(temp_v3 + 0xe08) = *(char *)(temp_v3 + 0xe08) + '\x01';
                }
              }
              else {
                *(unsigned char *)(temp_v8 + temp_v6 * 8 + 0x43) = 1;
                *(char *)(temp_v3 + 0xe08) = *(char *)(temp_v3 + 0xe08) + '\x01';
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < *(char *)(temp_v3 + 0xe04));
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < *(char *)(temp_v3 + 0xe05));
      }
      temp_v10 = (int)*(char *)(temp_v5 + 0x5814d0);
      *(char *)(temp_v3 + 0xe00) = *(char *)(temp_v5 + 0x5814d0);
      temp_v2 = *(char *)(temp_v5 + 0x5814d1);
      *(char *)(temp_v3 + 0xe01) = temp_v2;
      temp_v11 = temp_v10;
      if (0 < temp_v10) {
        temp_v11 = (int)temp_v2;
      }
      *(unsigned char *)(temp_v3 + 0xe02) = *(unsigned char *)(temp_v5 + 0x5814d2);
      *(unsigned char *)(temp_v3 + 0xe03) = *(unsigned char *)(temp_v5 + 0x5814d3);
      if (0 < temp_v11) {
        *(unsigned char *)(temp_v3 + temp_v2 * 0x78 + temp_v10 * 8 + 0x3e) = 1;
      }
      *(unsigned char *)(temp_v3 + *(char *)(temp_v3 + 0xe03) * 0x78 + *(char *)(temp_v3 + 0xe02) * 8 + 0x3f)
           = 1;
      if (*(short *)(temp_v5 + 0x5814d4) != 0) {
        *(char *)(temp_v3 + 0x3a) = (char)*(short *)(temp_v5 + 0x5814d4);
        *(char *)(temp_v3 + 0x3b) = (char)*(unsigned short *)(temp_v5 + 0x5814d6);
      }
      DAT_005f1604 = (unsigned int)*(short *)(temp_v5 + 0x5814c8);
      naviMainSetFlagsAndActivate(DAT_005f1604 & 0xff,0,0,0,0,0);
    }
    else {
      FUN_002edf08();
    }
    FUN_002c5468();
    FUN_00398004(1);
  }
  FUN_002c553c();
  FUN_00331efc();
  FUN_002c670c(0);
  temp_v17 = 0.0f;
  if (temp_v4 < 100) {
    temp_v3 = gameFlagsGetBlock();
    if ((*(char *)(temp_v3 + 0xe09) != '\0') &&
       (temp_v4 = gameFlagIsSet(*(unsigned int *)(temp_v3 + 0x1520)), temp_v4 == 0)) {
      temp_v4 = (short)*(char *)(temp_v3 + 0xe0b) * 700;
      temp_v3 = (short)*(char *)(temp_v3 + 0xe0a) * 700;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002de4d4(1,temp_v4,temp_v3);
    }
  }
  else {
    temp_v3 = FUN_003683b8((int)*(float *)(temp_v3 + 0x15c4));
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        FUN_002ef048();
      }
    }
    else {
      temp_v3 = gameFlagsGetBlock();
      temp_v4 = temp_v3 + *(char *)(temp_v3 + 0xe0b) * 0x78 + *(char *)(temp_v3 + 0xe0a) * 8;
      temp_v9 = (unsigned int)(*(char *)(temp_v4 + 0x34) == '\x01');
      if (*(char *)(temp_v4 + 0x44) == '\x01') {
        temp_v9 = temp_v9 | 2;
      }
      if (*(char *)(temp_v4 - 0x3c) == '\x01') {
        temp_v9 = temp_v9 | 4;
      }
      if (*(char *)(temp_v4 + 0xb4) == '\x01') {
        temp_v9 = temp_v9 | 8;
      }
      temp_v2 = *(char *)(temp_v9 + 0x5814a4);
      if (temp_v2 != '@') {
        if (temp_v2 == 'B') {
          temp_v17 = 180.0f;
        }
        else if (temp_v2 == 'A') {
          temp_v17 = 270.0f;
        }
        else if (temp_v2 == 'C') {
          temp_v17 = 90.0f;
        }
        else if (temp_v2 == '0') {
          temp_v17 = 45.0f;
        }
        else if (temp_v2 == '1') {
          temp_v17 = 315.0f;
        }
        else if (temp_v2 == '2') {
          temp_v17 = 225.0f;
        }
        else if (temp_v2 == '3') {
          temp_v17 = 135.0f;
        }
      }
      temp_v4 = *(char *)(temp_v3 + 0xe0a) * 700 + 0x15e;
      temp_v5 = *(char *)(temp_v3 + 0xe0b) * 700 + 0x15e;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001bc124(temp_v4,temp_v5);
      FUN_001bbf0c();
      temp_v4 = FUN_003857c8((int)*(float *)(temp_v3 + 0x15c4));
      if ((((*(char *)(temp_v3 + 0xe09) == '\0') || (temp_v5 = FUN_00262614(temp_v4), temp_v5 != 0)) ||
          (*(int *)(temp_v3 + 0x15d0) != 0)) || (temp_v3 = flagCategoryIsAvailable(temp_v4), temp_v3 != 0)) {
        FUN_003276f0(temp_v4 + 0x186,1);
      }
      else {
        FUN_003276f0(temp_v4 + 0x186,0);
        FUN_002ddea0();
      }
      FUN_00281b94((int)(short)(int)temp_v17);
    }
    temp_v3 = gameFlagsGetBlock();
    if (*(char *)(temp_v3 + 0x1664) != '\0') {
      temp_v4 = (short)*(char *)(temp_v3 + 0x1665) * 700 + 0x15e;
      temp_v3 = (short)*(char *)(temp_v3 + 0x1666) * 700 + 0x15e;
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_003ae3c4(temp_v4,temp_v3);
    }
  }
  temp_v3 = gameFlagsGetBlock();
  temp_v4 = lmapGetSpawnIndex();
  temp_v18 = 0x442f000043af0000;
  if (temp_v4 != 8) {
    DAT_0060ff88 = 0;
    temp_v5 = 0;
    temp_v4 = temp_v3;
    do {
      temp_v11 = 1;
      if (temp_v11 < *(char *)(temp_v3 + 0xe05) - 1) {
        do {
          temp_v9 = 1;
          if (*(char *)(temp_v3 + 0xe04) - 1 >= 2) {
            temp_v10 = temp_v4 + temp_v11 * 0x78;
            do {
              temp_v6 = temp_v10 + temp_v9 * 8;
              temp_v14 = *(char *)(temp_v6 + 0x3e) != '\x01';
              temp_v2 = '\x01';
              if (temp_v14) {
                temp_v2 = *(char *)(temp_v6 + 0x3f);
              }
              if ((temp_v14 && temp_v2 != '\x01') && (*(char *)(temp_v6 + 0x3c) == '\x02')) {
                temp_v7 = (unsigned int)*(unsigned char *)(temp_v3 + 0x1664);
                temp_v14 = temp_v7 == 1;
                if (temp_v14) {
                  temp_v7 = (unsigned int)*(char *)(temp_v3 + 0x1665);
                }
                temp_v15 = temp_v14 && temp_v7 == temp_v9;
                if (temp_v14 && temp_v7 == temp_v9) {
                  temp_v15 = *(char *)(temp_v3 + 0x1666) == temp_v11;
                }
                if ((!temp_v15) && (temp_v7 = randRange(100), temp_v7 < 0x28)) {
                  temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v6 = DAT_0060ff88 * 0xc;
                  (&DAT_0060fec8)[temp_v6] = 0x18;
                  *(unsigned char *)(temp_v6 + 0x60fec9) = 0;
                  temp_v19 = (float)((unsigned long long)temp_v18 >> 0x20);
                  temp_v0 = (short)(int)((float)temp_v18 + temp_v16 * temp_v19);
                  *(short *)(temp_v6 + 0x60feca) = temp_v0;
                  temp_v1 = (short)(int)((float)temp_v18 + temp_v17 * temp_v19);
                  *(unsigned short *)(temp_v6 + 0x60fecc) = 0;
                  *(short *)(temp_v6 + 0x60fece) = temp_v1;
                  temp_v6 = 0;
                  if (temp_v6 < DAT_0060ff88) {
                    do {
                      temp_v8 = temp_v6 * 0xc;
                      puVar10 = &DAT_0060fec8 + temp_v8;
                      temp_v14 = *(short *)(temp_v8 + 0x60feca) == temp_v0;
                      if (temp_v14) {
                        puVar10 = (unsigned char *)(int)*(short *)(temp_v8 + 0x60fece);
                      }
                      if (temp_v14 && puVar10 == (unsigned char *)(int)temp_v1) goto LAB_0023a490;
                      temp_v6 = temp_v6 + 1;
                    } while (temp_v6 < DAT_0060ff88);
                  }
                  DAT_0060ff88 = DAT_0060ff88 + 1;
                  if (DAT_0060ff88 >= 0x10) goto LAB_0023a4d8;
                }
              }
LAB_0023a490:
              temp_v9 = temp_v9 + 2;
            } while ((int)temp_v9 < *(char *)(temp_v3 + 0xe04) - 1);
          }
          temp_v11 = temp_v11 + 2;
        } while (temp_v11 < *(char *)(temp_v3 + 0xe05) - 1);
      }
    } while ((DAT_0060ff88 < 5) && (temp_v5 = temp_v5 + 1, temp_v5 < 3));
  }
  else {
    temp_v5 = 1;
    DAT_0060ff88 = 0;
    temp_v4 = temp_v3;
    if (*(char *)(temp_v3 + 0xe05) - 1 >= 2) {
      do {
        temp_v11 = 2;
        if (*(char *)(temp_v3 + 0xe04) - 1 >= 3) {
          temp_v10 = temp_v4 + temp_v5 * 0x78;
          do {
            temp_v6 = temp_v10 + temp_v11 * 8;
            temp_v14 = *(char *)(temp_v6 + 0x3e) != '\x01';
            temp_v2 = '\x01';
            if (temp_v14) {
              temp_v2 = *(char *)(temp_v6 + 0x3f);
            }
            if (((temp_v14 && temp_v2 != '\x01') && (*(char *)(temp_v6 + 0x3c) == '\x02')) &&
               (temp_v9 = randRange(100), temp_v9 < 0x28)) {
              temp_v17 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v6 = DAT_0060ff88 * 0xc;
              (&DAT_0060fec8)[temp_v6] = 0x18;
              temp_v19 = (float)((unsigned long long)temp_v18 >> 0x20);
              *(unsigned char *)(temp_v6 + 0x60fec9) = 0;
              *(short *)(temp_v6 + 0x60feca) = (short)(int)((float)temp_v18 + temp_v17 * temp_v19);
              *(unsigned short *)(temp_v6 + 0x60fecc) = 0;
              *(short *)(temp_v6 + 0x60fece) = (short)(int)((float)temp_v18 + temp_v16 * temp_v19);
              DAT_0060ff88 = DAT_0060ff88 + 1;
              if (DAT_0060ff88 >= 0x10) goto LAB_0023a4d8;
            }
            temp_v11 = temp_v11 + 2;
          } while (temp_v11 < *(char *)(temp_v3 + 0xe04) - 1);
        }
        temp_v5 = temp_v5 + 2;
      } while (temp_v5 < *(char *)(temp_v3 + 0xe05) - 1);
    }
  }
LAB_0023a4d8:
  DAT_0060ff9c = 1;
  temp_v3 = gameFlagsGetBlock();
  temp_v4 = 0;
  if (temp_v4 < *(char *)(temp_v3 + 0xe05)) {
    do {
      temp_v5 = (int)*(char *)(temp_v3 + 0xe04);
      if (0 < *(char *)(temp_v3 + 0xe04)) {
        do {
          temp_v5 = temp_v5 - 1;
        } while (temp_v5 != 0);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(char *)(temp_v3 + 0xe05));
  }
  return;
}

} /* extern "C" */
