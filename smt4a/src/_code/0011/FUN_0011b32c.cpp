/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b32c` (_code @ 0x11b32c, 0xa6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fbc1a(int, int);
int streamExtractU8(int, int);
int streamReadWord(...);
int streamReadU64(int, int);
int FUN_003072ae(int, int);
int FUN_00307316(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int streamSeek(int);
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: streamExtractU8. */
/* Supplied declaration required: streamReadWord. */
/* Supplied declaration required: streamReadU64. */
/* Supplied declaration required: FUN_003072ae. */
/* Supplied declaration required: FUN_00307316. */


void FUN_0011b32c(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  signed char temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)(param_2 + 4) = 0;
  temp_v0 = *(signed char *)(param_1 + 0x3b);
  temp_v2 = 0;
  if (((temp_v0 != '\0') ||
      ((streamExtractU8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (streamReadWord(param_1,&temp_v2), *(char *)(param_1 + 4) == '\0')))) &&
     ((temp_v1 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      (((((FUN_002fbc1a(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (FUN_003072ae(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
         (streamReadWord(param_1,param_2 + 0x1c), *(char *)(param_1 + 4) == '\0')) &&
        ((FUN_00307316(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0' &&
         (streamReadU64(param_1,param_2 + 0x30), *(char *)(param_1 + 4) == '\0')))) &&
       ((temp_v0 == '\0' &&
        (((unsigned int)(temp_v1 + temp_v2) < *(unsigned int *)(param_1 + 0xc) ||
         (temp_v1 = streamSeek(param_1), temp_v1 == 0)))))))))) {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  return;
}

} /* extern "C" */
