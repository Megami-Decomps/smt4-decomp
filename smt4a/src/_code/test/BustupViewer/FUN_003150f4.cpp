/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003150f4` (_code @ 0x3150f4, 0xbe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_003d209c(void);

int FUN_00100388(...);
int jobStop(unsigned int, int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_00237210(unsigned int);
int FUN_0023a55c(void);
int FUN_0026812c(void);
int FUN_00275bc8(...);
int FUN_00275f44(...);
int FUN_00283498(void);
int FUN_0028520c(void);
int FUN_0028c258(void);
int FUN_002e6dd0(unsigned char [140], int);
int FUN_002ef750(void);
int FUN_0035bea0(void);
int bustupCutAnimStopJob(void);
int FUN_0037d038(...);
int VectorSignedToFloat(int, int);

extern unsigned char LAB_00315760; /* 0x315760 */
extern unsigned char LAB_00315774; /* 0x315774 */
extern unsigned char LAB_00315784; /* 0x315784 */
extern unsigned char LAB_00315794; /* 0x315794 */
extern unsigned char LAB_003157a4; /* 0x3157a4 */
extern unsigned int *g_bustupViewer; /* 0x588ff0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: jobStop. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
extern int dataTableGet(unsigned int, unsigned char);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_0019e378(void);
extern int FUN_00224880(void);
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_0023a55c. */
/* Supplied declaration required: FUN_0026812c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: FUN_0028520c. */
/* Supplied declaration required: FUN_0028c258. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_002ef750. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0035bea0. */
/* Supplied declaration required: bustupCutAnimStopJob. */
/* Supplied declaration required: FUN_0037d038. */
/* Supplied declaration required: FUN_003d209c. */


unsigned int FUN_003150f4(void)

{
/* irregular: 27 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned char temp_v11 [140];
  
  puVar2 = g_bustupViewer;
  if ((g_bustupViewer[2] != 2) && (temp_v1 = FUN_001656a0(2), temp_v1 != 0)) {
    puVar2[2] = 2;
  }
  puVar3 = g_bustupViewer;
  temp_v1 = puVar2[2];
  if (temp_v1 == 0) {
    puVar2[2] = 1;
  }
  else if (temp_v1 != 1) {
    if (temp_v1 == 2) {
      FUN_00237210(g_bustupViewer[0x28]);
      FUN_0035bea0();
      bustupCutAnimStopJob();
      temp_v1 = 0;
      do {
        temp_v4 = (int)(short)temp_v1;
        FUN_0028520c();
        if (temp_v4 != 0) {
          FUN_0023a55c();
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x40);
      FUN_002ef750();
      if (puVar3[0x26] != 0) {
        asdMemFree();
        puVar3[0x26] = 0;
      }
      if (puVar3[0x27] != 0) {
        scrScriptProcessDestroy();
        puVar3[0x27] = 0;
      }
      jobStop(*puVar3,0);
      return 0xffffffff;
    }
  }
  else {
    temp_v6 = 0;
    if (puVar2[0x27] != 0) {
      temp_v1 = FUN_00224880();
      temp_v6 = temp_v1 != 2;
      if (!temp_v6) {
        *(unsigned char *)(puVar2 + 0x11) = 0;
      }
    }
    temp_v1 = FUN_00164af0(5);
    if (temp_v1 != 0) {
      temp_v1 = -1;
LAB_00315654:
      puVar3 = g_bustupViewer;
LAB_0031565c:
      temp_v3 = puVar2[4] + temp_v1;
      if ((int)temp_v3 >= 0x10) {
        temp_v3 = 0;
      }
      else if ((int)temp_v3 < 0) {
        temp_v3 = 0xf;
      }
      puVar2[4] = temp_v3;
      switch(puVar2[3]) {
      case 0:
        switch(temp_v3) {
        case 2:
        case 3:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
          goto LAB_0031565c;
        default:
          goto LAB_0031585c;
        }
      case 1:
        switch(temp_v3) {
        case 2:
        case 3:
        case 5:
        case 7:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xf:
          goto LAB_0031565c;
        default:
          goto LAB_0031585c;
        }
      case 2:
        if (temp_v3 != 5) {
          if ((int)temp_v3 < 5) {
            if (temp_v3 != 2 && temp_v3 != 3) goto LAB_0031585c;
          }
          else if (temp_v3 != 7 && temp_v3 != 0xf) goto LAB_0031585c;
        }
        goto LAB_0031565c;
      case 3:
        switch(temp_v3) {
        case 4:
          if (*(char *)((int)puVar3 + puVar3[0x14] + 100) != '\0') goto LAB_0031585c;
          break;
        case 5:
          if (*(char *)((int)puVar3 + puVar3[0x14] + 100) == '\0') goto LAB_0031585c;
          break;
        case 6:
        case 7:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        default:
          goto LAB_0031585c;
        }
        goto LAB_0031565c;
      case 4:
        goto LAB_00315854;
      default:
        goto LAB_0031585c;
      }
    }
    temp_v1 = FUN_00164af0(6);
    if (temp_v1 != 0) {
      temp_v1 = 1;
      goto LAB_00315654;
    }
    temp_v1 = FUN_00164af0(4);
    if (temp_v1 != 0) {
      temp_v1 = -1;
LAB_00315864:
      switch(puVar2[4]) {
      case 0:
        temp_v1 = puVar2[3] + temp_v1;
        if (temp_v1 >= 5) {
          temp_v1 = 0;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 4;
        }
        puVar2[3] = temp_v1;
        if ((temp_v1 == 1 || temp_v1 == 2) && ((int)puVar2[5] >= 0x80)) {
          puVar2[5] = 0x7f;
        }
        break;
      case 1:
        temp_v4 = puVar2[3];
        temp_v1 = puVar2[5] + temp_v1;
        if (!((temp_v4 == 0 || temp_v4 == 3) || temp_v4 == 4)) {
          if (temp_v1 >= 0x80) {
            temp_v1 = 0;
          }
          else if (temp_v1 < 0) {
            temp_v1 = 0x7f;
          }
        }
        else {
          if (temp_v1 >= 300) {
            temp_v1 = 0;
            puVar2[5] = temp_v1;
            break;
          }
          if (temp_v1 < 0) {
            temp_v1 = 299;
          }
        }
        puVar2[5] = temp_v1;
        break;
      case 2:
        temp_v1 = puVar2[0x14] + temp_v1;
        if (temp_v1 >= 4) {
          temp_v1 = 0;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 3;
        }
        puVar2[0x14] = temp_v1;
        FUN_0028c258();
        break;
      case 3:
        *(unsigned char *)((int)puVar2 + puVar2[0x14] + 100) =
             *(char *)((int)puVar2 + puVar2[0x14] + 100) == '\0';
        FUN_0028c258();
        break;
      case 4:
        temp_v1 = puVar2[6] + temp_v1;
        if (temp_v1 >= 0x1ac) {
          temp_v1 = 0;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 0x1ab;
        }
        puVar2[6] = temp_v1;
        puVar2[puVar2[0x14] + 0x15] = temp_v1;
        break;
      case 5:
        temp_v3 = puVar2[puVar2[0x14] + 0x15] + temp_v1;
        if (temp_v3 >= 0x4b1) {
          temp_v3 = 0;
        }
        else if ((int)temp_v3 < 0) {
          temp_v3 = 0x4b0;
        }
        puVar2[puVar2[0x14] + 0x15] = temp_v3;
        FUN_0028c258();
        break;
      case 6:
        temp_v1 = puVar2[7] + temp_v1;
        if (temp_v1 >= 0x19) {
          temp_v1 = 1;
        }
        else if (temp_v1 < 1) {
          temp_v1 = 0x18;
        }
        puVar2[7] = temp_v1;
        break;
      case 7:
        temp_v1 = puVar2[8] + temp_v1;
        if (temp_v1 >= 0x40) {
          temp_v1 = 0;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 0x3f;
        }
        puVar2[8] = temp_v1;
        break;
      case 8:
        if (puVar2[3] != 3) {
          temp_v1 = puVar2[9] + temp_v1;
          if (temp_v1 >= 0x3e9) {
            temp_v1 = -1000;
          }
          else if (temp_v1 < -1000) {
            temp_v1 = 1000;
          }
          puVar2[9] = temp_v1;
        }
        else {
          temp_v1 = puVar2[puVar2[0x14] + 0x1a] + temp_v1;
          if (temp_v1 >= 0x3e9) {
            temp_v1 = -1000;
          }
          else if (temp_v1 < -1000) {
            temp_v1 = 1000;
          }
          puVar2[puVar2[0x14] + 0x1a] = temp_v1;
        }
        break;
      case 9:
        if (puVar2[3] != 3) {
          temp_v1 = puVar2[10] + temp_v1;
          if (temp_v1 >= 0x3e9) {
            temp_v1 = -1000;
          }
          else if (temp_v1 < -1000) {
            temp_v1 = 1000;
          }
          puVar2[10] = temp_v1;
        }
        else {
          temp_v1 = puVar2[puVar2[0x14] + 0x1e] + temp_v1;
          if (temp_v1 >= 0x3e9) {
            temp_v1 = -1000;
          }
          else if (temp_v1 < -1000) {
            temp_v1 = 1000;
          }
          puVar2[puVar2[0x14] + 0x1e] = temp_v1;
        }
        break;
      case 10:
        temp_v1 = puVar2[0xb] + temp_v1;
        if (temp_v1 >= 0x1ac) {
          temp_v1 = 0;
        }
        else if (temp_v1 < 0) {
          temp_v1 = 0x1ab;
        }
        puVar2[0xb] = temp_v1;
        break;
      case 0xb:
        temp_v1 = puVar2[0xc] + temp_v1;
        if (temp_v1 >= 0x19) {
          temp_v1 = 1;
        }
        else if (temp_v1 < 1) {
          temp_v1 = 0x18;
        }
        puVar2[0xc] = temp_v1;
        break;
      case 0xc:
        temp_v1 = puVar2[0xd] + temp_v1;
        if (temp_v1 >= 0x3e9) {
          temp_v1 = -1000;
        }
        else if (temp_v1 < -1000) {
          temp_v1 = 1000;
        }
        puVar2[0xd] = temp_v1;
        break;
      case 0xd:
        temp_v1 = puVar2[0xe] + temp_v1;
        if (temp_v1 >= 0x3e9) {
          temp_v1 = -1000;
        }
        else if (temp_v1 < -1000) {
          temp_v1 = 1000;
        }
        puVar2[0xe] = temp_v1;
        break;
      case 0xe:
        if (puVar2[3] != 2) {
          temp_v1 = puVar2[0xf] + temp_v1;
          if (puVar2[0x12] - 1 < temp_v1) {
            temp_v1 = 0;
          }
          else if (temp_v1 < 0) {
            temp_v1 = puVar2[0x12] - 1;
          }
          puVar2[0xf] = temp_v1;
        }
        else {
          temp_v1 = puVar2[0xf] + temp_v1;
          if (puVar2[0x13] - 1 < temp_v1) {
            temp_v1 = 0;
          }
          else if (temp_v1 < 0) {
            temp_v1 = puVar2[0x13] - 1;
          }
          puVar2[0xf] = temp_v1;
        }
        break;
      case 0xf:
        temp_v9 = 0.01f;
        temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (float)puVar2[puVar2[0x14] + 0x22] + temp_v8 * 0.01f;
        if (((int)temp_v8 >= 0x3c23d70a) && (temp_v9 = temp_v8, (int)temp_v8 >= 0x40800001)) {
          temp_v9 = 4.0f;
        }
        *(float *)&puVar2[puVar2[0x14] + 0x22] = temp_v9;
      }
    }
    else {
      temp_v1 = FUN_00164af0(3);
      if (temp_v1 != 0) {
        temp_v1 = 1;
        goto LAB_00315864;
      }
      temp_v1 = FUN_00164af0(8);
      if (temp_v1 != 0) {
        temp_v1 = -10;
        goto LAB_00315864;
      }
      temp_v1 = FUN_00164af0(7);
      if (temp_v1 != 0) {
        temp_v1 = 10;
        goto LAB_00315864;
      }
      temp_v1 = FUN_001656a0(0);
      puVar3 = g_bustupViewer;
      if (temp_v1 != 0) {
        if (temp_v6) {
          if ((int)puVar2[0x10] < 0) {
            puVar2[0x10] = puVar2[0x10] + 1;
          }
          return 0;
        }
        FUN_002e6dd0(temp_v11,0x80);
        if (puVar3[3] != 3) {
          if (puVar3[3] != 4) {
            temp_v1 = puVar3[6];
            FUN_00283498();
            if ((temp_v1 != 0) && (temp_v1 = FUN_0019e378(), temp_v1 != 0)) {
              if (puVar3[3] != 2) {
LAB_0031526c:
                if (puVar3[3] == 3) goto LAB_003152b4;
                goto LAB_00315308;
              }
              temp_v1 = puVar3[0xb];
              FUN_00283498();
              if (temp_v1 != 0) {
                temp_v1 = FUN_0019e378();
                temp_v6 = temp_v1 != 0;
                temp_v1 = 0;
                if (temp_v6) {
                  temp_v1 = puVar3[6];
                }
                temp_v7 = temp_v1 != 0;
                if (temp_v6 && temp_v7) {
                  temp_v1 = puVar3[0xb];
                }
                if ((temp_v6 && temp_v7) && temp_v1 != 0) goto LAB_0031526c;
              }
            }
          }
          else {
LAB_00315314:
            temp_v1 = (int)(short)puVar3[8];
            FUN_0026812c();
            if (temp_v1 == 1) {
LAB_0031532c:
              if ((unsigned int)puVar3[3] >= 2) {
                if (puVar3[3] != 2) {
LAB_003153fc:
                  *(unsigned char *)(puVar3 + 0x11) = 1;
                  FUN_0035bea0();
                  bustupCutAnimStopJob();
                  temp_v1 = 0;
                  do {
                    temp_v4 = (int)(short)temp_v1;
                    FUN_0028520c();
                    if (temp_v4 != 0) {
                      FUN_0023a55c();
                    }
                    temp_v1 = temp_v1 + 1;
                  } while (temp_v1 < 0x40);
                  FUN_002ef750();
                  FUN_0037d038(0,puVar3[5]);
                  temp_v1 = puVar3[3];
                  if (temp_v1 == 3) {
                    temp_v10 = 0x42c80000;
                    temp_v1 = 0;
                    do {
                      temp_v4 = temp_v1 * 5;
                      FUN_0037d038(temp_v4 + 1,(int)*(char *)((int)puVar3 + temp_v1 + 100));
                      FUN_0037d038(temp_v4 + 2,puVar3[temp_v1 + 0x15]);
                      FUN_0037d038(temp_v4 + 3,puVar3[temp_v1 + 0x1a]);
                      FUN_0037d038(temp_v4 + 4,puVar3[temp_v1 + 0x1e]);
                      FUN_0037d038(temp_v4 + 5,(int)((float)puVar3[temp_v1 + 0x22] * (float)temp_v10));
                      temp_v1 = temp_v1 + 1;
                    } while (temp_v1 < 4);
                  }
                  else {
                    if (temp_v1 == 4) {
                      temp_v5 = puVar3[8];
                      temp_v2 = 1;
                    }
                    else {
                      temp_v5 = puVar3[6];
                      temp_v2 = 1;
                      if (temp_v1 == 2) {
                        FUN_0037d038(1,temp_v5);
                        temp_v5 = puVar3[0xb];
                        temp_v2 = 2;
                      }
                      FUN_0037d038(temp_v2,temp_v5);
                      FUN_0037d038(3,puVar3[7]);
                      FUN_0037d038(4,puVar3[0xc]);
                      FUN_0037d038(5,puVar3[9]);
                      FUN_0037d038(6,puVar3[10]);
                      FUN_0037d038(7,puVar3[0xd]);
                      FUN_0037d038(8,puVar3[0xe]);
                      if (puVar3[3] == 1) {
                        temp_v1 = 0x588ff4;
                        temp_v5 = *(unsigned int *)(temp_v1 + puVar3[0xf] * 4);
                      }
                      else if (puVar3[3] == 2) {
                        temp_v1 = 0x58905c;
                        temp_v5 = *(unsigned int *)(temp_v1 + puVar3[0xf] * 4);
                      }
                      else {
                        temp_v5 = 0;
                      }
                      temp_v2 = 9;
                    }
                    FUN_0037d038(temp_v2,temp_v5);
                  }
                  temp_v1 = puVar3[3];
                  if (temp_v1 != 0) {
                    if (temp_v1 != 1) {
                      if (temp_v1 != 2) {
                        if (temp_v1 != 3) {
                          FUN_00100388(temp_v11,&LAB_00315760);
                        }
                        else {
                          FUN_00100388(temp_v11,&LAB_003157a4);
                        }
                      }
                      else {
                        FUN_00100388(temp_v11,&LAB_00315794);
                      }
                    }
                    else {
                      FUN_00100388(temp_v11,&LAB_00315784);
                    }
                  }
                  else {
                    FUN_00100388(temp_v11,&LAB_00315774);
                  }
                  temp_v1 = puVar3[0x27];
                  if (temp_v1 == 0) {
                    temp_v1 = puVar3[0x26];
                    FUN_00275bc8(temp_v1,0);
                    puVar3[0x27] = temp_v1;
                  }
                  *(unsigned int *)(temp_v1 + 0x108) = 2;
                  temp_v2 = FUN_00357bc8(puVar3[0x26],temp_v11);
                  FUN_00275f44(puVar3[0x27],temp_v2);
LAB_0031585c:
                  if ((int)puVar2[0x10] < 0) {
                    puVar2[0x10] = puVar2[0x10] + 1;
                  }
                  return 0;
                }
                temp_v1 = puVar3[6];
                FUN_00283498();
                if ((temp_v1 == 0) ||
                   (temp_v1 = dataTableGet(0x19,*(unsigned char *)(temp_v1 + 0x26)),
                   (unsigned int)puVar3[7] <= (*(int *)(temp_v1 + 4) - 4U) >> 2)) {
                  temp_v1 = puVar3[0xb];
                  FUN_00283498();
                  if ((temp_v1 == 0) ||
                     (temp_v1 = dataTableGet(0x19,*(unsigned char *)(temp_v1 + 0x26)),
                     (unsigned int)puVar3[0xc] <= (*(int *)(temp_v1 + 4) - 4U) >> 2)) goto LAB_003153fc;
                }
              }
              else {
                temp_v1 = puVar3[6];
                FUN_00283498();
                if ((temp_v1 == 0) ||
                   (temp_v1 = dataTableGet(0x19,*(unsigned char *)(temp_v1 + 0x26)),
                   (unsigned int)puVar3[7] <= (*(int *)(temp_v1 + 4) - 4U) >> 2)) goto LAB_003153fc;
              }
            }
          }
        }
        else {
LAB_003152b4:
          temp_v3 = puVar3[puVar3[0x14] + 0x15];
          if (*(char *)((int)puVar3 + puVar3[0x14] + 100) != '\0') {
            FUN_00283498();
            temp_v0 = 0;
            if (temp_v3 != 0) {
              temp_v0 = *(short *)(temp_v3 + 0x22);
            }
            if (temp_v3 != 0 && temp_v0 != 0) {
LAB_00315308:
              if (puVar3[3] == 4) goto LAB_00315314;
              goto LAB_0031532c;
            }
          }
          else {
            temp_v3 = temp_v3 & 0xffff;
            FUN_0019cac4();
            if ((temp_v3 != 0) && (0 < *(short *)(temp_v3 + 0x8c))) goto LAB_00315308;
          }
        }
        puVar3[0x10] = 0xffffffe2;
        if ((int)puVar2[0x10] < 0) {
          puVar2[0x10] = puVar2[0x10] + 1;
        }
        return 0;
      }
      temp_v1 = FUN_001656a0(10);
      if (temp_v1 == 0) {
        if ((int)puVar2[0x10] < 0) {
          puVar2[0x10] = puVar2[0x10] + 1;
        }
        return 0;
      }
      FUN_003d209c();
      FUN_0028c258();
    }
  }
  if ((int)puVar2[0x10] < 0) {
    puVar2[0x10] = puVar2[0x10] + 1;
  }
  return 0;
LAB_00315854:
  if (temp_v3 < 2 || temp_v3 == 7) goto LAB_0031585c;
  goto LAB_0031565c;
}

} /* extern "C" */
