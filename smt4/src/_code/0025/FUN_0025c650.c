/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c650` (_code @ 0x25c650, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025c650. */
/* Supplied declaration required: FUN_0025c9dc. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0025c650(int param_1,int param_2,int param_3)

{
/* irregular: 5 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
LAB_0025c654:
  do {
    temp_v1 = param_3;
    if ((*(unsigned int *)(param_2 + 0x98) & 1) == 0) {
      for (temp_v3 = *(int *)(param_1 + 0x8c); temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xac)) {
        if (((*(unsigned int *)(temp_v3 + 0x98) & 1) != 0) &&
           (*(int *)(temp_v3 + 0x90) == *(int *)(param_2 + 0x90))) {
          FUN_0025c650(param_1,temp_v3,temp_v1);
        }
      }
    }
    if (param_2 == temp_v1) {
      return;
    }
    if ((*(unsigned int *)(param_2 + 0x98) & 1) == 0) {
      temp_v3 = *(int *)(param_2 + 0x90);
      if (*(int *)(temp_v3 + 0x28) != 0) {
        FUN_002c415c();
        *(unsigned int *)(temp_v3 + 0x20) = 0;
        *(unsigned int *)(temp_v3 + 0x24) = 0;
        *(unsigned int *)(temp_v3 + 0x28) = 0;
      }
      temp_v3 = *(int *)(temp_v1 + 0x90);
      FUN_0025c9dc(*(unsigned int *)(param_2 + 0x90),*(unsigned int *)(temp_v3 + 0x20),
                   *(unsigned int *)(temp_v3 + 0x24),*(unsigned short *)(temp_v3 + 0x1c));
    }
    temp_v2 = 0;
    *(unsigned int *)(param_2 + 0x98) = *(unsigned int *)(param_2 + 0x98) | 2;
    *(unsigned int *)(param_2 + 0x94) = *(unsigned int *)(temp_v1 + 0x90);
    param_3 = *(int *)(param_1 + 0x8c);
    for (temp_v3 = param_3; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xac)) {
      if (temp_v3 == temp_v1) goto LAB_0025c744;
      temp_v2 = temp_v2 + 1;
    }
    temp_v2 = 0;
LAB_0025c744:
    temp_v0 = 0;
    for (temp_v3 = param_3; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xac)) {
      if (temp_v3 == param_2) goto LAB_0025c76c;
      temp_v0 = temp_v0 + 1;
    }
    temp_v0 = 0;
LAB_0025c76c:
    if (temp_v2 <= temp_v0) {
      return;
    }
    while( 1 ) {
      if (param_3 == 0) {
        return;
      }
      temp_v2 = *(unsigned int *)(param_3 + 0x98) & 3;
      temp_v4 = temp_v2 == 2;
      if (temp_v4) {
        temp_v2 = *(unsigned int *)(param_3 + 0x94);
      }
      if (temp_v4 && temp_v2 == *(unsigned int *)(temp_v1 + 0x90)) break;
      param_3 = *(int *)(param_3 + 0xac);
    }
    if (param_3 == 0) {
      return;
    }
    *(unsigned int *)(param_3 + 0x98) = *(unsigned int *)(param_3 + 0x98) & 0xfffffffd;
    *(unsigned int *)(param_3 + 0x94) = 0;
    FUN_0025c650(param_1,param_3);
    for (temp_v3 = *(int *)(param_1 + 0x8c); param_2 = temp_v1, temp_v3 != 0;
        temp_v3 = *(int *)(temp_v3 + 0xac)) {
      temp_v2 = *(unsigned int *)(temp_v3 + 0x98) & 3;
      temp_v4 = temp_v2 == 2;
      if (temp_v4) {
        temp_v2 = *(unsigned int *)(temp_v3 + 0x94);
      }
      if (temp_v4 && temp_v2 == *(unsigned int *)(temp_v1 + 0x90)) goto joined_r0x0025c7ec;
    }
  } while( 1 );
joined_r0x0025c7ec:
  while (temp_v3 != 0) {
    FUN_0025c650(param_1,temp_v3,param_3);
    temp_v3 = *(int *)(param_1 + 0x8c);
    while( 1 ) {
      if (temp_v3 == 0) goto LAB_0025c654;
      temp_v2 = *(unsigned int *)(temp_v3 + 0x98) & 3;
      temp_v4 = temp_v2 == 2;
      if (temp_v4) {
        temp_v2 = *(unsigned int *)(temp_v3 + 0x94);
      }
      if (temp_v4 && temp_v2 == *(unsigned int *)(temp_v1 + 0x90)) break;
      temp_v3 = *(int *)(temp_v3 + 0xac);
    }
  }
  goto LAB_0025c654;
}
