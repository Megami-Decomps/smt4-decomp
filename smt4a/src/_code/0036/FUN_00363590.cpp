/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363590` (_code @ 0x363590, 0x258 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);
int FUN_003c2df0(...);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00363590. */
/* Supplied declaration required: FUN_003c2df0. */


void FUN_00363590(int param_1,int param_2)

{
/* irregular: 6 unstructured edge(s); 5 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_2 + 0xb0) != 0) {
    *(unsigned int *)(*(int *)(param_2 + 0xb0) + 0xac) = *(unsigned int *)(param_2 + 0xac);
  }
  else {
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_2 + 0xac);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    *(unsigned int *)(*(int *)(param_2 + 0xac) + 0xb0) = *(unsigned int *)(param_2 + 0xb0);
  }
  else {
    *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_2 + 0xb0);
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) - 1;
  if ((*(unsigned int *)(param_2 + 0x98) & 1) == 0) {
    for (temp_v0 = *(int *)(param_1 + 0x8c); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0xac)) {
      if (((*(unsigned int *)(temp_v0 + 0x98) & 1) != 0) &&
         (*(int *)(temp_v0 + 0x90) == *(int *)(param_2 + 0x90))) {
        do {
          if (temp_v0 == 0) goto LAB_0036366c;
          FUN_00363590(param_1, /* unrecovered */ 0);
          temp_v0 = *(int *)(param_1 + 0x8c);
          while( 1 ) {
            if (temp_v0 == 0) goto LAB_0036366c;
            if (((*(unsigned int *)(temp_v0 + 0x98) & 1) != 0) &&
               (*(int *)(temp_v0 + 0x90) == *(int *)(param_2 + 0x90))) break;
            temp_v0 = *(int *)(temp_v0 + 0xac);
          }
        } while( 1 );
      }
    }
LAB_0036366c:
    if ((*(unsigned int *)(param_2 + 0x98) & 2) == 0) {
      temp_v0 = *(int *)(param_1 + 0x8c);
      while( 1 ) {
        if (temp_v0 == 0) goto LAB_00363768;
        temp_v1 = *(unsigned int *)(temp_v0 + 0x98) & 3;
        temp_v3 = temp_v1 == 2;
        if (temp_v3) {
          temp_v1 = *(unsigned int *)(temp_v0 + 0x94);
        }
        if (temp_v3 && temp_v1 == *(unsigned int *)(param_2 + 0x90)) break;
        temp_v0 = *(int *)(temp_v0 + 0xac);
      }
      if (temp_v0 != 0) {
        *(unsigned int *)(temp_v0 + 0x98) = *(unsigned int *)(temp_v0 + 0x98) & 0xfffffffd;
        *(unsigned int *)(temp_v0 + 0x94) = 0;
        FUN_003c2df0(param_1,temp_v0);
        temp_v2 = *(int *)(param_1 + 0x8c);
        while( 1 ) {
          if (temp_v2 == 0) goto LAB_00363768;
          temp_v1 = *(unsigned int *)(temp_v2 + 0x98) & 3;
          temp_v3 = temp_v1 == 2;
          if (temp_v3) {
            temp_v1 = *(unsigned int *)(temp_v2 + 0x94);
          }
          if (temp_v3 && temp_v1 == *(unsigned int *)(param_2 + 0x90)) break;
          temp_v2 = *(int *)(temp_v2 + 0xac);
        }
        do {
          if (temp_v2 == 0) break;
          FUN_003c2df0(param_1,temp_v2,temp_v0);
          temp_v2 = *(int *)(param_1 + 0x8c);
          while( 1 ) {
            if (temp_v2 == 0) goto LAB_00363768;
            temp_v1 = *(unsigned int *)(temp_v2 + 0x98) & 3;
            temp_v3 = temp_v1 == 2;
            if (temp_v3) {
              temp_v1 = *(unsigned int *)(temp_v2 + 0x94);
            }
            if (temp_v3 && temp_v1 == *(unsigned int *)(param_2 + 0x90)) break;
            temp_v2 = *(int *)(temp_v2 + 0xac);
          }
        } while( 1 );
      }
    }
LAB_00363768:
    if ((*(unsigned int *)(param_2 + 0x98) & 1) == 0) {
      temp_v0 = *(int *)(param_2 + 0x90);
      if (*(int *)(temp_v0 + 8) != 0) {
        (**(romwright_code **)((unsigned int)*(unsigned short *)(temp_v0 + 4) * 0x44 + 0x5b3284))();
      }
      if (*(int *)(temp_v0 + 0x18) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v0 + 0x10) = 0;
        *(unsigned int *)(temp_v0 + 0x14) = 0;
        *(unsigned int *)(temp_v0 + 0x18) = 0;
      }
      if (*(int *)(temp_v0 + 0x28) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v0 + 0x20) = 0;
        *(unsigned int *)(temp_v0 + 0x24) = 0;
        *(unsigned int *)(temp_v0 + 0x28) = 0;
      }
      FUN_0019a5a0(temp_v0);
    }
  }
  FUN_0019a5a0(param_2);
  return;
}

} /* extern "C" */
