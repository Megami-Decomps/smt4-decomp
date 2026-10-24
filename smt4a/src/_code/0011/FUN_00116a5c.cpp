/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116a5c` (_code @ 0x116a5c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned char [12], unsigned int);
int FUN_00302f30(int, unsigned char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char *_ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_00302f30. */


void FUN_00116a5c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1 [12];
  unsigned char temp_v2 [12];
  unsigned int temp_v3 [2];
  
  puVar2 = temp_v1;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002ea41e(temp_v1,*(unsigned int *)(param_1 + 0x70));
  }
  else {
    temp_v3[0] = 0x80010004;
    puVar2 = (unsigned char *)_ZN12OnlineResultC1ERKj(temp_v2,temp_v3);
  }
  FUN_00302f30(param_1,puVar2);
  return;
}

} /* extern "C" */
