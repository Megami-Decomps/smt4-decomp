/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa800` (_code @ 0x1fa800, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00266f30(int);
int FUN_00266fac(...);
int FUN_00287aec(void);
int libc_strcpy(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_deferredMapModels; /* 0x447e58 */

/* Supplied declaration required: FUN_00266f30. */
/* Supplied declaration required: FUN_00266fac. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: libc_strcpy. */


void FUN_001fa800(void)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  int temp_v2;
  unsigned long long temp_v3;
  
  temp_v1 = 0;
  temp_v3 = (unsigned long long)in_s0;
  do {
    if (*(char *)(g_deferredMapModels + temp_v1 * 0x38 + 0xc) != '\0') {
      temp_v2 = (int)temp_v3;
      FUN_00287aec();
      if (temp_v2 < 0x43480000) {
        temp_v0 = (int)*(short *)(g_deferredMapModels + temp_v1 * 0x38 + 0x14);
        FUN_00266f30(temp_v0);
        temp_v2 = g_deferredMapModels;
        *(unsigned char *)(g_deferredMapModels + 0xe0c) = 1;
        *(int *)(temp_v2 + 0xe10) = temp_v1;
        *(int *)(temp_v2 + 0xe14) = (int)*(short *)(temp_v2 + temp_v1 * 0x38 + 0x12);
        libc_strcpy(temp_v2 + 0xe1c,temp_v0 + 8);
        FUN_00266fac(1,temp_v1);
        return;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  FUN_00266fac(0);
  *(unsigned char *)(g_deferredMapModels + 0xe0c) = 0;
  return;
}

} /* extern "C" */
