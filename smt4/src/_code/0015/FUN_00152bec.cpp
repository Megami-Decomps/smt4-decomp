/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152bec` (_code @ 0x152bec, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2dc8(unsigned int);
int FUN_002abb24(unsigned int, unsigned int);
int nw_gfx_SceneNode_AttachChild(unsigned int, int);

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned int DAT_00464b88; /* 0x464b88 */
extern unsigned int DAT_00464b8c; /* 0x464b8c */
extern int DAT_00464b90; /* 0x464b90 */
extern int DAT_00464b94; /* 0x464b94 */
extern int DAT_00464b98; /* 0x464b98 */
extern int DAT_004dad80; /* 0x4dad80 */
extern unsigned char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */
extern int DAT_004dad98; /* 0x4dad98 */

/* Supplied declaration required: FUN_002a2dc8. */
/* Supplied declaration required: FUN_002abb24. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


void FUN_00152bec(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int *piVar8;
  int temp_v5;
  int *piVar10;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  *param_1 = *param_1 | 0x200000;
  temp_v0 = param_1[2];
  piVar2 = *(int **)(temp_v0 + 0x14);
  if (piVar2 == (int *)0x0) {
    temp_v4 = *(int *)(temp_v0 + 0xc);
    piVar2 = (int *)&DAT_00464b8c;
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        temp_v1 = 0;
        temp_v6 = DAT_00464b94;
        FUN_002a2dc8(temp_v1);
      }
      else {
        temp_v6 = DAT_00464b90;
        if (temp_v4 != 4) {
          if (temp_v4 != 5) {
            return;
          }
          temp_v1 = 1;
          temp_v6 = DAT_00464b98;
          FUN_002a2dc8(temp_v1);
        }
      }
    }
    else {
      temp_v6 = *piVar2;
    }
  }
  else {
    temp_v6 = *piVar2;
  }
  if (temp_v6 == 0) {
    return;
  }
  temp_v4 = -1;
  temp_v6 = *(int *)(**(int **)(temp_v0 + 0x24) + 0xc);
  if (DAT_00464b94 == temp_v6) {
    temp_v4 = 0;
  }
  else if (DAT_00464b98 == temp_v6) {
    temp_v4 = 1;
  }
  temp_v8 = 0;
  if (temp_v8 < *(int *)(temp_v0 + 0x28)) {
    do {
      temp_v5 = *(int *)(*(int *)(temp_v0 + 0x24) + temp_v8 * 4);
      temp_v2 = *(int *)(temp_v5 + 0xc);
      if (temp_v2 != 0) {
        piVar2 = *(int **)(temp_v2 + 0x18);
        piVar10 = *(int **)(temp_v2 + 0x1c);
        temp_v3 = temp_v2;
        while( 1 ) {
          if (piVar2 != piVar10) {
            temp_v3 = *piVar2;
          }
          if (piVar2 == piVar10 || temp_v3 == temp_v5) break;
          piVar2 = piVar2 + 1;
        }
        if (piVar2 != piVar10) {
          piVar7 = piVar2 + 1;
          temp_v3 = (int)piVar10 - (int)piVar7;
          if (0 < temp_v3 >> 2) {
            piVar10 = piVar2;
            if (temp_v3 * 0x20000000 < 0) {
              temp_v7 = *piVar7;
              piVar7 = piVar2 + 2;
              if (temp_v7 != temp_v5) {
                piVar10 = piVar2 + 1;
                *piVar2 = temp_v7;
              }
            }
            piVar2 = piVar10;
            for (temp_v3 = temp_v3 >> 3; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
              piVar10 = piVar2;
              if (*piVar7 != temp_v5) {
                piVar10 = piVar2 + 1;
                *piVar2 = *piVar7;
              }
              piVar8 = piVar7 + 1;
              piVar7 = piVar7 + 2;
              piVar2 = piVar10;
              if (*piVar8 != temp_v5) {
                piVar2 = piVar10 + 1;
                *piVar10 = *piVar8;
              }
            }
          }
        }
        piVar10 = *(int **)(temp_v2 + 0x1c);
        *(int **)(temp_v2 + 0x1c) = piVar2;
        if (piVar10 != piVar2) {
          *(unsigned int *)(temp_v5 + 0xc) = 0;
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < *(int *)(temp_v0 + 0x28));
  }
  if ((-1 < temp_v4) && (*(int *)(temp_v6 + 0x18) == *(int *)(temp_v6 + 0x1c))) {
    (&DAT_004dad84)[temp_v4 * 0x18] = 0;
    (&DAT_004dad85)[temp_v4 * 0x18] = 0;
    nw_gfx_SceneNode_AttachChild((&DAT_00464b84)[temp_v4],(&DAT_00464b94)[temp_v4]);
    FUN_002abb24((&DAT_00464b7c)[temp_v4],(&DAT_00464b84)[temp_v4]);
  }
  if (*(int *)(temp_v0 + 0x14) != 0) {
    if (*(int *)(*(int *)(temp_v0 + 0x14) + 8) == 0) {
      FUN_002abb24(DAT_00464b7c,DAT_00464b84);
      DAT_004dad80 = DAT_004dad80 - 1;
    }
    else {
      FUN_002abb24(DAT_00464b80,DAT_00464b88);
      DAT_004dad98 = DAT_004dad98 - 1;
    }
  }
  else if (*(int *)(temp_v0 + 0xc) < 3) {
    FUN_002abb24(DAT_00464b7c,DAT_00464b84);
    DAT_004dad80 = DAT_004dad80 - 1;
  }
  else {
    FUN_002abb24(DAT_00464b80,DAT_00464b88);
    DAT_004dad98 = DAT_004dad98 - 1;
  }
  temp_v4 = *(int *)(temp_v0 + 0x14);
  if (temp_v4 != 0) {
    *(unsigned int *)(temp_v0 + 0x10) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 0xffffffff;
    *(int *)(temp_v0 + 0x18) = temp_v4;
    return;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0xc);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x10) = temp_v1;
  return;
}

} /* extern "C" */
