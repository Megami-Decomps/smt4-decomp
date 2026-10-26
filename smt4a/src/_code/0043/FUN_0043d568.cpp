#include "common.h"

struct Unk5C0AFC;

extern "C" {
extern Unk5C0AFC *DAT_005c0afc;
void FUN_0043df70(Unk5C0AFC *object, u32 value);

void FUN_0043d568(u32 value)
{
    if (DAT_005c0afc != NULL) {
        FUN_0043df70(DAT_005c0afc, value);
    }
}
}
