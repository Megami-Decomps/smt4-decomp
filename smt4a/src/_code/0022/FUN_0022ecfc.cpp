/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ecfc` (_code @ 0x22ecfc, 0xa74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int FUN_001677c0(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0023dedc(...);
int FUN_00344cd0(...);
int FUN_0035ae58(...);
int FUN_0037ce80(...);
int FUN_003defe0(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern unsigned char LAB_0022f064; /* 0x22f064 */
extern unsigned char LAB_0022f584; /* 0x22f584 */
extern int DAT_0057f28c; /* 0x57f28c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00156850(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0023dedc. */
extern int FUN_00284140(int);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_00344cd0. */
extern int FUN_00348ed0(int);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: FUN_0037ce80. */
extern int FUN_003deeb4(unsigned int);
extern int FUN_003deecc(unsigned int);
/* Supplied declaration required: FUN_003defe0. */
extern int FUN_00418584(unsigned int);
extern int FUN_004186f4(unsigned int);


void FUN_0022ecfc(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  unsigned char temp_v16 [84];
  
  temp_v0 = DAT_0057f28c;
  temp_v1 = FUN_001654d8(DAT_0057f28c + 0x34);
  temp_v2 = FUN_001654e4(temp_v0 + 0x34);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    temp_v3 = temp_v0 + 0x948;
    temp_v12 = temp_v0 + 0xa10;
  }
  else {
    temp_v3 = temp_v0 + 0x9ac;
    temp_v12 = temp_v0 + 0xad6;
  }
  FUN_001677c0();
  FUN_00164b5c(2,0x1e,8,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    FUN_00164b5c(2,0x1e,9,temp_v1,temp_v2,0x65);
  }
  else {
    FUN_00164b5c(2,0x1e,10,temp_v1,temp_v2,0x65);
  }
  FUN_00164b5c(2,0x1e,0xb,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    FUN_001835b4(2,0x1e,0x82,temp_v1,temp_v2,0x6a);
  }
  else {
    FUN_001835b4(2,0x1e,0x83,temp_v1,temp_v2,0x6a);
  }
  temp_v10 = 0;
  temp_v4 = FUN_00348ed0(temp_v3);
  if (0 < temp_v4) {
    do {
      if ((*(int *)(temp_v0 + 4) != 2) || (temp_v4 = FUN_002a4894(temp_v3), temp_v4 != temp_v10)) {
        temp_v4 = FUN_002a4860(temp_v3);
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v4 + temp_v10) * 2);
        temp_v4 = FUN_001834a4(0x1e,temp_v10 + 0x9e);
        if (temp_v11 != 0) {
          temp_v5 = FUN_001834a4(0x1e,0x9c);
          temp_v6 = temp_v11;
          FUN_0023dedc(temp_v11,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f,0,0);
          temp_v5 = FUN_001834a4(0x1e,0x9b);
          temp_v7 = FUN_00156850(temp_v11,0);
          FUN_00100388(temp_v16,&LAB_0022f064,temp_v7);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,temp_v6,temp_v16,(int)*(short *)(temp_v4 + 8));
          temp_v5 = FUN_001834a4(0x1e,0x9a);
          FUN_0037ce80(temp_v11,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f);
          temp_v5 = FUN_001834a4(0x1e,0x9d);
          temp_v8 = FUN_003deeb4(temp_v11);
          if (temp_v8 != 0) {
            FUN_00164b5c(2,0x1e,0xf,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                         (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
          }
          else {
            temp_v8 = FUN_004186f4(temp_v11);
            if ((temp_v8 == 0) && (temp_v6 = temp_v11, FUN_003defe0(), temp_v6 != 0)) {
              FUN_00164b5c(2,0x1e,0x13,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
            }
            else {
              temp_v8 = FUN_003deecc(temp_v11);
              if (temp_v8 != 0) {
                FUN_00164b5c(2,0x1e,0x10,
                             (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                             (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74)
                ;
              }
            }
          }
        }
      }
      temp_v10 = temp_v10 + 1;
      temp_v4 = FUN_00348ed0(temp_v3);
    } while (temp_v10 < temp_v4);
  }
  temp_v4 = FUN_00348ed0(temp_v3);
  if ((0 < temp_v4) &&
     (((temp_v4 = *(int *)(temp_v0 + 4), temp_v4 == 2 || temp_v4 == 6 || (temp_v4 == 7 || temp_v4 == 8)) ||
      (temp_v4 == 9 || temp_v4 == 10)))) {
    temp_v4 = FUN_002a4894(temp_v3);
    temp_v10 = FUN_001834a4(0x1e,temp_v4 + 0xb5);
    temp_v5 = FUN_002a4860(temp_v3);
    temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v5 + temp_v4) * 2);
    FUN_001677c0();
    FUN_00164b5c(2,0x1e,0x11,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x97);
    FUN_001677c0();
    FUN_001835b4(2,0x1e,0xab,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x9c);
    temp_v12 = FUN_00284140((int)*(short *)(temp_v0 + temp_v4 * 2 + 0xd28));
    temp_v13 = temp_v12 == 1;
    temp_v14 = temp_v12 == 2;
    temp_v15 = temp_v12 == 6;
    temp_v12 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v4 = *(short *)(temp_v10 + 8) + temp_v1;
    if (!((temp_v13 || temp_v14) || temp_v15)) {
      FUN_001835b4(2,0x1e,0xca,temp_v4,temp_v12,0x9c);
    }
    else {
      FUN_001835b4(2,0x1e,0xce,temp_v4,temp_v12,0x9c);
    }
    temp_v12 = *(int *)(temp_v0 + 0x10) % 0x28;
    if (temp_v12 >= 0x14) {
      temp_v12 = 0x28 - temp_v12;
    }
    VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001677c0(temp_v12);
    temp_v12 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v4 = *(short *)(temp_v10 + 8) + temp_v1;
    if ((temp_v13 || temp_v14) || temp_v15) {
      FUN_001835b4(2,0x1e,0xcf,temp_v4,temp_v12,0x9c);
      FUN_001677c0();
      FUN_001835b4(2,0x1e,0xcc,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
      FUN_001835b4(2,0x1e,0xcd,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
    }
    else {
      FUN_001835b4(2,0x1e,0xcb,temp_v4,temp_v12,0x9c);
      FUN_001677c0();
      FUN_001835b4(2,0x1e,0xac,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
      FUN_001835b4(2,0x1e,0xad,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
    }
    temp_v4 = FUN_001834a4(0x1e,0xac);
    temp_v5 = FUN_001654d8(temp_v0 + 0x14c);
    temp_v8 = FUN_001654e4(temp_v0 + 0x14c);
    temp_v12 = DAT_0059dbb4;
    piVar12 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v9 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 3;
    if (*(char *)(temp_v12 + 0x1330) != '\0' || temp_v9 != 3) {
      (**(romwright_code **)(temp_v12 + 0x1334))();
      *(unsigned char *)(temp_v12 + 0x1330) = 0;
    }
    FUN_0035ae58((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                 (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1],1,temp_v8);
    FUN_001835b4(2,0x1e,0xae,(int)*(short *)(temp_v10 + 8) + temp_v5 + temp_v1,
                 temp_v8 + temp_v2 + (int)*(short *)(temp_v10 + 10),0xa6);
    temp_v12 = DAT_0059dbb4;
    piVar12 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v4 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 0;
    if (*(char *)(temp_v12 + 0x1330) != '\0' || temp_v4 != 0) {
      (**(romwright_code **)(temp_v12 + 0x1334))();
      *(unsigned char *)(temp_v12 + 0x1330) = 0;
    }
    temp_v12 = FUN_001834a4(0x1e,0xb3);
    temp_v6 = temp_v11;
    FUN_0023dedc(temp_v11,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xab,1,
                 (temp_v13 || temp_v14) || temp_v15);
    temp_v12 = FUN_001834a4(0x1e,0xb2);
    temp_v7 = FUN_00156850(temp_v6,0);
    FUN_00100388(temp_v16,&LAB_0022f584,temp_v7);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v11,temp_v16,(int)*(short *)(temp_v12 + 8));
    temp_v12 = FUN_00418584(temp_v6);
    temp_v4 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v5 = *(short *)(temp_v10 + 8) + temp_v1;
    if (temp_v12 != 0) {
      FUN_001835b4(2,0x1e,0xb0,temp_v5,temp_v4,0xab);
    }
    else {
      FUN_001835b4(2,0x1e,0xaf,temp_v5,temp_v4,0xab);
    }
    temp_v12 = FUN_001834a4(0x1e,0xb1);
    FUN_0037ce80(temp_v6,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    temp_v12 = FUN_001834a4(0x1e,0xb4);
    temp_v4 = FUN_003deeb4(temp_v6);
    if (temp_v4 != 0) {
      FUN_00164b5c(2,0x1e,0xf,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    }
    else {
      temp_v4 = FUN_004186f4(temp_v6);
      temp_v11 = temp_v6;
      if ((temp_v4 == 0) && (FUN_003defe0(), temp_v6 != 0)) {
        FUN_00164b5c(2,0x1e,0x13,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                     (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
      }
      else {
        temp_v4 = FUN_003deecc(temp_v11);
        if (temp_v4 != 0) {
          FUN_00164b5c(2,0x1e,0x10,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1
                       ,(int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
        }
      }
    }
  }
  FUN_00344cd0(temp_v3,temp_v1,temp_v2,0x1e,0x89,0x8a,0x8b,0x85,0x87,0x86,0x88,
               (int)*(short *)(temp_v0 + 0xd42),(int)*(short *)(temp_v0 + 0xd3e),
               (int)*(short *)(temp_v0 + 0xd40),0x97,0);
  FUN_001677c0();
  return;
}

} /* extern "C" */
