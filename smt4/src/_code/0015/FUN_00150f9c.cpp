#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_STORAGE_s____A_A_A_A_A_A_00473548_31_1_DEFINED
#define ROMWRIGHT_STORAGE_s____A_A_A_A_A_A_00473548_31_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s____A_A_A_A_A_A_00473548_31_1 {
    char whole[31];
    unsigned char u1[31];
    signed char s1[31];
};
typedef char romwright_storage_s____A_A_A_A_A_A_00473548_31_1_size_check[(sizeof(union romwright_storage_s____A_A_A_A_A_A_00473548_31_1) == 31) ? 1 : -1];
typedef char romwright_storage_s____A_A_A_A_A_A_00473548_31_1_u1_width_check[(sizeof(((union romwright_storage_s____A_A_A_A_A_A_00473548_31_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____A_A_A_A_A_A_00473548_31_1_s1_width_check[(sizeof(((union romwright_storage_s____A_A_A_A_A_A_00473548_31_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s____A_A_A_A_A_A_00473548_31_1 s____A_A_A_A_A_A_00473548; /* 0x473548 */


unsigned int FUN_00150f9c(void)

{
  (*(unsigned int *)&s____A_A_A_A_A_A_00473548.u1[0]) = (*(unsigned int *)&s____A_A_A_A_A_A_00473548.u1[0]) * 0x19660d + 0x3c6ef35f;
  return (unsigned int)(*(unsigned int *)&s____A_A_A_A_A_A_00473548.u1[0]) >> 0x10;
}

} /* extern "C" */
