/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295e54` (_code @ 0x295e54, 0x5ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [68], unsigned char *);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001cd3ec(void);
int FUN_00295d40(void);
int FUN_00312de8(void);
int FUN_00327678(void);
int FUN_00353cd4(void);
int FUN_0037976c(void);
int FUN_00385964(void);
int FUN_003fd784(...);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040a908(int, int);
int FUN_0040a918(...);
int moriModelContentCopyBody(void);
int FUN_0040aad4(int, int);
int FUN_0040ace8(...);
int FUN_0046c35c(...);
int VectorSignedToFloat(...);

extern unsigned char LAB_00296450; /* 0x296450 */
extern unsigned char LAB_00296470; /* 0x296470 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int g_aocSystem; /* 0x570280 */
extern int *DAT_00581280; /* 0x581280 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_00295d40. */
/* Supplied declaration required: FUN_00312de8. */
/* Supplied declaration required: FUN_00327678. */
extern unsigned int asdVramBGetFreeBytes(void);
/* Supplied declaration required: FUN_00353cd4. */
/* Supplied declaration required: FUN_0037976c. */
/* Supplied declaration required: FUN_00385964. */
extern int flagPairCondition(int, int);
extern int FUN_003b564c(void);
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: moriModelContentCopyBody. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(int);
extern int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0046c35c. */


unsigned int FUN_00295e54(int param_1,int param_2,int param_3)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 18 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  short *psVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  short *psVar11;
  int *piVar12;
  int *piVar13;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  int temp_v11;
  unsigned char temp_v12 [68];
  
  piVar12 = DAT_00581280;
  temp_v5 = *DAT_00581280;
  if (temp_v5 == 0) {
    if (param_3 != 0) {
      *DAT_00581280 = 1;
      piVar12[1] = 0;
      return 0;
    }
    temp_v5 = FUN_003b564c();
    piVar12 = (int *)0x0;
    if (0 < temp_v5) {
      do {
        piVar13 = piVar12;
        FUN_0037976c();
        if (((*piVar13 != 999999) && (*piVar13 == param_1)) && (piVar13[1] == param_2)) {
          piVar13 = (int *)((int)piVar12 + 1);
          piVar12 = piVar13;
          for (; (int)piVar13 < 9999; piVar13 = (int *)((int)piVar13 + 1)) {
            piVar4 = piVar12;
            FUN_0037976c();
            if (*piVar4 == 0xf423e) break;
            VectorSignedToFloat(piVar4[1],(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*piVar4,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(piVar4[2],(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00353cd4();
            piVar12 = (int *)((int)piVar12 + 1);
          }
          FUN_00295d40();
        }
        piVar12 = (int *)((int)piVar12 + 1);
      } while ((int)piVar12 < temp_v5);
    }
    piVar12 = DAT_00581280;
    DAT_00581280[1] = 0;
    piVar12[2] = 0;
    *piVar12 = *piVar12 + 1;
    return 0;
  }
  if (temp_v5 == 1) {
    temp_v5 = FUN_00385964();
    for (psVar11 = (short *)DAT_00581280[1]; (int)psVar11 < temp_v5;
        psVar11 = (short *)((int)psVar11 + 1)) {
      psVar5 = psVar11;
      FUN_00327678();
      temp_v3 = g_aocSystem;
      FUN_0046c35c(g_aocSystem,0x24);
      piVar12 = DAT_00581280;
      if (temp_v3 != 0) {
        if (*psVar5 != -1) goto LAB_00296008;
        temp_v3 = g_aocSystem;
        FUN_0046c35c(g_aocSystem,0x24,0);
        piVar12 = DAT_00581280;
        if (temp_v5 - temp_v3 <= (int)psVar11) {
          *DAT_00581280 = 0;
          piVar12[1] = -1;
          return 1;
        }
      }
      else {
        if (*psVar5 == -1) {
          *DAT_00581280 = 0;
          piVar12[1] = -1;
          return 1;
        }
LAB_00296008:
        if (*psVar5 == param_1) {
          temp_v3 = (int)psVar5[1];
          temp_v10 = temp_v3 != param_2;
          if (temp_v10) {
            temp_v3 = (int)*(char *)((int)psVar5 + 0x37);
          }
          if (((!temp_v10 || temp_v3 == 0x13) || (temp_v3 == 0x17 || temp_v3 == 0x18)) &&
             (temp_v3 = flagPairCondition((int)psVar5[2],(int)psVar5[3]), temp_v3 != 0)) {
            if (param_3 == 0) {
              DAT_00581280[1] = (int)psVar11;
              break;
            }
            temp_v3 = 0;
            while (((char)DAT_00581280[temp_v3 * 0xf + 3] == '\0' ||
                   ((short *)(int)(short)DAT_00581280[temp_v3 * 0xf + 5] != psVar11))) {
              temp_v3 = temp_v3 + 1;
              if (temp_v3 >= 0x40) {
                DAT_00581280[1] = (int)psVar11;
                goto LAB_002960c8;
              }
            }
          }
        }
      }
    }
LAB_002960c8:
    piVar12 = DAT_00581280;
    temp_v3 = DAT_00581280[2];
    temp_v5 = DAT_00581280[1];
    FUN_00327678();
    *(unsigned short *)(piVar12 + temp_v3 * 0xf + 0xd) = *(unsigned short *)(temp_v5 + 4);
    *(unsigned short *)((int)piVar12 + temp_v3 * 0x3c + 0x36) = *(unsigned short *)(temp_v5 + 6);
    *(unsigned char *)((int)piVar12 + temp_v3 * 0x3c + 0xf) = 0;
    *(short *)(piVar12 + temp_v3 * 0xf + 5) = (short)DAT_00581280[1];
    *(short *)((int)piVar12 + temp_v3 * 0x3c + 0x12) = (short)*(char *)(temp_v5 + 0x37);
    FUN_00100388(temp_v12,&LAB_00296450);
    if (param_1 >= 0x65) {
      temp_v1 = *(short *)((int)piVar12 + temp_v3 * 0x3c + 0x12);
      temp_v8 = 0;
      temp_v7 = DAT_00581280[2];
      if ((int)temp_v7 >= 1) {
        temp_v6 = temp_v7 & 1;
        temp_v2 = temp_v6;
      }
      else {
        temp_v6 = temp_v7;
        temp_v2 = 0;
      }
      if (0 < (int)temp_v6) {
        do {
          if (*(short *)((int)DAT_00581280 + temp_v8 * 0x3c + 0x12) == temp_v1) goto LAB_002961a0;
          temp_v8 = temp_v8 + 1;
        } while ((int)temp_v8 < (int)temp_v2);
      }
      while( 1 ) {
        temp_v8 = temp_v2;
        if ((int)temp_v7 <= (int)temp_v8) goto LAB_002961f8;
        if (*(short *)((int)DAT_00581280 + temp_v8 * 0x3c + 0x12) == temp_v1) goto LAB_002961a0;
        if (*(short *)((int)DAT_00581280 + temp_v8 * 0x3c + 0x4e) == temp_v1) break;
        temp_v2 = temp_v8 + 2;
      }
      temp_v8 = temp_v8 + 1;
LAB_002961a0:
      if (temp_v8 != 0xffffffff) {
        temp_v4 = 0x20;
        FUN_00178b04(0x20,&LAB_00296470,0x115);
        temp_v5 = 0;
        if (temp_v4 != 0) {
          temp_v5 = FUN_0040ac08();
        }
        piVar12[temp_v3 * 0xf + 0x10] = temp_v5;
        moriModelContentCopyBody();
        *(unsigned char *)(piVar12 + temp_v3 * 0xf + 0xe) = 1;
      }
      else {
LAB_002961f8:
        temp_v4 = 0x20;
        FUN_00178b04(0x20,&LAB_00296470,0x120);
        temp_v5 = 0;
        if (temp_v4 != 0) {
          temp_v5 = FUN_0040ac08();
        }
        piVar12[temp_v3 * 0xf + 0x10] = temp_v5;
        FUN_001cd3ec();
        FUN_0040a908(piVar12[temp_v3 * 0xf + 0x10],0x10000);
        FUN_0040a918(piVar12[temp_v3 * 0xf + 0x10],0x30000);
        *(unsigned char *)(piVar12 + temp_v3 * 0xf + 0xe) = 0;
      }
    }
    else {
      temp_v4 = 0x20;
      FUN_00178b04(0x20,&LAB_00296470,300);
      temp_v5 = 0;
      if (temp_v4 != 0) {
        temp_v5 = FUN_0040ac08();
      }
      piVar12[temp_v3 * 0xf + 0x10] = temp_v5;
      FUN_001cd3ec();
      FUN_0040a908(piVar12[temp_v3 * 0xf + 0x10],0x10000);
      if ((!(param_1 == 3 && param_2 == 9)) && (temp_v8 = asdVramBGetFreeBytes(), 0x1f000 >= temp_v8)) {
        temp_v5 = piVar12[temp_v3 * 0xf + 0x10];
        temp_v9 = 0x30000;
      }
      else {
        temp_v5 = piVar12[temp_v3 * 0xf + 0x10];
        temp_v9 = 0x20000;
      }
      FUN_0040a918(temp_v5,temp_v9);
    }
    *DAT_00581280 = *DAT_00581280 + 1;
    return 0;
  }
  if (temp_v5 != 2) {
    return 0;
  }
  temp_v5 = DAT_00581280[2];
  piVar13 = DAT_00581280 + temp_v5 * 0xf + 3;
  if (param_1 >= 0x65) {
    if ((char)DAT_00581280[temp_v5 * 0xf + 0xe] == '\0') {
      temp_v3 = FUN_0040ab8c(DAT_00581280[temp_v5 * 0xf + 0x10]);
      if (temp_v3 == 0) {
        return 0;
      }
    }
  }
  else {
    temp_v3 = FUN_0040ab8c(DAT_00581280[temp_v5 * 0xf + 0x10]);
    if (temp_v3 == 0) {
      return 0;
    }
  }
  FUN_0040aad4(piVar12[temp_v5 * 0xf + 0x10],0);
  temp_v9 = *(unsigned int *)(piVar12[temp_v5 * 0xf + 0x10] + 4);
  FUN_003fe86c(temp_v9,0,2);
  FUN_0040ace8(DAT_0056fcc0,temp_v9);
  temp_v3 = DAT_00581280[1];
  FUN_00327678();
  FUN_00385964();
  temp_v0 = *(char *)(temp_v3 + 0x37);
  if ((temp_v0 == '\x13' || temp_v0 == '\x17') || temp_v0 == '\x18') {
    FUN_003fd784(*(unsigned int *)(piVar12[temp_v5 * 0xf + 0x10] + 4));
  }
  *(unsigned char *)piVar13 = 1;
  temp_v1 = *(short *)(temp_v3 + 0x2c);
  *(short *)(piVar12 + temp_v5 * 0xf + 4) = temp_v1;
  *(short *)(piVar12 + temp_v5 * 0xf + 5) = (short)DAT_00581280[1];
  temp_v4 = (int)*(char *)(temp_v3 + 0x36);
  *(short *)((int)piVar12 + temp_v5 * 0x3c + 0x16) = (short)*(char *)(temp_v3 + 0x36);
  piVar12[temp_v5 * 0xf + 6] = 0x40800000;
  temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x2e),(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar12[temp_v5 * 0xf + 7] = temp_v11;
  temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x30),(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar12[temp_v5 * 0xf + 8] = temp_v11;
  temp_v11 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x32),(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar12[temp_v5 * 0xf + 9] = temp_v11;
  temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar12[temp_v5 * 0xf + 10] = temp_v3;
  piVar12[temp_v5 * 0xf + 0xb] = 0;
  piVar12[temp_v5 * 0xf + 0x11] = 0;
  if (temp_v1 == 1) {
    FUN_00312de8();
    piVar12[temp_v5 * 0xf + 0xf] = temp_v4;
  }
  piVar12 = DAT_00581280;
  DAT_00581280[2] = DAT_00581280[2] + 1;
  piVar12[1] = piVar12[1] + 1;
  *piVar12 = 1;
  return 0;
}

} /* extern "C" */
