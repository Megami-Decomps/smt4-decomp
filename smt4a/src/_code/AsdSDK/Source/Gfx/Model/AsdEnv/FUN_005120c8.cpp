/* NON_MATCHING: compiler folds command constants and changes array-init argument scheduling. */
#include "common.h"
struct CommandState {u32 unk00,first,unk08,second,unk10,third;};
extern "C" {
extern u32 DAT_00646598[24];extern CommandState DAT_005c0eb4;
void FUN_001f3dd0(void*);void FUN_002f5020(void*,void(*)(void*),u32,u32);
/* Publishes the object, initializes its command array and sets the default commands. */
void FUN_005120c8(void *object,void **output){*output=object;FUN_002f5020(DAT_00646598,FUN_001f3dd0,4,24);DAT_005c0eb4.first=0xF0111;DAT_005c0eb4.second=0xF0110;DAT_005c0eb4.third=0x803F0112;}
}
