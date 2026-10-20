#include "romwright_types.h"

extern "C" {

int FUN_0037da14(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_6_stack;

/* Supplied declaration required: FUN_0037da14. */


void nw_snd_internal_driver_MmlParser_NoteOnCommandProc
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  FUN_0037da14(param_2,param_3,param_4,param_5,param_6);
  return;
}

} /* extern "C" */
