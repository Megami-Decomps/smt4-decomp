/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f4648` (_code @ 0x4f4648, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(...);
int asdListBoxCreate(...);
int asdListBoxAddItem(...);
int FUN_002e0898(...);
int FUN_002ea508(...);
int asdListBoxSetIntItem(...);
int FUN_00317508(...);
int FUN_00340edc(...);
int jobSetWork7C(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_005281bc; /* 0x5281bc */

/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: asdListBoxCreate. */
/* Supplied declaration required: asdListBoxAddItem. */
/* Supplied declaration required: FUN_002e0898. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: jobSetWork7C. */


void FUN_004f4648(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  asdListBoxCreate(param_3,0xf0,0x10,0x20,4);
  *(unsigned int *)(param_1 + 0xc) = param_3;
  jobSetWork7C();
  FUN_002e0898(param_3,0xc);
  FUN_002ea508(param_3,"ENEMY EDIT");
  asdListBoxAddItem(param_3,"窔疒ꮈ芖");
  asdListBoxAddItem(param_3,"瞂窔疒쪈疒쾕墍");
  asdListBoxAddItem(param_3,"碂窔疒쪈疒쾕墍");
  asdListBoxAddItem(param_3,&DAT_005281bc);
  FUN_001568f8();
  asdListBoxSetIntItem(param_3,0,*(unsigned short *)(param_2 + 2),1,999,0);
  FUN_00340edc(param_3,1,0xfffffc18);
  FUN_00340edc(param_3,2,0xfffffc18,1000);
  FUN_00340edc(param_3,3,0xfffffc18,1000);
  FUN_00317508(param_3,1);
  return;
}

} /* extern "C" */
