/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00479358` (_code @ 0x479358, 0x814 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_00479ab8; /* 0x479ab8 */
extern unsigned char LAB_00479ac8; /* 0x479ac8 */
extern unsigned char LAB_00479adc; /* 0x479adc */
extern unsigned char LAB_00479aec; /* 0x479aec */
extern unsigned char LAB_00479af8; /* 0x479af8 */
extern unsigned char LAB_00479b08; /* 0x479b08 */
extern unsigned int *DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_00169548. */
extern int FUN_001802d4(int);
extern int FUN_001d25ec(unsigned int *);
extern int FUN_002009a8(unsigned int);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_002a4b74(void);
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_0031d174(unsigned int *);
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0036bea0. */
/* Supplied declaration required: FUN_003d4c68. */
/* Supplied declaration required: FUN_00426fe4. */
/* Supplied declaration required: FUN_004275c8. */
/* Supplied declaration required: FUN_00473910. */
/* Supplied declaration required: FUN_00473d40. */
/* Supplied declaration required: FUN_00477d10. */
extern int FUN_0047d7f0(int);
/* Supplied declaration required: FUN_004cfe4c. */
extern int FUN_004d0058(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_004d0310. */
/* Supplied declaration required: FUN_004d032c. */
/* Supplied declaration required: FUN_004d0440. */
extern unsigned int FUN_004d066c(unsigned int *);
/* Supplied declaration required: FUN_004d0720. */
/* Supplied declaration required: FUN_004d0af0. */


void FUN_00479358(unsigned int *param_1)

{
/* irregular: 4 goto(s); 20 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar6;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  unsigned int *puStack_9c;
  unsigned int *temp_v10;
  int temp_v11;
  
  puVar1 = DAT_00570260;
  temp_v10 = param_1 + 0x7bb;
  switch(param_1[2]) {
  case 0:
    FUN_00169548(0);
    *param_1 = *param_1 & 0xfffeffff;
    FUN_00426fe4(&temp_v9,puVar1 + 10,puVar1 + 6);
    temp_v7 = temp_v9;
    temp_v8 = puStack_9c;
    temp_v2 = FUN_001d25ec(&temp_v7);
    if (temp_v2 < 0) {
      param_1[2] = 9999;
      *(unsigned char *)(param_1 + 0x84) = 100;
      param_1[0x85] = temp_v7;
      param_1[0x86] = (unsigned int)temp_v8;
    }
    else {
      FUN_004275c8(puVar1 + 10);
      param_1[2] = 1;
      param_1[0x44a] = 0;
      param_1[1099] = 0;
      temp_v2 = FUN_004cfe4c(param_1 + 0x90);
      puVar1 = DAT_00570260;
      temp_v4 = FUN_00473d40(DAT_00570260,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar1[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar1 = DAT_00570260;
          FUN_00473910(DAT_00570260,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar1;
          FUN_002a1f60(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_0036bea0(*temp_v10,3,0xffffffff,0);
        }
      }
      *(unsigned char *)(param_1 + 0xd3) = 1;
      temp_v2 = FUN_002009a8(0x1000041);
      if (temp_v2 != 1) {
        FUN_003d4c68(0x1000041);
        return;
      }
    }
    break;
  case 1:
    temp_v11 = FUN_004cfe4c(param_1 + 0x90);
    FUN_004d0310(param_1 + 0x90);
    temp_v8 = param_1 + 0x90;
    temp_v3 = param_1[0xae];
    puVar3 = param_1 + 0xad;
    temp_v5 = temp_v3 != 0xffffffff;
    if (temp_v5) {
      temp_v3 = param_1[0xaf];
    }
    temp_v6 = temp_v3 != 0xffffffff;
    if (temp_v5 && temp_v6) {
      temp_v3 = param_1[0xb0];
    }
    if ((temp_v5 && temp_v6) && temp_v3 != 0xffffffff) {
      FUN_004d0720(puVar3);
      temp_v2 = FUN_0031d174(temp_v8);
      temp_v4 = 0;
      if (temp_v4 < (int)param_1[0xb0]) {
        do {
          temp_v5 = 0;
          temp_v0 = FUN_001802d4((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
          if (temp_v0 != 0) {
            if (temp_v4 != temp_v2) {
              *(unsigned char *)((int)param_1 + 0x2e6) = 1;
              FUN_004d032c(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_004d0440();
              }
              break;
            }
            *(unsigned char *)((int)param_1 + 0x2e6) = 0;
          }
          else {
            temp_v0 = FUN_00284140((int)*(short *)((int)puVar3 + temp_v4 * 2 + 0x18));
            if (((temp_v0 == 1) || (temp_v0 == 2)) && (temp_v4 != temp_v2)) {
              temp_v5 = 1;
            }
            temp_v6 = temp_v4 == temp_v2 && temp_v0 == 6;
            if (temp_v4 == temp_v2 && temp_v0 == 6) {
              temp_v6 = *(char *)((int)param_1 + 0x2e6) == '\0';
            }
            if (temp_v6) {
              *(unsigned char *)((int)param_1 + 0x2c6) = 1;
              *(short *)(param_1 + 0xb2) = (short)temp_v4;
              break;
            }
            if (temp_v5) {
              FUN_004d032c(temp_v8,temp_v4);
              if ((char)param_1[0xb1] != '\0' && temp_v4 != temp_v2) {
                FUN_004d0440();
              }
              break;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)param_1[0xb0]);
      }
    }
    FUN_004d0af0(param_1 + 0xba,param_1 + 0x90);
    temp_v2 = FUN_004cfe4c(param_1 + 0x90);
    if (temp_v2 != temp_v11) {
      temp_v2 = FUN_004cfe4c(param_1 + 0x90);
      puVar3 = DAT_00570260;
      temp_v4 = FUN_00473d40(DAT_00570260,temp_v2);
      if ((temp_v4 != 0) && (temp_v2 = puVar3[0x19e] + temp_v2 * 0x9c8, temp_v2 != 0)) {
        if (*(char *)(temp_v2 + 0x9b3) != '\0') {
          puVar3 = DAT_00570260;
          FUN_00473910(DAT_00570260,0xffffffff);
          temp_v7 = 3;
          temp_v9 = 0xc;
          temp_v8 = puVar3;
          FUN_002a1f60(*temp_v10,3,0xffffffff,0);
        }
        else {
          temp_v8 = (unsigned int *)(temp_v2 + 0x180);
          temp_v7 = 3;
          FUN_0036bea0(*temp_v10,3,0xffffffff,0);
        }
      }
      FUN_00477d10(param_1,2,0);
    }
    if (*(char *)((int)param_1 + 0x2c6) != '\0') {
      temp_v1 = FUN_004d066c(param_1 + 0xad);
      temp_v2 = FUN_004d0058(param_1 + 0x90,temp_v1);
      if (temp_v2 != 0) {
        temp_v1 = FUN_004cfe4c(param_1 + 0x90);
        temp_v2 = FUN_00473d40(puVar1,temp_v1);
        if (temp_v2 != 0) {
          temp_v2 = FUN_004cfe4c(param_1 + 0x90);
          if (*(char *)(puVar1[0x19e] + temp_v2 * 0x9c8 + 0x9b3) != '\0') {
LAB_0047996c:
            param_1[2] = 6;
            temp_v1 = FUN_00357bc8(param_1[0xd4],&LAB_00479af8);
            FUN_00275f44(param_1[0xd6],temp_v1);
            FUN_001641b4(0x100020e);
            *(unsigned char *)(param_1 + 0xd3) = 0;
            return;
          }
          temp_v2 = FUN_004cfe4c(param_1 + 0x90);
          temp_v2 = FUN_0047d7f0(puVar1[0x19e] + temp_v2 * 0x9c8);
          if (temp_v2 == 0) goto LAB_004797d0;
          if (temp_v2 == 1) goto LAB_00479820;
          if (temp_v2 == 2) goto LAB_00479870;
        }
      }
    }
    else {
      temp_v2 = FUN_002e1a18(0xc);
      if (temp_v2 != 0) {
LAB_004797d0:
        param_1[2] = 2;
        temp_v1 = FUN_00357bc8(param_1[0xd4],&LAB_00479ab8);
        FUN_00275f44(param_1[0xd6],temp_v1);
        FUN_001641b4(0x100020e);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_002e1a18(0xd);
      if (temp_v2 != 0) {
LAB_00479820:
        param_1[2] = 3;
        temp_v1 = FUN_00357bc8(param_1[0xd4],&LAB_00479ac8);
        FUN_00275f44(param_1[0xd6],temp_v1);
        FUN_001641b4(0x100020e);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_002e1a18(0xe);
      if (temp_v2 != 0) {
LAB_00479870:
        param_1[2] = 4;
        temp_v1 = FUN_00357bc8(param_1[0xd4],&LAB_00479adc);
        FUN_00275f44(param_1[0xd6],temp_v1);
        FUN_001641b4(0x100020e);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_002e1a18(0xb);
      if (temp_v2 != 0) {
        param_1[2] = 5;
        temp_v1 = FUN_00357bc8(param_1[0xd4],&LAB_00479aec);
        FUN_00275f44(param_1[0xd6],temp_v1);
        FUN_001641b4(0x100020e);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_002e1a18(10);
      if (temp_v2 != 0) {
        param_1[1] = 0xc;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
        FUN_00169548(1);
        FUN_001641b4(0x100020e);
        *(unsigned char *)(param_1 + 0xd3) = 0;
        return;
      }
      temp_v2 = FUN_002e1a18(0xf);
      if (temp_v2 != 0) goto LAB_0047996c;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    temp_v2 = FUN_004cfe4c(param_1 + 0x90);
    temp_v3 = puVar1[0x19e];
    FUN_002e6354(&temp_v7,0x80);
    FUN_00100388(&temp_v7,&LAB_00479b08,temp_v3 + temp_v2 * 0x9c8);
    FUN_003180c4(0,&temp_v7);
    FUN_00169548(1);
    temp_v2 = FUN_00224880(param_1[0xd6]);
    if (temp_v2 == 2) {
      temp_v2 = FUN_002a4b74();
      if (temp_v2 != 0) {
        if (temp_v2 == 1) {
          param_1[2] = 0;
        }
        return;
      }
      temp_v3 = param_1[2];
      if (temp_v3 != 2) {
        if (temp_v3 != 3) {
          if (temp_v3 != 4) {
            if (temp_v3 != 5) {
              if (temp_v3 != 6) {
                return;
              }
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xd;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
            else {
              piVar6 = (int *)param_1[0x82];
              param_1[1] = 0xf;
              param_1[2] = 0;
              if (piVar6 == (int *)0x0) {
                return;
              }
            }
          }
          else {
            piVar6 = (int *)param_1[0x82];
            param_1[1] = 9;
            param_1[2] = 0;
            if (piVar6 == (int *)0x0) {
              return;
            }
          }
        }
        else {
          piVar6 = (int *)param_1[0x82];
          param_1[1] = 8;
          param_1[2] = 0;
          if (piVar6 == (int *)0x0) {
            return;
          }
        }
      }
      else {
        piVar6 = (int *)param_1[0x82];
        param_1[1] = 7;
        param_1[2] = 0;
        if (piVar6 == (int *)0x0) {
          return;
        }
      }
      (**(romwright_code **)(*piVar6 + 4))();
      param_1[0x82] = 0;
      return;
    }
  }
  return;
}
