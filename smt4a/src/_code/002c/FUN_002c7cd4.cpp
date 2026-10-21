#include "common.h"

extern "C" {

extern void statusDownInitializeSkillList(void);
extern void FUN_002c7ce8(int value);
void FUN_002c7cd4(void)
{
    statusDownInitializeSkillList();
    FUN_002c7ce8(6);
}

} /* extern "C" */
