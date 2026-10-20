/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5f30` (_code @ 0x3b5f30, 0x674 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a17c(int, int, int, int, int);
int FUN_002b93c8(int);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_003b65a4(int, int, int, int, int, int, int, int, int, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

extern unsigned int DAT_0044dc38; /* 0x44dc38 */
extern unsigned int DAT_0044dc3c; /* 0x44dc3c */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003b65a4. */


void FUN_003b5f30(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar5;
  int temp_v4;
  char *pcVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar12;
  int temp_v9;
  char temp_v10;
  unsigned int in_fpscr;
  char acStack_60 [24];
  int temp_v11;
  int temp_v12;
  int iStack_30;
  int temp_v13;
  int temp_v14;
  
  iStack_30 = param_1;
  temp_v13 = param_2;
  temp_v14 = param_3;
  temp_v1 = FUN_002a8764();
  temp_v5 = 0x18;
  pcVar5 = acStack_60;
  pcVar7 = (char *)(temp_v1 + 0x90f0);
  temp_v11 = temp_v1;
  do {
    temp_v0 = *pcVar7;
    temp_v10 = '\0';
    if ((((-1 < temp_v0) &&
         ((*(char *)(temp_v1 + 0x9108) < '\0' || (*(char *)(temp_v1 + 0x9108) != temp_v0)))) &&
        ((*(char *)(temp_v1 + 0x9109) < '\0' || (*(char *)(temp_v1 + 0x9109) != temp_v0)))) &&
       ((*(char *)(temp_v1 + 0x910a) < '\0' || (*(char *)(temp_v1 + 0x910a) != temp_v0)))) {
      temp_v10 = '\x01';
    }
    temp_v5 = temp_v5 - 1;
    *pcVar5 = temp_v10;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (temp_v5 != 0);
  temp_v12 = 0;
  do {
    temp_v6 = temp_v14;
    temp_v5 = temp_v13;
    temp_v1 = g_titleScene;
    temp_v7 = 0;
    if (temp_v12 != 0) {
      if (temp_v12 != 7) {
        if (temp_v12 != 2) {
          if (temp_v12 != 4) {
            if (temp_v12 == 6) {
              DAT_0044dc38 = FUN_002bf4f8(0x28,0x5f);
            }
          }
          else {
            DAT_0044dc38 = FUN_002bf4f8(0x28,0x66);
            DAT_0044dc3c = 0;
          }
        }
        else {
          DAT_0044dc38 = FUN_002bf4f8(0x28,100);
          DAT_0044dc3c = 0;
        }
      }
      else {
        temp_v2 = FUN_002c5da8(6,1,0);
        piVar12 = (int *)(temp_v1 + 0x12ac);
        temp_v3 = piVar12[*piVar12 + 2];
        piVar12[*piVar12 + 2] = temp_v2;
        if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v2 = FUN_002c5da8(6,1,0);
      piVar12 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
    temp_v1 = 0;
    do {
      if (acStack_60[temp_v1] != '\0') {
        temp_v2 = temp_v11 + temp_v1;
        temp_v8 = *(char *)(temp_v2 + 0x90f0) + 1;
        temp_v9 = param_1 + ((int)(temp_v7 + ((unsigned int)(temp_v7 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
        temp_v3 = FUN_002beda4(temp_v9 + 0xac);
        temp_v5 = temp_v5 + temp_v3;
        temp_v3 = FUN_002bed98(temp_v9 + 0xac);
        temp_v6 = temp_v6 + temp_v3;
        temp_v3 = param_1 + temp_v8 * 2;
        temp_v8 = param_1 + temp_v8;
        FUN_003b65a4(param_1,temp_v12,(int)*(char *)(temp_v2 + 0x90f0),temp_v7,temp_v5,temp_v6,
                     (int)*(short *)(temp_v3 + 0xd468),(int)*(char *)(temp_v8 + 0xd4fe),
                     (int)*(short *)(temp_v3 + 0xd49a),(int)*(char *)(temp_v8 + 0xd530));
        temp_v7 = temp_v7 + 1;
      }
      temp_v2 = g_titleScene;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    if (temp_v12 != 0) {
      if (!(temp_v12 == 2 || temp_v12 == 4)) {
        if (temp_v12 == 7) {
          temp_v1 = FUN_002c5da8(6,7,0);
          piVar12 = (int *)(temp_v2 + 0x12ac);
          temp_v5 = piVar12[*piVar12 + 2];
          piVar12[*piVar12 + 2] = temp_v1;
          if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v1) {
            (**(romwright_code **)(temp_v2 + 0x12c8))();
            *(unsigned char *)(temp_v2 + 0x12c4) = 0;
          }
          FUN_002bf538();
        }
      }
      else {
        FUN_002bed3c();
      }
    }
    else {
      temp_v1 = FUN_002c5da8(6,7,0);
      piVar12 = (int *)(temp_v2 + 0x12ac);
      temp_v5 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = temp_v1;
      if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v1) {
        (**(romwright_code **)(temp_v2 + 0x12c8))();
        *(unsigned char *)(temp_v2 + 0x12c4) = 0;
      }
    }
    temp_v12 = temp_v12 + 1;
    if (temp_v12 >= 8) {
      temp_v7 = 0;
      temp_v6 = 0;
      temp_v1 = temp_v14;
      temp_v5 = temp_v13;
      do {
        if (acStack_60[temp_v6] != '\0') {
          temp_v8 = *(char *)(temp_v11 + temp_v6 + 0x90f0) + 1;
          temp_v2 = FUN_002a8740();
          temp_v9 = param_1 + ((int)(temp_v7 + ((unsigned int)(temp_v7 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
          temp_v3 = FUN_002beda4(temp_v9 + 0xac);
          temp_v5 = temp_v5 + temp_v3;
          temp_v3 = FUN_002bed98(temp_v9 + 0xac);
          temp_v1 = temp_v1 + temp_v3;
          if (*(char *)(param_1 + temp_v8 + 0xd4fe) != '\0') {
            temp_v3 = FUN_002bf4f8(0x28,temp_v7 + 0x68);
            temp_v2 = g_titleScene;
            piVar12 = (int *)(g_titleScene + 0x130c);
            temp_v9 = piVar12[*piVar12 + 2];
            piVar12[*piVar12 + 2] = 3;
            if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v9 != 3) {
              (**(romwright_code **)(temp_v2 + 0x1328))();
              *(unsigned char *)(temp_v2 + 0x1324) = 0;
            }
            FUN_0029a17c(*(short *)(temp_v3 + 8) + temp_v5,*(short *)(temp_v3 + 10) + temp_v1,
                         (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1],1);
            temp_v2 = g_titleScene;
            temp_v9 = FUN_002c5da8(6,1,0);
            piVar12 = (int *)(temp_v2 + 0x12ac);
            temp_v4 = piVar12[*piVar12 + 2];
            piVar12[*piVar12 + 2] = temp_v9;
            if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v4 != temp_v9) {
              (**(romwright_code **)(temp_v2 + 0x12c8))();
              *(unsigned char *)(temp_v2 + 0x12c4) = 0;
            }
            FUN_002b93c8(param_1 + temp_v8 * 0x8c + 0x1fd8);
            temp_v2 = g_titleScene;
            temp_v9 = FUN_002c5da8(6,7,0);
            piVar12 = (int *)(temp_v2 + 0x12ac);
            temp_v4 = piVar12[*piVar12 + 2];
            piVar12[*piVar12 + 2] = temp_v9;
            if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v4 != temp_v9) {
              (**(romwright_code **)(temp_v2 + 0x12c8))();
              *(unsigned char *)(temp_v2 + 0x12c4) = 0;
            }
            temp_v2 = g_titleScene;
            piVar12 = (int *)(g_titleScene + 0x130c);
            temp_v9 = piVar12[*piVar12 + 2];
            piVar12[*piVar12 + 2] = 0;
            if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v9 != 0) {
              (**(romwright_code **)(temp_v2 + 0x1328))();
              *(unsigned char *)(temp_v2 + 0x1324) = 0;
            }
            temp_v2 = (int)*(short *)(param_1 + temp_v8 * 2 + 0xd4cc);
            temp_v8 = temp_v2 * -2 + 0xc;
            if (temp_v8 < 0) {
              temp_v8 = 0;
            }
            if (temp_v2 < 8) {
              VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_002bf538();
            }
            FUN_002bf288(2,0x28,99,*(short *)(temp_v3 + 8) + temp_v5,
                         temp_v1 + temp_v8 + (int)*(short *)(temp_v3 + 10),0xce);
            FUN_002bf538();
          }
          else if ((0 < *(short *)(param_1 + temp_v8 * 2 + 0xd49a)) ||
                  ((int)*(char *)(param_1 + temp_v8 + 0xd530) < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x48)))
          {
            temp_v2 = FUN_002bf4f8(0x28,temp_v7 + 0x68);
            FUN_002bf288(2,0x28,99,*(short *)(temp_v2 + 8) + temp_v5,*(short *)(temp_v2 + 10) + temp_v1,0xce
                        );
          }
          temp_v7 = temp_v7 + 1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
