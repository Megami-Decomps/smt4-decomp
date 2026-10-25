#include "romwright_types.h"

extern "C" {

int btlTalkBustUpDestroy(void);
int resultSetMenuState(int, int);
int FUN_0029e788(void);
int FUN_0029e874(int);
int scrScriptProcessDestroy(unsigned int);
int asdMemFree(unsigned int);

/* Supplied declaration required: btlTalkBustUpDestroy. */
/* Supplied declaration required: resultSetMenuState. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */


unsigned int FUN_0029541c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  scrScriptProcessDestroy(*(unsigned int *)(param_1 + 0x3574));
  asdMemFree(*(unsigned int *)(param_1 + 0x3578));
  btlTalkBustUpDestroy();
  *(unsigned char *)(param_1 + 0xd640) = 0;
  temp_v0 = *(int *)(param_1 + 0xcf78) + 1;
  *(int *)(param_1 + 0xcf78) = temp_v0;
  if (*(int *)(param_1 + 0xcf74) == temp_v0) {
    resultSetMenuState(param_1,0x14);
    return 0;
  }
  FUN_0029e874(1);
  FUN_0029e788();
  resultSetMenuState(param_1,9);
  return 1;
}

} /* extern "C" */
