#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(int);
int FUN_002bf6fc(unsigned int, unsigned int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002bf6fc. */
extern unsigned int *FUN_002c08f0(void);


unsigned int FUN_00310c14(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00296cc8(0);
  puVar1 = (unsigned int *)FUN_002c08f0();
  temp_v1 = *puVar1;
  temp_v0 = FUN_00296cc8(1);
  FUN_002bf6fc(temp_v1,temp_v0,1,1,1);
  return 1;
}

} /* extern "C" */
