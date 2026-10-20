#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4;


typedef struct { unsigned char pad[0xae]; unsigned short v; unsigned char pad2[2]; } E;
typedef struct { unsigned char pad[0x500]; E e[1]; } S;
unsigned short FUN_003aeaf0(unsigned int param_1)

{
  unsigned short temp_v0;
  
  if (param_1 >= 6) {
    temp_v0 = 0;
  }
  else {
    S *s = (S *)*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4);
    temp_v0 = *(unsigned short *)((unsigned char *)(&s->e[0]) + param_1 * 4 + 0xae);
  }
  return temp_v0;
}

} /* extern "C" */
