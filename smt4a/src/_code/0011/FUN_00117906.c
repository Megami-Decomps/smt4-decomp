/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117906` (_code @ 0x117906, 0x18a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00128ee6. */
extern int FUN_002ee9da(int);
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: FUN_00300900. */
/* Supplied declaration required: FUN_00300934. */
/* Supplied declaration required: FUN_003026bc. */
/* Supplied declaration required: FUN_00303608. */
/* Supplied declaration required: FUN_00303610. */
/* Supplied declaration required: FUN_0030363c. */
/* Supplied declaration required: FUN_0030368e. */
/* Supplied declaration required: FUN_00303698. */


void FUN_00117906(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)(param_2 + 4) = 0;
  temp_v0 = *(char *)(param_1 + 0x3b);
  temp_v2 = 0;
  if ((((temp_v0 != '\0') ||
       ((FUN_00300900(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (FUN_00300934(param_1,&temp_v2), *(char *)(param_1 + 4) == '\0')))) &&
      (temp_v1 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     (((((FUN_00303608(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
         (FUN_00300934(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
        (FUN_00300934(param_1,param_2 + 0x14), *(char *)(param_1 + 4) == '\0')) &&
       ((FUN_002fbc1a(param_1,param_2 + 0x18), *(char *)(param_1 + 4) == '\0' &&
        (FUN_00303610(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0')))) &&
      ((((FUN_0030363c(param_1,param_2 + 0x24), *(char *)(param_1 + 4) == '\0' &&
         ((FUN_0030368e(param_1,param_2 + 0x44), *(char *)(param_1 + 4) == '\0' &&
          (FUN_0030368e(param_1,param_2 + 0x58), *(char *)(param_1 + 4) == '\0')))) &&
        ((FUN_003026bc(param_1,param_2 + 0x70), *(char *)(param_1 + 4) == '\0' &&
         (((((FUN_003026bc(param_1,param_2 + 0x78), *(char *)(param_1 + 4) == '\0' &&
             (FUN_00303610(param_1,param_2 + 0x80), *(char *)(param_1 + 4) == '\0')) &&
            (FUN_00300900(param_1,param_2 + 0x82), *(char *)(param_1 + 4) == '\0')) &&
           (((FUN_00300934(param_1,param_2 + 0x84), *(char *)(param_1 + 4) == '\0' &&
             (FUN_00300934(param_1,param_2 + 0x88), *(char *)(param_1 + 4) == '\0')) &&
            ((FUN_00300934(param_1,param_2 + 0x8c), *(char *)(param_1 + 4) == '\0' &&
             ((FUN_003026bc(param_1,param_2 + 0x90), *(char *)(param_1 + 4) == '\0' &&
              (FUN_003026bc(param_1,param_2 + 0x98), *(char *)(param_1 + 4) == '\0')))))))) &&
          (FUN_00128ee6(param_1,param_2 + 0xa0), *(char *)(param_1 + 4) == '\0')))))) &&
       (((FUN_00303698(param_1,param_2 + 0xac), *(char *)(param_1 + 4) == '\0' && (temp_v0 == '\0'))
        && (((unsigned int)(temp_v1 + temp_v2) < *(unsigned int *)(param_1 + 0xc) ||
            (temp_v1 = FUN_002ee9da(param_1), temp_v1 == 0)))))))))) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  return;
}
