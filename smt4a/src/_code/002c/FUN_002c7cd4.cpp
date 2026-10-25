#include "common.h"

extern "C" {

extern void statusDownInitializeSkillList(void);
extern void statusDownSwitchTab(int value);
void FUN_002c7cd4(void)
{
    statusDownInitializeSkillList();
    statusDownSwitchTab(6);
}

} /* extern "C" */
