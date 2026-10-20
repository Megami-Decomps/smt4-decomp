#include "romwright_types.h"

extern "C" {

int FUN_002118e4(int);
int FUN_00250d84(unsigned int, int);
int FUN_00295a18(unsigned int, int);
int scrGetArg(int);
int FUN_002b8e84(int);

/* Supplied declaration required: FUN_002118e4. */
/* Supplied declaration required: FUN_00250d84. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002b8e84. */
extern int FUN_002cdc00(void);


unsigned int FUN_002dba38(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  if (temp_v1 < 0) {
    FUN_00250d84(temp_v0,-temp_v1);
  }
  else {
    FUN_00295a18(temp_v0,temp_v1);
  }
  temp_v2 = FUN_002cdc00();
  if (temp_v2 != 0) {
    FUN_002b8e84(0x1000174);
    FUN_002118e4(temp_v1);
  }
  return 1;
}

} /* extern "C" */
