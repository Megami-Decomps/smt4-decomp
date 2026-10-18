/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001182dc` (_code @ 0x1182dc, 0x198 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern signed char DAT_00464af0; /* 0x464af0 */
extern unsigned int DAT_00464b08; /* 0x464b08 */
extern unsigned int DAT_00464b1c; /* 0x464b1c */
extern unsigned int DAT_00464b78; /* 0x464b78 */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern int DAT_00464b88; /* 0x464b88 */
extern int DAT_00464b90; /* 0x464b90 */
extern int DAT_00464bb8; /* 0x464bb8 */
extern int DAT_004dad98; /* 0x4dad98 */
extern signed char DAT_004dad9c; /* 0x4dad9c */
extern signed char DAT_004dad9d; /* 0x4dad9d */
extern signed char DAT_004dadac; /* 0x4dadac */

/* Supplied declaration required: FUN_00131bbc. */
/* Supplied declaration required: FUN_00132240. */
/* Supplied declaration required: FUN_001324e8. */
/* Supplied declaration required: FUN_002abdb0. */
/* Supplied declaration required: FUN_002b77b8. */
/* Supplied declaration required: FUN_002b780c. */
/* Supplied declaration required: FUN_002c028c. */
/* Supplied declaration required: FUN_002c3c18. */


/* WARNING: Removing unreachable block (ram,0x00118450) */
/* WARNING: Removing unreachable block (ram,0x00118454) */

void FUN_001182dc(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((DAT_00464af0 != '\0') && ((0 < DAT_004dad98 || ((DAT_00464b78 & 1) != 0)))) {
    temp_v2 = *(unsigned int *)(DAT_00464bb8 + 4);
    FUN_001324e8(DAT_00464bb8,DAT_00464b80,DAT_00464b1c,1);
    temp_v0 = DAT_00464b88;
    if ((DAT_004dad9c != '\0') && (DAT_004dad9d == '\0')) {
      temp_v1 = DAT_00464b90;
      piVar4 = *(int **)(DAT_00464b88 + 0x1c);
      for (piVar2 = *(int **)(DAT_00464b88 + 0x18); (piVar2 != piVar4 && (*piVar2 != DAT_00464b90));
          piVar2 = piVar2 + 1) {
      }
      piVar3 = piVar2;
      if (piVar2 != piVar4) {
        piVar3 = piVar2 + 1;
        FUN_002b780c(piVar3,piVar4,piVar2,&temp_v1);
      }
      piVar2 = *(int **)(temp_v0 + 0x1c);
      *(int **)(temp_v0 + 0x1c) = piVar3;
      if (piVar2 != piVar3) {
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
      FUN_002abdb0(DAT_00464b80,DAT_00464b88);
    }
    if (DAT_004dadac == '\0') {
      FUN_00131bbc(DAT_00464bb8,DAT_00464b80,1);
    }
    if ((DAT_004dad9c != '\0') && (DAT_004dad9d == '\0')) {
      FUN_002c028c(DAT_00464b88,DAT_00464b90);
      FUN_002abdb0(DAT_00464b80,DAT_00464b88);
    }
    FUN_00132240(DAT_00464bb8,DAT_00464b1c,2,0);
    FUN_002b77b8(temp_v2);
    FUN_002c3c18(DAT_0044ea00);
    DAT_00464b08 = 0;
  }
  return;
}
