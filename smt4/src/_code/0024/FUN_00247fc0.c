/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247fc0` (_code @ 0x247fc0, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: while (LOAD). */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00247fc0(int param_1,unsigned int param_2)

{
/* irregular: 4 unstructured edge(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v3 = 0xffff;
  puVar2 = *(unsigned short **)(temp_v1 + 0x10);
  do {
    if (puVar2 == (unsigned short *)0x0) {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      aeabi_uidivmod(temp_v3,(unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 8) + 0xc) *
                           (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 8) + 0xe));
      return;
    }
    temp_v5 = param_2 <= *puVar2;
    temp_v4 = *puVar2 == param_2;
    if (!temp_v5 || temp_v4) {
      temp_v5 = puVar2[1] <= param_2;
      temp_v4 = param_2 == puVar2[1];
    }
    if (!temp_v5 || temp_v4) {
      temp_v0 = puVar2[2];
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            puVar4 = puVar2 + 7;
            puVar2 = puVar2 + 6 + ((unsigned int)puVar2[6] * 2 - 1);
            if (puVar2 >= puVar4) {
              do {
                puVar3 = puVar4 + ((((int)puVar2 - (int)puVar4) >> 2) / 2) * 2;
                temp_v2 = (unsigned int)*puVar3;
                if (temp_v2 >= param_2 && temp_v2 != param_2) {
                  puVar2 = puVar3 + -2;
                }
                if (temp_v2 < param_2) {
                  puVar4 = puVar3 + 2;
                }
                if (temp_v2 == param_2) {
                  temp_v3 = (unsigned int)puVar3[1];
                  break;
                }
              } while (puVar4 <= puVar2);
            }
          }
        }
        else {
          temp_v3 = (unsigned int)puVar2[(param_2 - *puVar2) + 6];
        }
      }
      else {
        temp_v3 = ((unsigned int)puVar2[6] + (param_2 - *puVar2)) & 0xffff;
      }
      if (temp_v3 == 0xffff) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      }
      aeabi_uidivmod(temp_v3,(unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 8) + 0xc) *
                           (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 8) + 0xe));
      return;
    }
    puVar2 = *(unsigned short **)(puVar2 + 4);
  } while( 1 );
}
