#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_002865f8(void);
extern int FUN_0028660c(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);


void scrComm_Message_Show(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0028660c();
  temp_v0 = (temp_v0 == 0x14) ? 5 : temp_v0;
  temp_v1 = FUN_002865f8();
  temp_v2 = FUN_00296cc8(0);
  temp_v3 = FUN_002893d8();
  FUN_002866b4(temp_v1,temp_v2,temp_v3,temp_v0,0,0);
  return;
}

} /* extern "C" */
