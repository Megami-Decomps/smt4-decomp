/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbaf8` (_code @ 0x2cbaf8, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b74cc(int *, int *, int *, int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00464b10; /* 0x464b10 */
extern int DAT_00464b1c; /* 0x464b1c */
extern int DAT_00464b20; /* 0x464b20 */
extern int DAT_00464b24; /* 0x464b24 */
extern int g_asdModelSlotArray0; /* 0x464b9c */
extern int DAT_00464ba0; /* 0x464ba0 */
extern unsigned int g_asdModelSlotArray3; /* 0x464bb4 */
extern unsigned int DAT_00464bbc; /* 0x464bbc */
extern unsigned int DAT_00464bc0; /* 0x464bc0 */

/* Supplied declaration required: FUN_002b74cc. */


void FUN_002cbaf8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = DAT_00464ba0;
  temp_v0 = g_asdModelSlotArray0;
  temp_v2 = *(int *)((&g_asdModelSlotArray3)[param_2] + 4);
  if (param_2 != 0) {
    if (param_2 == 1) {
      temp_v3 = DAT_00464b1c;
      piVar5 = *(int **)(DAT_00464ba0 + 0x1c);
      for (piVar3 = *(int **)(DAT_00464ba0 + 0x18); (piVar3 != piVar5 && (*piVar3 != DAT_00464b1c));
          piVar3 = piVar3 + 1) {
      }
      piVar4 = piVar3;
      if (piVar3 != piVar5) {
        piVar4 = piVar3 + 1;
        FUN_002b74cc(piVar4,piVar5,piVar3,&temp_v3);
      }
      piVar3 = *(int **)(temp_v1 + 0x1c);
      *(int **)(temp_v1 + 0x1c) = piVar4;
      if (piVar3 != piVar4) {
        *(unsigned int *)(temp_v3 + 0xc) = 0;
      }
      DAT_00464b24 = DAT_00464b1c;
      DAT_00464b1c = param_1;
      *(int *)(*(int *)(temp_v2 + 0xac) + 4) = param_1;
      DAT_00464bc0 = 1;
    }
    return;
  }
  temp_v3 = DAT_00464b10;
  piVar5 = *(int **)(g_asdModelSlotArray0 + 0x1c);
  for (piVar3 = *(int **)(g_asdModelSlotArray0 + 0x18); (piVar3 != piVar5 && (*piVar3 != DAT_00464b10));
      piVar3 = piVar3 + 1) {
  }
  piVar4 = piVar3;
  if (piVar3 != piVar5) {
    piVar4 = piVar3 + 1;
    FUN_002b74cc(piVar4,piVar5,piVar3,&temp_v3);
  }
  piVar3 = *(int **)(temp_v0 + 0x1c);
  *(int **)(temp_v0 + 0x1c) = piVar4;
  if (piVar3 != piVar4) {
    *(unsigned int *)(temp_v3 + 0xc) = 0;
  }
  DAT_00464b20 = DAT_00464b10;
  DAT_00464b10 = param_1;
  *(int *)(*(int *)(temp_v2 + 0xac) + 4) = param_1;
  DAT_00464bbc = 1;
  return;
}

} /* extern "C" */
