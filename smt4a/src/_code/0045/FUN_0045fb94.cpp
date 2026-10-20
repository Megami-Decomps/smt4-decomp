/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fb94` (_code @ 0x45fb94, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001911a4(unsigned int, int);
int FUN_001af148(int);
int FUN_001af214(void);
int FUN_0045f268(int *);
int playerInitReset(int *);

typedef int romwright_code(...);
extern unsigned int FUN_00175678(void);
/* Supplied declaration required: FUN_001911a4. */
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001af214. */
/* Supplied declaration required: FUN_0045f268. */
/* Supplied declaration required: playerInitReset. */


void FUN_0045fb94(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  temp_v1 = FUN_00175678();
  temp_v2 = temp_v0 + 4;
  FUN_001af214();
  if (temp_v2 == 0) {
    FUN_001911a4(temp_v1,1);
    FUN_001af148(temp_v0 + 4);
  }
  FUN_0045f268(param_1);
  playerInitReset(param_1 + 0x8c5);
  param_1[0xc10] = 0;
  temp_v0 = 0;
  do {
    param_1[temp_v0 * 4 + 0xc15] = 0;
    param_1[temp_v0 * 4 + 0xc12] = 0;
    param_1[temp_v0 * 4 + 0xc13] = 0;
    temp_v2 = temp_v0 + 1;
    param_1[temp_v0 * 4 + 0xc14] = 1;
    param_1[temp_v0 * 4 + 0xc13] = 0x3f800000;
    temp_v0 = temp_v2;
  } while (temp_v2 < 4);
  *(unsigned char *)((int)param_1 + 0x328e) = 1;
  return;
}

} /* extern "C" */
