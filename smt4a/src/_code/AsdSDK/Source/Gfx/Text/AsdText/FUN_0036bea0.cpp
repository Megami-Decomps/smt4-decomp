/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036bea0` (_code @ 0x36bea0, 0x6d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_00182a9c(void);
int asdMemFree(void);
int FUN_0019dc44(...);
int FUN_002a1970(...);
int FUN_002a1cec(char *, unsigned char *, int);
int FUN_00341968(unsigned char *, unsigned char *, int);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

extern unsigned short uRam005b3d56; /* 0x5b3d56 */
extern unsigned int DAT_005b3d78; /* 0x5b3d78 */
extern signed char g_inputResetState; /* 0x5c1460 */
extern int DAT_005c1468; /* 0x5c1468 */
extern unsigned char DAT_00636f88; /* 0x636f88 */
extern unsigned char DAT_00638f88; /* 0x638f88 */
extern unsigned char DAT_0063af98; /* 0x63af98 */
extern unsigned char DAT_0063afa8; /* 0x63afa8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00182a9c. */
/* Supplied declaration required: asdMemFree. */
extern int FUN_0019be8c(unsigned int);
/* Supplied declaration required: FUN_0019dc44. */
/* Supplied declaration required: FUN_002a1970. */
/* Supplied declaration required: FUN_002a1cec. */
/* Supplied declaration required: FUN_00341968. */


void FUN_0036bea0(int *param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 char *param_6)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned short *puVar7;
  unsigned char *unaff_r10;
  int unaff_r11;
  unsigned int in_fpscr;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *temp_v5;
  int *temp_v6;
  
  temp_v3 = VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[8] = param_3;
  param_1[6] = temp_v3;
  param_1[7] = temp_v2;
  temp_v2 = FUN_0019dc44(param_2);
  param_1[5] = temp_v2;
  if (param_1[0x14] == -1) {
    param_1[0x15] = 0;
  }
  else {
    temp_v2 = FUN_0019dc44();
    param_1[0x15] = temp_v2;
  }
  if (param_1[0x27] == -1) {
    param_1[0x29] = 0;
  }
  else {
    temp_v2 = FUN_0019dc44();
    param_1[0x29] = temp_v2;
  }
  temp_v2 = 0;
  param_1[0xd] = param_1[0xd] & 0xffffffef;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  *(unsigned char *)(param_1 + 0x11) = 1;
  *(unsigned short *)((int)param_1 + 0x46) = 0;
  *(unsigned short *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x2c] = 0;
  temp_v4 = 0;
  if (*param_1 != 0) {
    asdMemFree();
    *param_1 = 0;
  }
  if (*param_6 != '\0') {
    FUN_002a1cec(param_6,&DAT_00636f88,0);
    puVar2 = &DAT_00636f88;
    FUN_00341968(&DAT_00636f88,&DAT_00638f88,0);
    param_1[1] = (int)puVar2;
    temp_v3 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,(int)puVar2 << 5,0);
    *param_1 = temp_v3;
    temp_v5 = (int *)0x0;
    temp_v6 = (int *)0x0;
    temp_v0 = 0;
    puVar6 = (unsigned char *)0x0;
    piVar4 = *(int **)(param_1[5] + 8);
    if (param_1[0x15] != 0) {
      temp_v5 = *(int **)(param_1[0x15] + 8);
    }
    if (param_1[0x29] != 0) {
      temp_v6 = *(int **)(param_1[0x29] + 8);
    }
    param_1[0xf] = 1;
    *(unsigned short *)((int)param_1 + 0x46) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if (puVar2 != (unsigned char *)0x0) {
      unaff_r11 = 0x636f68;
      unaff_r10 = &DAT_00638f88;
    }
    param_1[0x26] = 0;
    *(unsigned short *)(param_1 + 0x12) = 0;
    param_1[0x13] = temp_v2;
    if (puVar2 != (unsigned char *)0x0) {
LAB_0036c070:
      puVar7 = (unsigned short *)(*param_1 + (int)puVar6 * 0x20);
      temp_v1 = ((*(unsigned short *)(unaff_r10 + (int)puVar6 * 2) & 0xff) << 8) |
              (unsigned int)(*(unsigned short *)(unaff_r10 + (int)puVar6 * 2) >> 8);
      *puVar7 = (short)temp_v1;
      if (temp_v1 != 0xffff) {
        if (temp_v0) {
          if (temp_v1 != 0) goto LAB_0036c0b8;
          temp_v0 = 0;
        }
        else {
          if (temp_v1 == 0) {
            temp_v1 = 0x8260;
          }
LAB_0036c0b8:
          temp_v2 = FUN_0019be8c(temp_v1);
          if (temp_v2 != 0) {
            if (temp_v1 == 0xf816) {
              temp_v4 = 1;
            }
            else if (temp_v1 < 0xf817) {
              if (temp_v1 == 0xf812) {
                temp_v0 = 1;
              }
              else if (temp_v1 < 0xf813) {
                if (temp_v1 != 0xf802) {
                  if (temp_v1 == 0xf804) goto LAB_0036c334;
                  goto LAB_0036c494;
                }
                param_1[0xf] = param_1[0xf] + 1;
              }
              else if (temp_v1 != 0xf813) {
                if (temp_v1 != 0xf814) goto LAB_0036c494;
                puVar5 = puVar6 + 1;
                puVar6 = puVar6 + 2;
                *(unsigned short *)(*param_1 + (int)puVar5 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar5 * 2);
                *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
              }
              else {
                *(unsigned short *)(*param_1 + (int)(puVar6 + 1) * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)(puVar6 + 1) * 2);
                puVar5 = puVar6 + 3;
                *(unsigned short *)(*param_1 + (int)(puVar6 + 2) * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)(puVar6 + 2) * 2);
                puVar6 = puVar6 + 4;
                *(unsigned short *)(*param_1 + (int)puVar5 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar5 * 2);
                *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
              }
            }
            else {
                    /* WARNING: Switch table taken from the stored dispatch table */
              if (temp_v1 - 0xf816 < 6) {
                switch(temp_v1 - 0xf816) {
                case 0:
                  goto LAB_0036c494;
                case 1:
                  temp_v4 = 2;
                  break;
                case 2:
                  temp_v4 = 0;
                  break;
                default:
LAB_0036c334:
                  puVar6 = puVar6 + 1;
                  *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
                  break;
                case 5:
                  *(unsigned short *)(*param_1 + (int)(puVar6 + 1) * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)(puVar6 + 1) * 2);
                  *(unsigned short *)(*param_1 + (int)(puVar6 + 2) * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)(puVar6 + 2) * 2);
                  *(unsigned short *)(*param_1 + (int)(puVar6 + 3) * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)(puVar6 + 3) * 2);
                  puVar5 = puVar6 + 5;
                  *(unsigned short *)(*param_1 + (int)(puVar6 + 4) * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)(puVar6 + 4) * 2);
                  puVar6 = puVar6 + 6;
                  *(unsigned short *)(*param_1 + (int)puVar5 * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)puVar5 * 2);
                  *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                       *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
                }
              }
              else {
LAB_0036c494:
                temp_v2 = 0;
                do {
                  if ((*(int *)(unaff_r11 + temp_v2 * 4) != 0) &&
                     (*(unsigned short *)(&DAT_0063af98 + temp_v2 * 2) == temp_v1)) {
                    temp_v2 = 0;
                    goto LAB_0036c4d0;
                  }
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < 8);
              }
            }
          }
          else if (temp_v4 != 2) {
            if (temp_v0) {
              if (temp_v5 != (int *)0x0) {
                temp_v2 = (**(romwright_code **)(*temp_v5 + 0x44))(temp_v5,temp_v1);
                if (temp_v2 == 0) {
                  temp_v1 = (unsigned int)uRam005b3d56;
                }
                (**(romwright_code **)(*temp_v5 + 0x40))(temp_v5,puVar7 + 2,temp_v1);
                temp_v2 = param_1[0x15];
                FUN_002a1970(temp_v2,temp_v1);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
            }
            else {
              temp_v2 = (**(romwright_code **)(*piVar4 + 0x44))(piVar4,temp_v1);
              if (temp_v2 == 0) {
                temp_v1 = (unsigned int)uRam005b3d56;
              }
              if ((DAT_005b3d78 != 0) && (DAT_005b3d78 == temp_v1)) {
                (**(romwright_code **)(*piVar4 + 0x40))(piVar4,puVar7 + 2,0x8140);
                temp_v2 = param_1[5];
                FUN_002a1970(temp_v2,0x8140);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
              else {
                (**(romwright_code **)(*piVar4 + 0x40))(piVar4,puVar7 + 2,temp_v1);
                temp_v2 = param_1[5];
                FUN_002a1970(temp_v2,temp_v1);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
            }
          }
          else if (temp_v6 != (int *)0x0) {
            temp_v2 = (**(romwright_code **)(*temp_v6 + 0x44))(temp_v6,temp_v1);
            if (temp_v2 == 0) {
              temp_v1 = (unsigned int)uRam005b3d56;
            }
            (**(romwright_code **)(*temp_v6 + 0x40))(temp_v6,puVar7 + 2,temp_v1);
            temp_v2 = param_1[0x29];
            FUN_002a1970(temp_v2,temp_v1);
            *(int *)(puVar7 + 0xe) = temp_v2;
          }
        }
        goto LAB_0036c524;
      }
    }
  }
LAB_0036c530:
  if (param_3 == -1) {
    do {
      piVar4 = param_1;
      FUN_00182a9c();
    } while (piVar4 == (int *)0x0);
  }
  temp_v2 = DAT_005c1468;
  if (g_inputResetState != '\0') {
    *(unsigned int *)(DAT_005c1468 + 4) = 0;
    *(unsigned int *)(temp_v2 + 8) = 0;
    *(unsigned int *)(temp_v2 + 0xc) = 0;
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    *(unsigned int *)(temp_v2 + 0x14) = 0;
    *(unsigned int *)(temp_v2 + 0x18) = 0;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    *(unsigned int *)(temp_v2 + 0x20) = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0x2c) = 0;
    *(unsigned int *)(temp_v2 + 0x30) = 0;
    *(unsigned short *)(temp_v2 + 0x34) = 0;
  }
  return;
  while (temp_v2 = temp_v2 + 1, temp_v2 < 8) {
LAB_0036c4d0:
    if ((*(int *)(unaff_r11 + temp_v2 * 4) != 0) && (*(unsigned short *)(&DAT_0063af98 + temp_v2 * 2) == temp_v1))
    {
      temp_v3 = *(int *)(&DAT_0063afa8 + temp_v2 * 4);
      temp_v2 = 0;
      if (temp_v2 < temp_v3) {
        do {
          puVar6 = puVar6 + 1;
          temp_v2 = temp_v2 + 1;
          *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
               *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
        } while (temp_v2 < temp_v3);
      }
      break;
    }
  }
LAB_0036c524:
  puVar6 = puVar6 + 1;
  if (puVar2 <= puVar6) goto LAB_0036c530;
  goto LAB_0036c070;
}

} /* extern "C" */
