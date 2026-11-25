#include "code/Code002c.h"
#include "util/BitsAndBytes.h"

enum { SAVE_FLAG_ROWS_OFFSET = 0xCF0 };

/* Sets or clears bit `bit` of group `group`'s bit table. */
extern "C" void saveSetFlagRow(s32 group, u32 bit, s32 set)
{
    bitArrayWrite(saveGetFlagRowTable() + SAVE_FLAG_ROWS_OFFSET + group * 8, bit, set);
}
