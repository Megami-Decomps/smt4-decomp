#include "romwright_types.h"
#include "code/Code0049_Smt4a.h"

extern "C" {

int dataTableGet(int, int);
int dataTableGetCount(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);


void FUN_0049d048(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x17,1);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (param_2 >= temp_v2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v1 + param_2 * 0x8c;
  }
  dataTableGet(0x17,*(unsigned short *)(temp_v1 + 0x26) + 2);
  dataTableGetCount();
  return;
}

} /* extern "C" */
