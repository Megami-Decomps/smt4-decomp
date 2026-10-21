/* NON_MATCHING: unit omits LDR ip,[pc,#0x5c] at 0x330e4c; its five-flag table copy consumes that missing IP setup. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int gameFlagIsSet(unsigned int);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int scrCommCountFlagsExceptIndex(void)

{
/* irregular: irregular input(s): in_r12; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *in_r12;
  unsigned int temp_v4 [5];
  
  temp_v3 = 0;
  temp_v4[0] = *in_r12;
  temp_v4[1] = in_r12[1];
  temp_v4[2] = in_r12[2];
  temp_v4[3] = in_r12[3];
  temp_v4[4] = in_r12[4];
  temp_v0 = scrGetArg(0);
  temp_v2 = 0;
  do {
    if ((temp_v0 != temp_v2) && (temp_v1 = gameFlagIsSet(temp_v4[temp_v2]), temp_v1 != 0)) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
