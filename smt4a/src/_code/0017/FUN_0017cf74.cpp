/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017cf74` (_code @ 0x17cf74, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b600(void);
int FUN_0018b610(void);
int FUN_001963e0(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017cf74(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0061a50c;
  puVar2 = (unsigned char *)(*(int *)(DAT_0061a50c + 0x18) + *(int *)(DAT_0061a50c + 0x20) * 0x1c);
  *puVar2 = 0;
  *(unsigned int *)(puVar2 + 4) = param_1;
  *(unsigned int *)(puVar2 + 8) = param_2;
  *(unsigned int *)(puVar2 + 0xc) = param_3;
  FUN_0018b600();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_0061a510 == temp_v0) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  FUN_0018b610();
  return;
}

} /* extern "C" */
