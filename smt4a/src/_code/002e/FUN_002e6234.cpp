#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int FUN_0018719c(void);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);


unsigned int FUN_002e6234(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [9];
  
  temp_v5[0] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  temp_v5[5] = 0;
  temp_v5[6] = 0;
  temp_v5[7] = 0;
  temp_v0 = dataTableGet(0x35,1);
  puVar2 = (unsigned short *)dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  temp_v4 = 0;
  for (temp_v3 = 0; temp_v3 < temp_v1; temp_v3 = temp_v3 + 1) {
    if ((((*puVar2 == param_1) && ((puVar2[7] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
        ((puVar2[8] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
       (((puVar2[9] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)) &&
        ((puVar2[10] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))))) {
      temp_v5[temp_v4] = (unsigned int)puVar2;
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 8) {
        return temp_v5[0];
      }
    }
    puVar2 = puVar2 + 0x2a;
  }
  return temp_v5[0];
}

} /* extern "C" */
