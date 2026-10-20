/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2140` (_code @ 0x3d2140, 0x76c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227218(void);
int FUN_002276f8(...);
int FUN_0022a304(void);
int FUN_0027dd9c(...);
int FUN_0027de24(...);
int FUN_002c1dd8(...);
int FUN_003af1c4(...);
int FUN_003da0bc(...);
int nw_snd_SoundHeap_LoadState(...);

int btlAiScriptCall(unsigned int *);
int FUN_001d2710(...);
int FUN_00227ab4(...);
int FUN_00227b14(int *, int, int, int);
int FUN_00229098(int *);
int FUN_002296f4(...);
int FUN_00229c5c(int *, int, int);
int FUN_00244fb0(...);
int FUN_00246454(int, unsigned int *, unsigned int *);
int FUN_00256898(...);
int FUN_002569ac(...);
int FUN_0026beb4(...);
int FUN_0027e3f8(...);
int FUN_00292dd0(int);
int FUN_002a8764(void);
int FUN_002b8838(...);
int memClear(int, int);
int FUN_0033a780(...);
int FUN_003ae8ec(int *);
int FUN_003ca32c(...);
int FUN_003ca4b0(...);
int FUN_003ca6c4(int *, unsigned int *);
int FUN_003cf94c(...);
int FUN_003d3944(int *, unsigned int *);
int FUN_003d3ba8(...);
int FUN_003d647c(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *g_btlEvent; /* 0x435d48 */
extern int *DAT_00439ca8; /* 0x439ca8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: btlAiScriptCall. */
/* Supplied declaration required: FUN_001d2710. */
/* Supplied declaration required: FUN_00227218. */
/* Supplied declaration required: FUN_002276f8. */
/* Supplied declaration required: FUN_00227ab4. */
/* Supplied declaration required: FUN_00227b14. */
/* Supplied declaration required: FUN_00229098. */
/* Supplied declaration required: FUN_002296f4. */
/* Supplied declaration required: FUN_00229c5c. */
/* Supplied declaration required: FUN_0022a304. */
extern int *FUN_0023eb7c(void);
/* Supplied declaration required: FUN_00244fb0. */
/* Supplied declaration required: FUN_00246454. */
extern unsigned int FUN_002542ec(int);
/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002569ac. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: FUN_0027dd9c. */
/* Supplied declaration required: FUN_0027de24. */
extern int *FUN_0027e3b8(unsigned int *);
/* Supplied declaration required: FUN_0027e3f8. */
/* Supplied declaration required: FUN_00292dd0. */
extern int *FUN_00293230(int);
/* Supplied declaration required: FUN_002a8764. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002b898c(void);
/* Supplied declaration required: FUN_002c1dd8. */
/* Supplied declaration required: memClear. */
extern int *jyoucyuGetTableEntry(unsigned int);
extern int FUN_002e14e4(unsigned int);
/* Supplied declaration required: FUN_0033a780. */
/* Supplied declaration required: FUN_003ae8ec. */
/* Supplied declaration required: FUN_003af1c4. */
extern int FUN_003c8850(void);
/* Supplied declaration required: FUN_003ca32c. */
/* Supplied declaration required: FUN_003ca4b0. */
/* Supplied declaration required: FUN_003ca6c4. */
/* Supplied declaration required: FUN_003cf94c. */
/* Supplied declaration required: FUN_003d3944. */
/* Supplied declaration required: FUN_003d3ba8. */
/* Supplied declaration required: FUN_003d647c. */
/* Supplied declaration required: FUN_003da0bc. */
extern int *FUN_003dbb40(int);
extern int *FUN_003ddcf4(unsigned int, unsigned int *, int, unsigned int);
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


int * FUN_003d2140(int *param_1,unsigned int param_2)

{
/* irregular: 3 goto(s); 35 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v5;
  int *piVar11;
  
  piVar11 = (int *)*param_1;
  piVar2 = (int *)piVar11[0x21];
  temp_v2 = g_btlScriptUnit + (int)piVar2 * 0xf1c;
  puVar8 = (unsigned int *)(temp_v2 + 4);
  switch(param_2) {
  case 1:
    if ((piVar11[0x1128] & 0x40U) != 0) {
      temp_v3 = *puVar8 | 0x80;
      *puVar8 = temp_v3;
    }
    else {
      temp_v3 = *puVar8;
      if ((piVar11[0x1128] & 0x100U) != 0) {
        temp_v3 = temp_v3 | 0x1000;
        *puVar8 = temp_v3;
      }
    }
    if ((temp_v3 & 0x800) == 0) {
      piVar2 = DAT_00439ca8;
      FUN_00229c5c(DAT_00439ca8,*(unsigned short *)(temp_v2 + 0x30),1);
      return piVar2;
    }
    FUN_00227b14(DAT_00439ca8,*(unsigned short *)(temp_v2 + 0x30),
                 (int)*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c),1);
    piVar2 = (int *)0x0;
    *puVar8 = *puVar8 & 0xfffff7ff;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
    break;
  case 2:
    btlAiScriptCall(puVar8);
    memClear(temp_v2 + 0x3c,0x85);
    FUN_00229098(param_1);
    temp_v2 = FUN_002b898c();
    piVar2 = (int *)FUN_00293230(*param_1);
    if (piVar2 != (int *)0x0) {
      if (temp_v2 != 0x3d) {
        piVar2 = (int *)0x3d;
        FUN_002b8838(0x3d);
        return piVar2;
      }
    }
    else if ((temp_v2 != 0xb3) && (temp_v2 != 0xb4)) {
      piVar2 = (int *)0x0;
      FUN_00292dd0(0);
      return piVar2;
    }
    break;
  case 3:
  case 0x11:
    memClear(temp_v2 + 0x3c,0x85);
    FUN_00229098(param_1);
    return param_1;
  case 5:
    FUN_003ca6c4(param_1,puVar8);
    return param_1;
  case 7:
    FUN_003ae8ec(DAT_00439ca8);
    memClear(temp_v2 + 0x3c,0x85);
    piVar2 = (int *)FUN_002a8764();
    return piVar2;
  case 8:
    temp_v2 = FUN_002a8764();
    temp_v4 = 0;
    do {
      puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v4 * 0x288);
      piVar2 = (int *)*puVar9;
      if (((unsigned int)piVar2 & 1) != 0 && ((unsigned int)piVar2 & 8) != 0) {
        temp_v5 = 0;
        do {
          if ((-1 < *(char *)(temp_v2 + temp_v5 + 0x9108)) &&
             (temp_v3 = FUN_002542ec(temp_v5),
             *(short *)(temp_v3 + 0x46) == *(short *)((int)puVar9 + 0xce))) {
            puVar9[0x9f] = temp_v3;
            piVar2 = (int *)FUN_0023eb7c();
            *(short *)(puVar9 + 0x35) = (short)(int)piVar2;
            goto LAB_003d243c;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 3);
        piVar2 = (int *)0x0;
        FUN_00246454(0,puVar8,puVar9);
      }
LAB_003d243c:
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 4) {
        return piVar2;
      }
    } while( 1 );
  case 0xb:
    FUN_003d3944(param_1,puVar8);
    return param_1;
  case 0xc:
    FUN_00244fb0(piVar11,0,1,10,0xff);
    return piVar11;
  case 0xd:
    FUN_0033a780(piVar11);
    FUN_003d647c(g_btlMain);
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    FUN_00256898(0,0);
    piVar2 = (int *)0xed;
    FUN_002b8838(0xed);
    return piVar2;
  case 0xe:
    FUN_003d3ba8(param_1,puVar8);
    return param_1;
  case 0xf:
    temp_v4 = -1;
    temp_v2 = 0;
    if ((piVar11[0x1128] & 0x200U) != 0) {
      do {
        puVar9 = (unsigned int *)(piVar11[0x7f0] + temp_v2 * 0x288);
        temp_v3 = *puVar9;
        if (((((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) && (-1 < (short)puVar9[2])) &&
           ((temp_v3 & 0x10) != 0)) {
          temp_v4 = (int)(short)puVar9[2];
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
    else {
      do {
        temp_v5 = (int)*(short *)(piVar11[0x7a6] + temp_v2 * 0x114 + 0x60);
        if ((-1 < temp_v5) && (*(char *)((int)puVar8 + temp_v5 + 0x38) != '\0')) {
          temp_v4 = (int)*(short *)(piVar11[0x7a6] + temp_v2 * 0x114 + 0x62);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
    FUN_001d2710(piVar11,puVar8,0,temp_v4);
    return piVar11;
  case 0x10:
    FUN_003cf94c(param_1,puVar8);
    return param_1;
  case 0x12:
    if ((*puVar8 & 0x1080) == 0) {
      temp_v1 = 0x32;
    }
    else {
      temp_v1 = 0;
    }
    FUN_0026beb4(temp_v1,puVar8,0,0,1);
    temp_v2 = FUN_003c8850();
    piVar2 = (int *)0x0;
    if (temp_v2 != 0) {
      piVar2 = (int *)FUN_003ddcf4(0,puVar8,temp_v2,0xffffffff);
      return piVar2;
    }
    break;
  case 0x13:
    temp_v0 = *(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c);
    if ((*puVar8 & 0x1080) == 0) {
      piVar2 = (int *)0x32;
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (temp_v0 == 6) {
      FUN_0026beb4(0,puVar8,1,*(unsigned int *)(temp_v2 + 0x28),1);
      FUN_002296f4(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    if (temp_v0 == 0xf) {
      FUN_0026beb4(piVar2,puVar8,0,*(unsigned int *)(temp_v2 + 0x28),1);
      FUN_002296f4(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    break;
  case 0x14:
    FUN_003ca4b0(param_1,puVar8);
    return param_1;
  case 0x18:
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) {
      temp_v4 = (int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e);
      if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) != 0xb) {
        puVar4 = g_btlEvent;
        FUN_0027e3f8(g_btlEvent,3,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        puVar4 = g_btlEvent;
        FUN_0027e3f8(g_btlEvent,7,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
code_r0x0027e38c:
      puVar4 = g_btlEvent;
      *g_btlEvent = 9;
      *(unsigned char *)(puVar4 + 0xb) = 0;
      piVar2 = (int *)(DAT_00435d18 + 0x2f98);
      *piVar2 = 0;
      return piVar2;
    }
    break;
  case 0x1c:
    FUN_002569ac(param_1,piVar2);
    FUN_00227ab4(param_1,puVar8);
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) goto code_r0x0027e38c;
    break;
  case 0x1f:
    piVar2 = (int *)FUN_003dbb40(DAT_00435d18);
    return piVar2;
  case 0x20:
    FUN_003ca32c(param_1,puVar8);
    return param_1;
  case 0x21:
    if ((*puVar8 & 0x10000) != 0) {
      if ((short)piVar11[0x7f1] < 1) {
        return (int *)(int)(short)piVar11[0x7f1];
      }
    }
    else {
      piVar2 = (int *)**(unsigned int **)(temp_v2 + 0x24);
      if (((unsigned int)piVar2 & 1) == 0) {
        return piVar2;
      }
      if (((unsigned int)piVar2 & 0x40) != 0) {
        return piVar2;
      }
    }
    piVar2 = (int *)FUN_0027e3b8(g_btlEvent);
    if (piVar2 == (int *)0x0) {
      puVar4 = g_btlEvent;
      FUN_0027e3f8(g_btlEvent,4,(int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e),0);
      piVar2 = (int *)0x0;
      if (puVar4 != (unsigned int *)0x0) goto code_r0x0027e38c;
    }
    break;
  case 0x23:
    temp_v4 = g_btlScriptUnit;
    if ((**(unsigned int **)(temp_v2 + 0x24) & 0x10) == 0) {
      FUN_003af1c4(DAT_00439ca8);
    }
    FUN_003da0bc(DAT_00435d18);
    FUN_002276f8(DAT_00435d18);
    *(unsigned int *)(DAT_00435d18 + 0x3028) = *(unsigned int *)(DAT_00435d18 + 0x3028) & 0xffff7fff;
    FUN_0022a304();
    FUN_0027de24(DAT_00435d18);
    FUN_0027dd9c(DAT_00435d18);
    *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) & 0xffffbfff;
    FUN_00227218();
    piVar2 = (int *)jyoucyuGetTableEntry(1);
    if (piVar2 == (int *)0x0) {
      FUN_002c1dd8(2);
      temp_v2 = FUN_002e14e4(2);
      piVar2 = (int *)0x0;
      if (DAT_004e316c != 0) {
        temp_v4 = *(int *)(DAT_004e316c + 0x10);
      }
      if (DAT_004e316c != 0 && temp_v4 != 0) {
        if (*(int *)(DAT_004e316c + 0x44) < temp_v2) {
          temp_v2 = *(int *)(DAT_004e316c + 0x44);
        }
        nw_snd_SoundHeap_LoadState(DAT_004e316c,temp_v2);
        piVar2 = (int *)0x1;
      }
      return piVar2;
    }
    return piVar2;
  }
  return piVar2;
}

} /* extern "C" */
