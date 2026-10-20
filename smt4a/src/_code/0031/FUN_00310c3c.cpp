/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310c3c` (_code @ 0x310c3c, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fbc1a(int, int);
int FUN_00300900(int, int);
int FUN_00300934(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002ee9da(int);
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: FUN_00300900. */
/* Supplied declaration required: FUN_00300934. */


void FUN_00310c3c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  signed char temp_v0;
  int temp_v1;
  int temp_v2;
  
  
  *(unsigned char *)(param_2 + 4) = 0;
  temp_v0 = *(signed char *)(param_1 + 0x3b);
  temp_v2 = 0;
  if (((temp_v0 != '\0') ||
      ((FUN_00300900(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (FUN_00300934(param_1,&temp_v2), *(char *)(param_1 + 4) == '\0')))) &&
     ((temp_v1 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((((FUN_00300934(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
           (FUN_00300934(param_1,param_2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
          (FUN_00300934(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
         ((FUN_00300934(param_1,param_2 + 0x14), *(char *)(param_1 + 4) == '\0' &&
          (FUN_002fbc1a(param_1,param_2 + 0x18), *(char *)(param_1 + 4) == '\0')))) &&
        ((FUN_00300934(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0' && (temp_v0 == '\0'))))
       && (((unsigned int)(temp_v1 + temp_v2) < *(unsigned int *)(param_1 + 0xc) ||
           (temp_v1 = FUN_002ee9da(param_1), temp_v1 == 0)))))))) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  return;
}

} /* extern "C" */
