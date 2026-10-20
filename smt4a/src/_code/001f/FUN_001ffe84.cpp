/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ffe84` (_code @ 0x1ffe84, 0x94c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int sysPlaySe(...);
int FUN_0019de98(...);
int FUN_002277d8(void);
int FUN_00228b04(...);
int FUN_002b5c88(void);
int FUN_002e1b3c(...);
int FUN_0031f208(...);
int FUN_0031f27c(...);
int FUN_003250ec(...);
int FUN_003343f0(...);
int FUN_003450d4(...);
int FUN_003da8f4(...);

int FUN_001517b4(...);
int FUN_001641b4(...);
int FUN_001ab854(void);
int FUN_0020b660(...);
int FUN_0020d700(void);
int FUN_0021b274(...);
int FUN_0022e774(void);
int FUN_0023b45c(...);
int FUN_0028b088(...);
int FUN_002a7324(...);
int FUN_002adce8(...);
int FUN_002c7e24(void);
int FUN_002cb278(int, int);
int FUN_0031f718(...);
int FUN_00334214(...);
int FUN_003344b4(...);
int FUN_0035dbd4(...);
int FUN_003d386c(int);
int FUN_003df57c(...);
int FUN_004bcbb4(...);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001641c4. */
extern unsigned short FUN_00167f08(void);
/* Supplied declaration required: sysPlaySe. */
extern int FUN_001801a4(void);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001ab854. */
/* Supplied declaration required: FUN_0020b660. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_002277d8. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022a030(int, int);
extern int FUN_0022e714(void);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_002684d0(int, int);
/* Supplied declaration required: FUN_0028b088. */
extern int FUN_002a4860(int);
extern unsigned int FUN_002a4878(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002a7410(void);
/* Supplied declaration required: FUN_002adce8. */
/* Supplied declaration required: FUN_002b5c88. */
extern int FUN_002c2c68(int);
/* Supplied declaration required: FUN_002c7e24. */
/* Supplied declaration required: FUN_002cb278. */
/* Supplied declaration required: FUN_002e1b3c. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_003250ec. */
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_003450d4. */
extern int FUN_00348ed0(int);
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035dbd4. */
/* Supplied declaration required: FUN_003d386c. */
/* Supplied declaration required: FUN_003da8f4. */
/* Supplied declaration required: FUN_003df57c. */
/* Supplied declaration required: FUN_004bcbb4. */


void FUN_001ffe84(void)

{
/* irregular: 33 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar11;
  int *piVar12;
  char temp_v9 [8];
  
  temp_v8 = DAT_0057f108;
  if (*(int *)(DAT_0057f108 + 0x20) == 0) {
    temp_v4 = FUN_0023b3d0();
    temp_v3 = DAT_0057f108;
    if (temp_v4 == 0) {
      return;
    }
    temp_v4 = FUN_002a4860(DAT_0057f108 + 0x1ec);
    temp_v5 = FUN_002a4894(temp_v3 + 0x1ec);
    temp_v3 = temp_v3 + (temp_v5 + temp_v4) * 8;
    if (*(int *)(temp_v3 + 0x1b74) < 0) {
      temp_v3 = FUN_003df57c(*(unsigned int *)(temp_v3 + 0x1b70),1);
    }
    else {
      temp_v7 = FUN_001ab854();
      temp_v3 = FUN_004bcbb4(temp_v7,*(unsigned int *)(temp_v3 + 0x1b70));
    }
    FUN_003344b4(0,-temp_v3);
    temp_v3 = FUN_002a4860(temp_v8 + 0x1ec);
    temp_v4 = FUN_002a4894(temp_v8 + 0x1ec);
    if (DAT_0057f108 != 0) {
      *(int *)(DAT_0057f108 + 0xbc) = temp_v3 + temp_v4;
    }
    FUN_002cb278(temp_v8 + 0x1ec,1);
    *(int *)(temp_v8 + 0x20) = *(int *)(temp_v8 + 0x20) + 1;
    return;
  }
  if (*(int *)(DAT_0057f108 + 0x20) != 1) {
    return;
  }
  temp_v3 = FUN_002c2c68(DAT_0057f108 + 0x1ec);
  if (temp_v3 < 1) {
    temp_v3 = 1;
    FUN_001517b4();
    if (temp_v3 == 0) {
      return;
    }
    FUN_002adce8(temp_v8 + 0x1ec,1);
    FUN_0022e774();
    FUN_0035dbd4(0);
    FUN_0028b088(0);
    FUN_0021b274(3,0xffffffff,0);
    *(unsigned int *)(temp_v8 + 0x24) = 6;
    FUN_0020b660(5);
    if (*(char *)(temp_v8 + 0x32a8) != '\0') {
      *(unsigned char *)(temp_v8 + 0xa4) = 1;
      FUN_0020d700();
      *(unsigned char *)(temp_v8 + 0x32a8) = 0;
    }
    FUN_001641b4(0x100020f);
    return;
  }
  FUN_003d386c(0);
  temp_v3 = FUN_002a4860(temp_v8 + 0x1ec);
  temp_v4 = FUN_002a4894(temp_v8 + 0x1ec);
  temp_v3 = temp_v3 + temp_v4;
  temp_v0 = 0;
  if ((*(char *)(temp_v8 + 0x24d) != '\0') || (*(char *)(temp_v8 + 0x24c) != '\0')) {
    temp_v0 = 1;
    psVar6 = (short *)FUN_002c7e24();
    temp_v4 = *(int *)(temp_v8 + temp_v3 * 8 + 0x1b74);
    if (*psVar6 < 0) {
      if (-1 < temp_v4) {
        FUN_0023b45c(0);
      }
    }
    else if ((temp_v4 < 0) ||
            (temp_v4 = FUN_001ab854(), (unsigned int)*(unsigned short *)(temp_v4 + 0x62) != (int)*psVar6)) {
      FUN_0023b45c(0);
    }
  }
  else {
    temp_v5 = FUN_0022e714();
    temp_v4 = DAT_0057f108;
    if (temp_v5 == 0) {
      temp_v5 = FUN_002a4860(DAT_0057f108 + 0x1ec);
      temp_v6 = FUN_002a4894(temp_v4 + 0x1ec);
      temp_v4 = temp_v4 + (temp_v6 + temp_v5) * 8;
      if (*(int *)(temp_v4 + 0x1b74) < 0) {
        temp_v4 = FUN_003df57c(*(unsigned int *)(temp_v4 + 0x1b70),1);
      }
      else {
        temp_v7 = FUN_001ab854();
        temp_v4 = FUN_004bcbb4(temp_v7,*(unsigned int *)(temp_v4 + 0x1b70));
      }
      FUN_003344b4(0,-temp_v4);
      if (DAT_0057f108 != 0) {
        *(int *)(DAT_0057f108 + 0xbc) = temp_v3;
      }
      if (*(int *)(temp_v8 + temp_v3 * 8 + 0x1b74) < 0) {
        FUN_0031f718(0xffffffff,0);
        FUN_002a7324(1);
      }
      else {
        temp_v7 = FUN_001ab854();
        FUN_00334214(temp_v7,0,0);
        FUN_002a7324(1);
      }
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 != 0) {
      FUN_002c7e24();
      FUN_002adce8(temp_v8 + 0x1ec,1);
      temp_v4 = 0;
      temp_v3 = FUN_00348ed0(temp_v8 + 0x1ec);
      if (0 < temp_v3) {
        do {
          FUN_001641c4();
          temp_v3 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v8 + temp_v3 + 0x1b3e) = 0xffff;
          temp_v3 = FUN_00348ed0(temp_v8 + 0x1ec);
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = FUN_0035db94();
      if (temp_v3 < 0) {
        temp_v7 = 4;
      }
      else {
        temp_v3 = FUN_0035db94();
        if (temp_v3 < 1) {
          *(unsigned int *)(temp_v8 + 0x24) = 0x18;
          FUN_0020b660(5);
          return;
        }
        temp_v7 = 3;
      }
      FUN_0021b274(temp_v7,0xffffffff,0);
      *(unsigned int *)(temp_v8 + 0x24) = 0x18;
      FUN_0020b660(5);
      return;
    }
  }
  temp_v9[0] = '\0';
  temp_v7 = FUN_001834a4(0x14,0x56d);
  temp_v4 = temp_v8 + 0x1ec;
  FUN_003450d4(temp_v4,temp_v7,temp_v8 + 0x1b3e,(int)*(short *)(temp_v8 + 0x1b34),
               (int)*(short *)(temp_v8 + 0x1b36),(int)*(short *)(temp_v8 + 0x1b38),temp_v9,0,1);
  if (temp_v4 != 0) {
    temp_v7 = FUN_002a4878(temp_v8 + 0x40);
    FUN_003da8f4((int)*(char *)(temp_v8 + 0xa4),temp_v7);
    FUN_0028b088();
    return;
  }
  temp_v4 = temp_v8 + 0x1ec;
  FUN_00228b04(temp_v4,1);
  if (temp_v4 != 0) {
    temp_v7 = FUN_002a4878(temp_v8 + 0x40);
    FUN_003da8f4((int)*(char *)(temp_v8 + 0xa4),temp_v7);
    FUN_0028b088();
    return;
  }
  temp_v4 = 0;
  FUN_001517b4(0,1);
  temp_v7 = 0x100020e;
  if ((!(temp_v4 == 0 && temp_v9[0] == '\0')) && (temp_v4 = FUN_0022e714(), temp_v4 != 0)) {
    temp_v4 = temp_v8 + temp_v3 * 8;
    piVar12 = (int *)(temp_v4 + 0x1b74);
    piVar11 = (int *)(temp_v4 + 0x1b70);
    temp_v3 = FUN_002684d0(*piVar11,(int)(short)*piVar12);
    if ((temp_v3 != 0) && (temp_v3 = FUN_0022a030(*piVar12,*piVar11), temp_v3 != 0)) {
      temp_v0 = 1;
      if (*(int *)(temp_v4 + 0x1b74) < 0) {
        temp_v3 = FUN_001801a4();
        if ((*(unsigned short *)(temp_v3 + 0x5e) & 2) != 0) {
          temp_v7 = 0x100020f;
          FUN_001641b4(temp_v7);
          return;
        }
      }
      else {
        temp_v3 = FUN_001ab854();
        if (((temp_v3 == 0) || ((*(unsigned short *)(temp_v3 + 0x60) & 2) != 0)) ||
           ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) != 0)) {
          temp_v0 = 0;
        }
        temp_v3 = FUN_0018719c(0x401);
        if (temp_v3 == 0 || !temp_v0) {
          temp_v7 = 0x100020f;
          FUN_001641b4(temp_v7);
          return;
        }
      }
      if (*piVar11 == 0x8c) {
        FUN_002b5c88();
        if (*piVar12 < 0) {
          temp_v8 = FUN_001801a4();
          temp_v1 = FUN_003df57c(*piVar11,1);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        else {
          temp_v8 = FUN_001ab854();
          temp_v1 = FUN_004bcbb4(temp_v8,*piVar11);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        if (temp_v1 < 0) {
          *(unsigned short *)(temp_v8 + 0x2c) = 0;
        }
        if (*piVar12 < 0) {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(0);
        }
        else {
          temp_v7 = FUN_001ab854();
          FUN_00334214(temp_v7,0,0);
          FUN_002a7324(0);
        }
        FUN_001641b4(0x100021c);
        FUN_002e1b3c(0);
        FUN_0020b660(0x47);
        sysPlaySe(0xa0);
        FUN_003343f0(1);
        return;
      }
      if (*piVar11 == 0x93) {
        FUN_003250ec(0);
        if (*piVar12 < 0) {
          temp_v8 = FUN_001801a4();
          temp_v1 = FUN_003df57c(*piVar11,1);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        else {
          temp_v8 = FUN_001ab854();
          temp_v1 = FUN_004bcbb4(temp_v8,*piVar11);
          temp_v1 = *(short *)(temp_v8 + 0x2c) - temp_v1;
          *(short *)(temp_v8 + 0x2c) = temp_v1;
        }
        if (temp_v1 < 0) {
          *(unsigned short *)(temp_v8 + 0x2c) = 0;
        }
        if (*piVar12 < 0) {
          FUN_0031f718(0xffffffff,0);
          FUN_002a7324(0);
        }
        else {
          temp_v7 = FUN_001ab854();
          FUN_00334214(temp_v7,0,0);
          FUN_002a7324(0);
        }
        FUN_001641b4(0x100021c);
        FUN_002e1b3c(4);
        FUN_0020b660(0x47);
        sysPlaySe(0xa0);
        FUN_003343f0(1);
        return;
      }
      FUN_002adce8(temp_v8 + 0x1ec,1);
      FUN_0021b274(3,0xffffffff,0);
      FUN_0023b45c(0);
      FUN_0035dbd4(0);
      *(unsigned int *)(temp_v8 + 0x24) = 0x12;
      FUN_0020b660(5);
    }
    else {
      temp_v7 = 0x100020f;
    }
  }
  else {
    temp_v3 = 1;
    FUN_001517b4();
    if ((temp_v3 == 0) || (temp_v3 = FUN_002a7410(), temp_v3 != 0)) {
      if (!temp_v0) {
        temp_v3 = 9;
        FUN_001517b4(9,1);
        if (temp_v3 != 0) {
          FUN_0031f27c(1,0);
          FUN_0031f208(0xb);
          FUN_0031f208(0x20);
          FUN_0031f208(0xd);
          FUN_0031f208(0xf);
          FUN_0031f208(0x11);
          FUN_0031f208(3);
          FUN_0019de98(0,0xf4f4f4ff);
          temp_v2 = FUN_00167f08();
          *(unsigned short *)(temp_v8 + 0x3a) = temp_v2;
          FUN_0020b660(0x2b);
          FUN_001641b4(temp_v7);
          return;
        }
      }
      return;
    }
    FUN_002adce8(temp_v8 + 0x1ec,1);
    if (*(char *)(temp_v8 + 0x32a8) != '\0') {
      *(unsigned char *)(temp_v8 + 0xa4) = 1;
      FUN_0020d700();
      *(unsigned char *)(temp_v8 + 0x32a8) = 0;
    }
    FUN_003344b4(0);
    FUN_0022e774();
    FUN_0035dbd4(0);
    FUN_0028b088(0);
    FUN_0021b274(3,0xffffffff,0);
    *(unsigned int *)(temp_v8 + 0x24) = 6;
    FUN_0020b660(5);
    FUN_002277d8();
    temp_v7 = 0x100020f;
  }
  FUN_001641b4(temp_v7);
  return;
}

} /* extern "C" */
