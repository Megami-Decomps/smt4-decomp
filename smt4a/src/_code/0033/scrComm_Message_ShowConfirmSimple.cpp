#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_00237898(unsigned int, unsigned int, unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_001695a0. */
extern unsigned int FUN_0016a0f0(unsigned int);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00237898. */
extern unsigned int FUN_002deb84(void);


void scrComm_Message_ShowConfirmSimple(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_0016a0f0(0x1e);
  temp_v2 = FUN_002deb84();
  FUN_001695a0();
  FUN_00237898(temp_v1,temp_v0,temp_v2,6,0);
  return;
}

} /* extern "C" */
