/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d236c` (_code @ 0x3d236c, 0x76c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *DAT_00435d48; /* 0x435d48 */
extern int *DAT_00439ca8; /* 0x439ca8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_0019da44. */
/* Supplied declaration required: FUN_001d2610. */
/* Supplied declaration required: FUN_002273ac. */
/* Supplied declaration required: FUN_0022788c. */
/* Supplied declaration required: FUN_00227c48. */
/* Supplied declaration required: FUN_00227ca8. */
/* Supplied declaration required: FUN_0022922c. */
/* Supplied declaration required: FUN_00229888. */
/* Supplied declaration required: FUN_00229df0. */
/* Supplied declaration required: FUN_0022a498. */
extern int *FUN_0023ecd8(void);
/* Supplied declaration required: FUN_0024511c. */
/* Supplied declaration required: FUN_002465c0. */
extern unsigned int FUN_0025452c(int);
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256bec. */
/* Supplied declaration required: FUN_0026c120. */
/* Supplied declaration required: FUN_0027e00c. */
/* Supplied declaration required: FUN_0027e094. */
extern int *FUN_0027e628(unsigned int *);
/* Supplied declaration required: FUN_0027e668. */
/* Supplied declaration required: FUN_00293074. */
extern int *FUN_002934d4(int);
/* Supplied declaration required: FUN_002a8a08. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002bd3fc. */
/* Supplied declaration required: FUN_002c1fa4. */
/* Supplied declaration required: FUN_002c4b30. */
extern int *FUN_002c583c(unsigned int);
extern int FUN_002e1470(unsigned int);
/* Supplied declaration required: FUN_0033a9b4. */
/* Supplied declaration required: FUN_003aeb0c. */
/* Supplied declaration required: FUN_003af3e4. */
extern int FUN_003c8a78(void);
/* Supplied declaration required: FUN_003ca558. */
/* Supplied declaration required: FUN_003ca6dc. */
/* Supplied declaration required: FUN_003ca8f0. */
/* Supplied declaration required: FUN_003cfb78. */
/* Supplied declaration required: FUN_003d3b70. */
/* Supplied declaration required: FUN_003d3dd4. */
/* Supplied declaration required: FUN_003d66a8. */
/* Supplied declaration required: FUN_003da2e8. */
extern int *FUN_003dbd6c(int);
extern int *FUN_003ddf20(unsigned int, unsigned int *, int, unsigned int);


int * FUN_003d236c(int *param_1,unsigned int param_2)

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
  temp_v2 = DAT_0043427c + (int)piVar2 * 0xf1c;
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
      FUN_00229df0(DAT_00439ca8,*(unsigned short *)(temp_v2 + 0x30),1);
      return piVar2;
    }
    FUN_00227ca8(DAT_00439ca8,*(unsigned short *)(temp_v2 + 0x30),
                 (int)*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c),1);
    piVar2 = (int *)0x0;
    *puVar8 = *puVar8 & 0xfffff7ff;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
    break;
  case 2:
    FUN_0019da44(puVar8);
    FUN_002c4b30(temp_v2 + 0x3c,0x85);
    FUN_0022922c(param_1);
    temp_v2 = FUN_002b8ccc();
    piVar2 = (int *)FUN_002934d4(*param_1);
    if (piVar2 != (int *)0x0) {
      if (temp_v2 != 0x3d) {
        piVar2 = (int *)0x3d;
        FUN_002b8b78(0x3d);
        return piVar2;
      }
    }
    else if ((temp_v2 != 0xb3) && (temp_v2 != 0xb4)) {
      piVar2 = (int *)0x0;
      FUN_00293074(0);
      return piVar2;
    }
    break;
  case 3:
  case 0x11:
    FUN_002c4b30(temp_v2 + 0x3c,0x85);
    FUN_0022922c(param_1);
    return param_1;
  case 5:
    FUN_003ca8f0(param_1,puVar8);
    return param_1;
  case 7:
    FUN_003aeb0c(DAT_00439ca8);
    FUN_002c4b30(temp_v2 + 0x3c,0x85);
    piVar2 = (int *)FUN_002a8a08();
    return piVar2;
  case 8:
    temp_v2 = FUN_002a8a08();
    temp_v4 = 0;
    do {
      puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v4 * 0x288);
      piVar2 = (int *)*puVar9;
      if (((unsigned int)piVar2 & 1) != 0 && ((unsigned int)piVar2 & 8) != 0) {
        temp_v5 = 0;
        do {
          if ((-1 < *(char *)(temp_v2 + temp_v5 + 0x9108)) &&
             (temp_v3 = FUN_0025452c(temp_v5),
             *(short *)(temp_v3 + 0x46) == *(short *)((int)puVar9 + 0xce))) {
            puVar9[0x9f] = temp_v3;
            piVar2 = (int *)FUN_0023ecd8();
            *(short *)(puVar9 + 0x35) = (short)piVar2;
            goto LAB_003d2668;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 3);
        piVar2 = (int *)0x0;
        FUN_002465c0(0,puVar8,puVar9);
      }
LAB_003d2668:
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 4) {
        return piVar2;
      }
    } while( 1 );
  case 0xb:
    FUN_003d3b70(param_1,puVar8);
    return param_1;
  case 0xc:
    FUN_0024511c(piVar11,0,1,10,0xff);
    return piVar11;
  case 0xd:
    FUN_0033a9b4(piVar11);
    FUN_003d66a8(DAT_004342c8);
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    FUN_00256ad8(0,0);
    piVar2 = (int *)0xed;
    FUN_002b8b78(0xed);
    return piVar2;
  case 0xe:
    FUN_003d3dd4(param_1,puVar8);
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
    FUN_001d2610(piVar11,puVar8,0,temp_v4);
    return piVar11;
  case 0x10:
    FUN_003cfb78(param_1,puVar8);
    return param_1;
  case 0x12:
    if ((*puVar8 & 0x1080) == 0) {
      temp_v1 = 0x32;
    }
    else {
      temp_v1 = 0;
    }
    FUN_0026c120(temp_v1,puVar8,0,0,1);
    temp_v2 = FUN_003c8a78();
    piVar2 = (int *)0x0;
    if (temp_v2 != 0) {
      piVar2 = (int *)FUN_003ddf20(0,puVar8,temp_v2,0xffffffff);
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
      FUN_0026c120(0,puVar8,1,*(unsigned int *)(temp_v2 + 0x28),1);
      FUN_00229888(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    if (temp_v0 == 0xf) {
      FUN_0026c120(piVar2,puVar8,0,*(unsigned int *)(temp_v2 + 0x28),1);
      FUN_00229888(param_1,puVar8,(int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x62),0,5,5);
      return param_1;
    }
    break;
  case 0x14:
    FUN_003ca6dc(param_1,puVar8);
    return param_1;
  case 0x18:
    piVar2 = (int *)FUN_0027e628(DAT_00435d48);
    if (piVar2 == (int *)0x0) {
      temp_v4 = (int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e);
      if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) != 0xb) {
        puVar4 = DAT_00435d48;
        FUN_0027e668(DAT_00435d48,3,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        puVar4 = DAT_00435d48;
        FUN_0027e668(DAT_00435d48,7,temp_v4,0);
        if (puVar4 == (unsigned int *)0x0) {
          return (int *)0x0;
        }
      }
code_r0x0027e5fc:
      puVar4 = DAT_00435d48;
      *DAT_00435d48 = 9;
      *(unsigned char *)(puVar4 + 0xb) = 0;
      piVar2 = (int *)(DAT_00435d18 + 0x2f98);
      *piVar2 = 0;
      return piVar2;
    }
    break;
  case 0x1c:
    FUN_00256bec(param_1,piVar2);
    FUN_00227c48(param_1,puVar8);
    piVar2 = (int *)FUN_0027e628(DAT_00435d48);
    if (piVar2 == (int *)0x0) goto code_r0x0027e5fc;
    break;
  case 0x1f:
    piVar2 = (int *)FUN_003dbd6c(DAT_00435d18);
    return piVar2;
  case 0x20:
    FUN_003ca558(param_1,puVar8);
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
    piVar2 = (int *)FUN_0027e628(DAT_00435d48);
    if (piVar2 == (int *)0x0) {
      puVar4 = DAT_00435d48;
      FUN_0027e668(DAT_00435d48,4,(int)*(short *)(*(int *)(temp_v2 + 0x24) + 0x6e),0);
      piVar2 = (int *)0x0;
      if (puVar4 != (unsigned int *)0x0) goto code_r0x0027e5fc;
    }
    break;
  case 0x23:
    temp_v4 = DAT_0043427c;
    if ((**(unsigned int **)(temp_v2 + 0x24) & 0x10) == 0) {
      FUN_003af3e4(DAT_00439ca8);
    }
    FUN_003da2e8(DAT_00435d18);
    FUN_0022788c(DAT_00435d18);
    *(unsigned int *)(DAT_00435d18 + 0x3028) = *(unsigned int *)(DAT_00435d18 + 0x3028) & 0xffff7fff;
    FUN_0022a498();
    FUN_0027e094(DAT_00435d18);
    FUN_0027e00c(DAT_00435d18);
    *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xffffbfff;
    FUN_002273ac();
    piVar2 = (int *)FUN_002c583c(1);
    if (piVar2 == (int *)0x0) {
      FUN_002c1fa4(2);
      temp_v2 = FUN_002e1470(2);
      piVar2 = (int *)0x0;
      if (DAT_004e316c != 0) {
        temp_v4 = *(int *)(DAT_004e316c + 0x10);
      }
      if (DAT_004e316c != 0 && temp_v4 != 0) {
        if (*(int *)(DAT_004e316c + 0x44) < temp_v2) {
          temp_v2 = *(int *)(DAT_004e316c + 0x44);
        }
        FUN_002bd3fc(DAT_004e316c,temp_v2);
        piVar2 = (int *)0x1;
      }
      return piVar2;
    }
    return piVar2;
  }
  return piVar2;
}
