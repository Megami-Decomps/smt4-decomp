#include "romwright_types.h"

extern "C" {

int FUN_00262a38(void);
int FUN_002c415c(int);
int FUN_002c43b4(unsigned int, int);
int FUN_002cd8d4(void);
int FUN_00310ac0(void);
int taskUpdateAll(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00433260; /* 0x433260 */

/* Supplied declaration required: FUN_00262a38. */
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002cd8d4. */
/* Supplied declaration required: FUN_00310ac0. */
/* Supplied declaration required: taskUpdateAll. */


void FUN_001dc9d0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x528));
  if (temp_v1 != 0) {
    FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x528),0);
  }
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x52c));
  if (temp_v1 != 0) {
    FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x52c),0);
  }
  FUN_00262a38();
  FUN_002cd8d4();
  if (*(char *)(temp_v0 + 0x530) == '\0') {
    FUN_00310ac0();
  }
  FUN_002c415c(temp_v0);
  DAT_00433260 = 0;
  taskUpdateAll();
  return;
}

} /* extern "C" */
