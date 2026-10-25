#include "romwright_types.h"
#include "bible/bibleDevil.h"

extern "C" {

int memClearWords(int, int);
int FUN_001dba90(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: memClearWords. */
/* Supplied declaration required: FUN_001dba90. */


void FUN_0029ede8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 * 0x60 + 0x4def48;
  memClearWords(temp_v0,0x60);
  FUN_001dba90(temp_v0,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
