/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273b78` (_code @ 0x273b78, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002646d4(int);
int FUN_00277bdc(void);
int FUN_0027b65c(unsigned int, unsigned int);
int FUN_00281784(void);
int FUN_00284838(void);
int FUN_002849a4(int);
int FUN_00285574(void);
int FUN_00297a00(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00447e28; /* 0x447e28 */
extern signed char DAT_0049f942; /* 0x49f942 */

/* Supplied declaration required: FUN_002646d4. */
/* Supplied declaration required: FUN_00277bdc. */
/* Supplied declaration required: FUN_0027b65c. */
/* Supplied declaration required: FUN_00281784. */
/* Supplied declaration required: FUN_00284838. */
/* Supplied declaration required: FUN_002849a4. */
/* Supplied declaration required: FUN_00285574. */
/* Supplied declaration required: FUN_00297a00. */


void FUN_00273b78(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00447e28;
  if (DAT_0049f942 == '\0') {
    FUN_00281784();
    temp_v3 = *(unsigned int *)(temp_v0 + 0x2c);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x30);
    FUN_00297a00();
    FUN_0027b65c(temp_v3,temp_v2);
    FUN_00277bdc();
    FUN_00284838();
    FUN_002646d4(1);
    return;
  }
  temp_v1 = FUN_00285574();
  if (temp_v1 != 0) {
    FUN_00281784();
    FUN_00297a00();
    temp_v2 = FUN_00285574();
    FUN_0027b65c(*(unsigned int *)(temp_v0 + 0x2c),temp_v2);
    FUN_002849a4(1);
    FUN_002646d4(1);
    return;
  }
  FUN_00281784();
  FUN_00297a00();
  FUN_002849a4(1);
  FUN_00284838();
  FUN_002646d4(1);
  return;
}

} /* extern "C" */
