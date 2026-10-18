/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c2cc` (_code @ 0x29c2cc, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464b10; /* 0x464b10 */
extern unsigned int DAT_00464b1c; /* 0x464b1c */
extern unsigned int DAT_00464b20; /* 0x464b20 */
extern unsigned int DAT_00464b24; /* 0x464b24 */
extern unsigned int DAT_00464b9c; /* 0x464b9c */
extern unsigned int DAT_00464ba0; /* 0x464ba0 */
extern unsigned int DAT_00464bb4; /* 0x464bb4 */
extern unsigned int DAT_00464bbc; /* 0x464bbc */
extern unsigned int DAT_00464bc0; /* 0x464bc0 */

/* Supplied declaration required: FUN_00153050. */
extern int FUN_002a31f4(int);
/* Supplied declaration required: FUN_002c00b4. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0029c2cc(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int temp_v3;
  int *piVar8;
  int temp_v4;
  
  temp_v0 = FUN_002a31f4(param_2);
  temp_v3 = *(int *)(param_1 + 0xc);
  piVar4 = *(int **)(temp_v0 + 0x18);
  piVar8 = *(int **)(temp_v0 + 0x1c);
  temp_v1 = temp_v0;
  while( 1 ) {
    if (piVar4 != piVar8) {
      temp_v1 = *piVar4;
    }
    if (piVar4 == piVar8 || temp_v1 == temp_v3) break;
    piVar4 = piVar4 + 1;
  }
  if (piVar4 != piVar8) {
    piVar5 = piVar4 + 1;
    temp_v1 = (int)piVar8 - (int)piVar5;
    if (0 < temp_v1 >> 2) {
      piVar8 = piVar4;
      if (temp_v1 * 0x20000000 < 0) {
        temp_v4 = *piVar5;
        piVar5 = piVar4 + 2;
        if (temp_v4 != temp_v3) {
          piVar8 = piVar4 + 1;
          *piVar4 = temp_v4;
        }
      }
      piVar4 = piVar8;
      for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
        piVar8 = piVar4;
        if (*piVar5 != temp_v3) {
          piVar8 = piVar4 + 1;
          *piVar4 = *piVar5;
        }
        piVar6 = piVar5 + 1;
        piVar5 = piVar5 + 2;
        piVar4 = piVar8;
        if (*piVar6 != temp_v3) {
          piVar4 = piVar8 + 1;
          *piVar8 = *piVar6;
        }
      }
    }
  }
  piVar8 = *(int **)(temp_v0 + 0x1c);
  *(int **)(temp_v0 + 0x1c) = piVar4;
  if (piVar8 != piVar4) {
    *(unsigned int *)(temp_v3 + 0xc) = 0;
  }
  if (param_2 == 0) {
    temp_v2 = 1;
    FUN_00153050(temp_v2);
  }
  else if (param_2 == 1) {
    temp_v2 = 2;
    FUN_00153050(temp_v2);
  }
  temp_v1 = *(int *)((&DAT_00464bb4)[param_2] + 4);
  if (param_2 != 0) {
    if (param_2 != 1) {
      return;
    }
    DAT_00464b1c = DAT_00464b24;
    FUN_002c00b4(DAT_00464ba0);
    **(unsigned int **)(temp_v1 + 0xac) = DAT_00464b1c;
    DAT_00464bc0 = 0;
  }
  else {
    DAT_00464b10 = DAT_00464b20;
    FUN_002c00b4(DAT_00464b9c);
    **(unsigned int **)(temp_v1 + 0xac) = DAT_00464b10;
    DAT_00464bbc = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
