/* NON_MATCHING: compiler unrolls the word initialization loop. */
#include "common.h"
struct WordArray {u32 *values;u32 count;};
/* Binds and clears all words in the array. */
extern "C" void FUN_0045b498(WordArray *array,u32 *values,u32 count){array->values=values;array->count=count;for(u32 i=0;i<count;++i)array->values[i]=0;}
