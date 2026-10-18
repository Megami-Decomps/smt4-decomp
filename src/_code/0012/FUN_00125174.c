/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125174` (_code @ 0x125174, 0xa98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned int DAT_00464af8; /* 0x464af8 */
extern unsigned int DAT_00464afc; /* 0x464afc */
extern int DAT_00464b0c; /* 0x464b0c */
extern int DAT_00464b10; /* 0x464b10 */
extern unsigned int DAT_00464b14; /* 0x464b14 */
extern unsigned int DAT_00464b18; /* 0x464b18 */
extern int DAT_00464b1c; /* 0x464b1c */
extern unsigned int DAT_00464b34; /* 0x464b34 */
extern unsigned int DAT_00464b74; /* 0x464b74 */
extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned int DAT_00464b8c; /* 0x464b8c */
extern unsigned int DAT_00464b94; /* 0x464b94 */
extern unsigned int DAT_00464ba4; /* 0x464ba4 */
extern unsigned int DAT_00464bac; /* 0x464bac */
extern unsigned int DAT_00464bb4; /* 0x464bb4 */
extern int DAT_004dad80; /* 0x4dad80 */
extern unsigned char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */
extern unsigned char DAT_004dad94; /* 0x4dad94 */
extern int DAT_004dad98; /* 0x4dad98 */

/* Supplied declaration required: FUN_00131950. */
/* Supplied declaration required: FUN_00140b2c. */
/* Supplied declaration required: FUN_00141388. */
extern int FUN_00145774(void);
/* Supplied declaration required: FUN_002af0bc. */
extern int FUN_002af528(int, int);
/* Supplied declaration required: FUN_002af604. */
/* Supplied declaration required: FUN_002b780c. */
/* Supplied declaration required: FUN_002c2b34. */
/* Supplied declaration required: FUN_002c5218. */
extern int FUN_002c540c(void);


void FUN_00125174(unsigned int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 7 goto(s); 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  int *piVar5;
  unsigned int temp_v2;
  int *piVar7;
  int *piVar8;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  
  temp_v3 = DAT_00464b10;
  temp_v5 = 0.017453292f;
  if (0 < DAT_004dad80) {
    if ((DAT_00464af8 & 1) != 0) {
      temp_v0 = FUN_002c5218();
      puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(temp_v3 + 0x260) + 0x10))();
      if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
        puVar2 = (unsigned int *)0x0;
      }
      puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
      puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
      puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
      puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * temp_v5);
    }
    else {
      FUN_00140b2c(DAT_00464b10,0);
    }
  }
  temp_v3 = DAT_00464b1c;
  if (0 < DAT_004dad98) {
    if ((DAT_00464af8 & 2) != 0) {
      temp_v0 = FUN_00145774();
      puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(temp_v3 + 0x260) + 0x10))();
      if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x20000000) == 0)) {
        puVar2 = (unsigned int *)0x0;
      }
      puVar2[3] = *(unsigned int *)(temp_v0 + 0x34);
      puVar2[1] = *(unsigned int *)(temp_v0 + 0x2c);
      puVar2[2] = *(unsigned int *)(temp_v0 + 0x30);
      puVar2[4] = (unsigned int)(*(float *)(temp_v0 + 0x28) * temp_v5);
    }
    else {
      FUN_00140b2c(DAT_00464b1c,1);
    }
  }
  temp_v3 = 0;
  do {
    temp_v0 = temp_v3 * 0x18;
    if ((0 < (&DAT_004dad80)[temp_v3 * 6]) || (((&DAT_00464b74)[temp_v3] & 1) != 0)) {
      if ((&DAT_004dad84)[temp_v0] != '\0') {
        if ((&DAT_004dad85)[temp_v0] == '\0') {
          temp_v1 = (&DAT_00464b84)[temp_v3];
          piVar8 = (int *)(&DAT_00464b8c)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_002b780c();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          piVar8 = (int *)(&DAT_00464ba4)[temp_v3];
          temp_v1 = (&DAT_00464b84)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_002b780c();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          piVar8 = (int *)(&DAT_00464bac)[temp_v3];
          temp_v1 = (&DAT_00464b84)[temp_v3];
          piVar4 = *(int **)(temp_v1 + 0x18);
          piVar7 = *(int **)(temp_v1 + 0x1c);
          while( 1 ) {
            if (piVar4 != piVar7) {
              param_3 = (int *)*piVar4;
            }
            if (piVar4 == piVar7 || param_3 == piVar8) break;
            piVar4 = piVar4 + 1;
          }
          piVar5 = piVar4;
          if (piVar4 != piVar7) {
            piVar5 = piVar4 + 1;
            FUN_002b780c();
            param_3 = piVar4;
          }
          piVar4 = *(int **)(temp_v1 + 0x1c);
          *(int **)(temp_v1 + 0x1c) = piVar5;
          if (piVar4 != piVar5) {
            piVar8[3] = 0;
          }
          FUN_002c2b34((&DAT_00464b7c)[temp_v3],(&DAT_00464b84)[temp_v3]);
        }
      }
      else if ((&DAT_004dad94)[temp_v0] != '\0') {
        temp_v1 = (&DAT_00464b84)[temp_v3];
        temp_v4 = (&DAT_00464b94)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == (int *)temp_v4) break;
          piVar4 = piVar4 + 1;
        }
        piVar8 = piVar4;
        if (piVar4 != piVar7) {
          piVar8 = piVar4 + 1;
          FUN_002b780c();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar8;
        if (piVar4 != piVar8) {
          *(unsigned int *)(temp_v4 + 0xc) = 0;
        }
        temp_v1 = (&DAT_00464b84)[temp_v3];
        piVar8 = (int *)(&DAT_00464b8c)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_002b780c();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        piVar8 = (int *)(&DAT_00464ba4)[temp_v3];
        temp_v1 = (&DAT_00464b84)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_002b780c();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        piVar8 = (int *)(&DAT_00464bac)[temp_v3];
        temp_v1 = (&DAT_00464b84)[temp_v3];
        piVar4 = *(int **)(temp_v1 + 0x18);
        piVar7 = *(int **)(temp_v1 + 0x1c);
        while( 1 ) {
          if (piVar4 != piVar7) {
            param_3 = (int *)*piVar4;
          }
          if (piVar4 == piVar7 || param_3 == piVar8) break;
          piVar4 = piVar4 + 1;
        }
        piVar5 = piVar4;
        if (piVar4 != piVar7) {
          piVar5 = piVar4 + 1;
          FUN_002b780c();
          param_3 = piVar4;
        }
        piVar4 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar5;
        if (piVar4 != piVar5) {
          piVar8[3] = 0;
        }
        FUN_002c2b34((&DAT_00464b7c)[temp_v3],(&DAT_00464b84)[temp_v3]);
      }
      FUN_00131950((&DAT_00464b7c)[temp_v3]);
      if ((&DAT_004dad84)[temp_v0] != '\0') {
        if ((&DAT_004dad85)[temp_v0] == '\0') {
          temp_v4 = (&DAT_00464b84)[temp_v3];
          temp_v1 = (&DAT_00464b8c)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_001256ec;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_001256ec:
          temp_v4 = (&DAT_00464b84)[temp_v3];
          temp_v1 = (&DAT_00464ba4)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_001257a8;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_001257a8:
          temp_v4 = (&DAT_00464b84)[temp_v3];
          temp_v1 = (&DAT_00464bac)[temp_v3];
          temp_v0 = *(int *)(temp_v4 + 0xc);
          if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
             (*(int *)(temp_v1 + 0xc) == 0)) {
            param_3 = *(int **)(temp_v4 + 0x18);
            temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
            temp_v0 = 1;
            if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
              if (temp_v2 != 0) {
                temp_v0 = temp_v2 << 1;
              }
              else {
                temp_v0 = 1;
              }
              temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
              if (temp_v0 == 0) goto LAB_00125b60;
            }
            if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
              **(int **)(temp_v4 + 0x1c) = temp_v1;
            }
            *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
            if (temp_v0 != 0) {
              *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
            }
          }
LAB_00125b60:
          FUN_002c2b34((&DAT_00464b7c)[temp_v3],(&DAT_00464b84)[temp_v3]);
        }
      }
      else if ((&DAT_004dad94)[temp_v0] != '\0') {
        temp_v4 = (&DAT_00464b84)[temp_v3];
        temp_v1 = (&DAT_00464b94)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00125930;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_00125930:
        temp_v4 = (&DAT_00464b84)[temp_v3];
        temp_v1 = (&DAT_00464b8c)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_001259e8;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_001259e8:
        temp_v4 = (&DAT_00464b84)[temp_v3];
        temp_v1 = (&DAT_00464ba4)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00125aa4;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
LAB_00125aa4:
        temp_v4 = (&DAT_00464b84)[temp_v3];
        temp_v1 = (&DAT_00464bac)[temp_v3];
        temp_v0 = *(int *)(temp_v4 + 0xc);
        if (((temp_v0 == 0) || ((temp_v0 != temp_v1 && (FUN_002af604(), temp_v0 == 0)))) &&
           (*(int *)(temp_v1 + 0xc) == 0)) {
          param_3 = *(int **)(temp_v4 + 0x18);
          temp_v2 = *(unsigned int *)(temp_v4 + 0x20) & 0x3fffffff;
          temp_v0 = 1;
          if ((int)temp_v2 <= (*(int *)(temp_v4 + 0x1c) - (int)param_3) >> 2) {
            if (temp_v2 != 0) {
              temp_v0 = temp_v2 << 1;
            }
            else {
              temp_v0 = 1;
            }
            temp_v0 = FUN_002af528(temp_v4 + 0x14,temp_v0);
            if (temp_v0 == 0) goto LAB_00125b60;
          }
          if (*(int **)(temp_v4 + 0x1c) != (int *)0x0) {
            **(int **)(temp_v4 + 0x1c) = temp_v1;
          }
          *(int *)(temp_v4 + 0x1c) = *(int *)(temp_v4 + 0x1c) + 4;
          if (temp_v0 != 0) {
            *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0x10);
          }
        }
        FUN_002c2b34((&DAT_00464b7c)[temp_v3],(&DAT_00464b84)[temp_v3]);
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 2) {
      if (0 < DAT_004dad80) {
        FUN_002af0bc(DAT_00464b34);
        FUN_002af0bc(DAT_00464b10);
      }
      if (0 < DAT_004dad98) {
        FUN_002af0bc(DAT_00464b1c);
      }
      if ((0 < DAT_004dad80) && (temp_v3 = FUN_002c540c(), temp_v3 == 1)) {
        FUN_002c5218();
        FUN_00141388(DAT_00464bb4,DAT_00464b14,DAT_00464b18,DAT_00464b10);
      }
      DAT_00464afc = 0;
      DAT_00464b0c = DAT_00464b0c + 1;
      return;
    }
  } while( 1 );
}
