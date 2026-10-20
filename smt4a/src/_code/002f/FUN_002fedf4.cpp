/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fedf4` (_code @ 0x2fedf4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned char *);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002fa124(unsigned char [8], unsigned char *, unsigned int **);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_005592b4; /* 0x5592b4 */
extern unsigned char DAT_0062e588; /* 0x62e588 */
extern unsigned int *DAT_0062e58c; /* 0x62e58c */
extern unsigned int *DAT_0062e594; /* 0x62e594 */
extern unsigned char DAT_0062e59c; /* 0x62e59c */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e9318(unsigned int *);
extern int FUN_002fa114(unsigned int **);
/* Supplied declaration required: FUN_002fa124. */


int FUN_002fedf4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [12];
  unsigned int *temp_v4 [3];
  
  *param_1 = (unsigned int)&DAT_005592b4;
  FUN_002e6e34(temp_v3,&DAT_0062e59c);
  for (temp_v4[0] = DAT_0062e58c; (temp_v4[0] != DAT_0062e594 && (temp_v4[0] != param_1));
      temp_v4[0] = (unsigned int *)temp_v4[0][1]) {
  }
  temp_v0 = FUN_002fa114(temp_v4);
  if (temp_v0 != 0) {
    temp_v1 = temp_v4[0];
    FUN_002fa124(temp_v2,&DAT_0062e588,&temp_v1);
  }
  FUN_002e6e5c(temp_v3);
  temp_v0 = FUN_002e9318(param_1 + 3);
  return temp_v0 - 0xc;
}

} /* extern "C" */
